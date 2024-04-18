%option noyywrap
%option yylineno
%{
#include<bits/stdc++.h>
#include "parser.tab.hpp"
// #include "node.hpp"
using std::stack;
stack<int> indents;
int indent = 0;
int space = 0;
bool spaceset = false;
int inside_line = 0;
int inside_brack = 0;
int sq_pos = 0;
int cu_pos = 0;
int br_pos = 0;
// int setspace()
// {
//     spaceset = true;
//     if(indent > indents.top()){ 
//     indents.push(indent); 
//     printf("INDENT\n");
//     return 1;
//     } 
//     int ctr = 0; 
//     while(indent < indents.top()){ 
//     ctr++; 
//     indents.pop(); 
//     } 
//     if(indents.top() != indent){ 
//     printf("Indentation error\n"); 
//     return 0;
//     } 
//     dedpos = ctr; 
//     return 0;
// }
%}

NEWLINE ([\n])
COMMENT ([#](.*){NEWLINE})
NAME ([A-Za-z_][A-Za-z0-9_]*)

bytesescapeseq ([\\] (.|[\n]))
longbyteschar  ([^\\])
shortbyteschar ([^\\\n"])
longbytesitem  ({longbyteschar}|{bytesescapeseq})
shortbytesitem ({shortbyteschar}|{bytesescapeseq})
longbytes (([']['][']{longbytesitem}*['][']['])|(["]["]["]{longbytesitem}*["]["]["]))
shortbytes  (([']{shortbytesitem}*['])|(["]{shortbytesitem}*["]))
bytesprefix    ("b"|"B"|"br"|"Br"|"bR"|"BR"|"rb"|"rB"|"Rb"|"RB")
bytesliteral   {bytesprefix}({shortbytes}|{longbytes})
stringescapeseq ([\\].)
longstringchar  [^\\'"]
shortstringchar [^\\\n"']
longstringitem  ({longstringchar}|{stringescapeseq})
shortstringitem ({shortstringchar}|{stringescapeseq})
longstring   (([']['][']{longstringitem}*['][']['])|(["]["]["]{longstringitem}*["]["]["]))
shortstring  (([']{shortstringitem}*['])|(["]{shortstringitem}*["]))
stringprefix    ("r"|"u"|"R"|"U"|"f"|"F"|"fr"|"Fr"|"fR"|"FR"|"rf"|"rF"|"Rf"|"RF")
stringliteral   ({stringprefix}?)({shortstring}|{longstring})


ADDASSIGN "+="
SUBASSIGN "-="
MULASSIGN "*="
DIVASSIGN "/="
IDIVASSIGN "//="
MODASSIGN "%="
ATASSIGN "@="
ANDASSIGN "&="
ORASSIGN "|="
XORASSIGN "^="
LSASSIGN "<<="
RSASSIGN ">>="
POWASSIGN "**="
ARROWOP "->"

POW "**"
IDIV "//"
LEFTSHIFT "<<"
RIGHTSHIFT ">>"
LEQ "<="
GEQ ">="
EQUAL "=="
NEQ "!="

nonzerodigit [1-9]
bindigit [0-1]
octdigit [0-7]
hexdigit ({digit}|[a-f]|[A-F])
decinteger (({nonzerodigit}((("_"?){digit})*))|("0"+)((("_"?)"0")*)) 
bininteger ([0][bB](([_]?){bindigit})+)
octinteger ([0][oO](([_]?){octdigit})+)
hexinteger ([0][xX](([_]?){hexdigit})+)
integer ({decinteger}|{bininteger}|{octinteger}|{hexinteger})

floatnumber ({pointfloat}|{exponentfloat})
pointfloat (({digitpart}?{fraction})|({digitpart}[.]))
exponentfloat ({digitpart}|{pointfloat}){exponent}
digitpart {digit}((([_]?){digit})*)
fraction [.]{digitpart}
exponent ("e"|"E")(["+"|"-"]?){digitpart}
digit  [0-9]
imagnumber ({floatnumber}|{digitpart})[jJ]
%x INLINE
%x OUTLINE
%x BRACKET
%%
    if(inside_brack) BEGIN(BRACKET);
    else if(inside_line) BEGIN(INLINE);
    else BEGIN(OUTLINE);
<OUTLINE>[ ] {space++;}


<OUTLINE>{NEWLINE}|{COMMENT} {
    space = 0;
    inside_line = 0;
}
<*><<EOF>> {
    if(indents.size() > 1){
        indents.pop();
        yylval.val = "DEDENT";
        yylval.ptr = new node("", "DEDENT");
        unput(yytext[0]);
        return DEDENT;
    }
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("END", yylval.val);
    return ENDMARKER;
}
<*>\000 {
    if(indents.size() > 1){
        indents.pop();
        yylval.val = "DEDENT";
        yylval.ptr = new node("", "DEDENT");
        unput(yytext[0]);
        return DEDENT;
    }
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("END", yylval.val);
    return ENDMARKER;   
}
<OUTLINE>. {
        int pos = space;
        if(pos > indents.top()){
            inside_line = true;
            unput(yytext[0]);
            indents.push(pos);
            yylval.val = "INDENT";
            yylval.ptr = new node("INDENT", yylval.val);
            return INDENT;
        }
        else if(pos == indents.top()){
            inside_line = true;
            BEGIN(INLINE);
            unput(yytext[0]);
        }
        else if(pos < indents.top()){
            indents.pop();
            unput(yytext[0]);
            yylval.val = "DEDENT";
            yylval.ptr = new node("DEDENT", yylval.val);
            return DEDENT;
        }
    }


<INLINE,BRACKET>("["|"("|"{") {
    sq_pos++;
    if(sq_pos > 0){
        BEGIN(BRACKET);
        inside_brack = true;
    }
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    yylval.ptr->lineno = yylineno;
    return yytext[0];
}

<BRACKET>{NEWLINE} {
    ;   // implicit line join
}
<BRACKET>{COMMENT} {
    ;   // implicit line join
}

<BRACKET>("]"|")"|"}") {
    sq_pos--;
    if(sq_pos == 0){
        BEGIN(INLINE);
        inside_brack = false;
    }
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    yylval.ptr->lineno = yylineno;
    return yytext[0];
}

<INLINE,BRACKET>{NEWLINE} {
    yylval.ptr = new node("NEWLINE", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    yylval.ptr->lineno = yylineno;
    return NEWLINE;
}

<INLINE,BRACKET>"\\"[ ]*\n {
} 

<INLINE,BRACKET>[ ]*  {}


<INLINE,BRACKET>"async" { 
    yylval.ptr = new node("KEYWORD", "async");
    yylval.val = "async";
    yylval.ptr->lineno = yylineno;
    return ASYNC;}
<INLINE,BRACKET>"del" {
    yylval.ptr = new node("KEYWORD", "del");
    yylval.val = "del";
    yylval.ptr->lineno = yylineno;
    return DEL;}
<INLINE,BRACKET>"pass" {
    yylval.ptr = new node("KEYWORD", "pass");
    yylval.val = "pass";
    yylval.ptr->lineno = yylineno;
    return PASS;}
<INLINE,BRACKET>"break" {
    yylval.ptr = new node("KEYWORD", "break");
    yylval.val = "break";
    yylval.ptr->lineno = yylineno;
    return BREAK;}
<INLINE,BRACKET>"continue" {
    yylval.ptr = new node("KEYWORD", "continue");
    yylval.val = "continue";
    yylval.ptr->lineno = yylineno;
    return CONTINUE;}
<INLINE,BRACKET>"return" {
    yylval.ptr = new node("KEYWORD", "return");
    yylval.val = "return";
    yylval.ptr->lineno = yylineno;
    return RETURN;}
<INLINE,BRACKET>"raise" {
    yylval.ptr = new node("KEYWORD", "raise");
    yylval.val = "raise";
    yylval.ptr->lineno = yylineno;
    return RAISE;}
<INLINE,BRACKET>"from" {
    yylval.ptr = new node("KEYWORD", "from");
    yylval.val = "from";
    yylval.ptr->lineno = yylineno;
    return FROM;}
<INLINE,BRACKET>"import" {
    yylval.ptr = new node("KEYWORD", "import");
    yylval.val = "import";
    yylval.ptr->lineno = yylineno;
    return IMPORT;}
<INLINE,BRACKET>"as" {
    yylval.ptr = new node("KEYWORD", "as");
    yylval.val = "as";
    yylval.ptr->lineno = yylineno;
    return AS;}
<INLINE,BRACKET>"global" {
    yylval.ptr = new node("KEYWORD", "global");
    yylval.val = "global";
    yylval.ptr->lineno = yylineno;
    return GLOBAL;}
<INLINE,BRACKET>"nonlocal" {
    yylval.ptr = new node("KEYWORD", "nonlocal");
    yylval.val = "nonlocal";
    yylval.ptr->lineno = yylineno;
    return NONLOCAL;}
<INLINE,BRACKET>"assert" {
    yylval.ptr = new node("KEYWORD", "assert");
    yylval.val = "assert";
    yylval.ptr->lineno = yylineno;
    return ASSERT;}
<INLINE,BRACKET>"if" {
    yylval.ptr = new node("KEYWORD", "if");
    yylval.val = "if";
    yylval.ptr->lineno = yylineno;
    return IF;}
<INLINE,BRACKET>"elif" {
    yylval.ptr = new node("KEYWORD", "elif");
    yylval.val = "elif";
    yylval.ptr->lineno = yylineno;
    return ELIF;}
<INLINE,BRACKET>"else" {
    yylval.ptr = new node("KEYWORD", "else");
    yylval.val = "else";
    yylval.ptr->lineno = yylineno;
    return ELSE;}
<INLINE,BRACKET>"for" {
    yylval.ptr = new node("KEYWORD", "for");
    yylval.val = "for";
    yylval.ptr->lineno = yylineno;
    return FOR;}
<INLINE,BRACKET>"in" {
    yylval.ptr = new node("KEYWORD", "in");
    yylval.val = "in";
    yylval.ptr->lineno = yylineno;
    return IN;}
<INLINE,BRACKET>"while" {
    yylval.ptr = new node("KEYWORD", "while");
    yylval.val = "while";
    yylval.ptr->lineno = yylineno;
    return WHILE;}
<INLINE,BRACKET>"try" {
    yylval.ptr = new node("KEYWORD", "try");
    yylval.val = "try";
    yylval.ptr->lineno = yylineno;
    return TRY;}
<INLINE,BRACKET>"finally" {
    yylval.ptr = new node("KEYWORD", "finally");
    yylval.val = "finally";
    yylval.ptr->lineno = yylineno;
    return FINALLY;}
<INLINE,BRACKET>"with" {
    yylval.ptr = new node("KEYWORD", "with");
    yylval.val = "with";
    yylval.ptr->lineno = yylineno;
    return WITH;}
<INLINE,BRACKET>"except" {
    yylval.ptr = new node("KEYWORD", "except");
    yylval.val = "except";
    yylval.ptr->lineno = yylineno;
    return EXCEPT;}
<INLINE,BRACKET>"lambda" {
    yylval.ptr = new node("KEYWORD", "lambda");
    yylval.val = "lambda";
    yylval.ptr->lineno = yylineno;
    return LAMBDA;}
<INLINE,BRACKET>"not" {
    yylval.ptr = new node("KEYWORD", "not");
    yylval.val = "not";
    yylval.ptr->lineno = yylineno;
    return NOT;}
<INLINE,BRACKET>"or" {
    yylval.ptr = new node("KEYWORD", "or");
    yylval.val = "or";
    yylval.ptr->lineno = yylineno;
    return OR;}
<INLINE,BRACKET>"and" {
    yylval.ptr = new node("KEYWORD", "and");
    yylval.val = "and";
    yylval.ptr->lineno = yylineno;
    return AND;}
<INLINE,BRACKET>"await" {
    yylval.ptr = new node("KEYWORD", "await");
    yylval.val = "await";
    yylval.ptr->lineno = yylineno;
    return AWAIT;}
<INLINE,BRACKET>"is" {
    yylval.ptr = new node("KEYWORD", "is");
    yylval.val = "is";
    yylval.ptr->lineno = yylineno;
    return IS;}
<INLINE,BRACKET>"yield" {
    yylval.ptr = new node("KEYWORD", "yield");
    yylval.val = "yield";
    yylval.ptr->lineno = yylineno;
    return YIELD;}
<INLINE,BRACKET>"True" {
    yylval.ptr = new node("KEYWORD", "True");
    yylval.val = "True";
    yylval.ptr->lineno = yylineno;
    return TRUE;}
<INLINE,BRACKET>"False" {
    yylval.ptr = new node("KEYWORD", "False");
    yylval.val = "False";
    yylval.ptr->lineno = yylineno;
    return FALSE;}
<INLINE,BRACKET>"None" {
    yylval.ptr = new node("KEYWORD", "None");
    yylval.val = "None";
    yylval.ptr->lineno = yylineno;
    return NONE;}
<INLINE,BRACKET>"class" {
    yylval.ptr = new node("KEYWORD", "class");
    yylval.val = "class";
    yylval.ptr->lineno = yylineno;
    return CLASS;}
<INLINE,BRACKET>"def" {
    yylval.ptr = new node("KEYWORD", "def");
    yylval.val = "def";
    yylval.ptr->lineno = yylineno;
    return DEF;}

<INLINE,BRACKET>{COMMENT} {
    yylval.ptr = new node("NEWLINE", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    yylval.ptr->lineno = yylineno;
    return NEWLINE;
}
<INLINE,BRACKET>{ADDASSIGN} {
    yylval.ptr = new node("OPERATOR", "+=");
    yylval.val = "+=";
    yylval.ptr->lineno = yylineno;
    return ADDASSIGN;}
<INLINE,BRACKET>{SUBASSIGN} {
    yylval.ptr = new node("OPERATOR", "-=");
    yylval.val = "-=";
    yylval.ptr->lineno = yylineno;
    return SUBASSIGN;}
<INLINE,BRACKET>{MULASSIGN} {
    yylval.ptr = new node("OPERATOR", "*=");
    yylval.val = "*=";
    yylval.ptr->lineno = yylineno;
    return MULASSIGN;}
<INLINE,BRACKET>{DIVASSIGN} {
    yylval.ptr = new node("OPERATOR", "/=");
    yylval.val = "/=";
    yylval.ptr->lineno = yylineno;
    return DIVASSIGN;}
<INLINE,BRACKET>{IDIVASSIGN} {
    yylval.ptr = new node("OPERATOR", "//=");
    yylval.val = "//=";
    yylval.ptr->lineno = yylineno;
    return IDIVASSIGN;}
<INLINE,BRACKET>{MODASSIGN} {
    yylval.ptr = new node("OPERATOR", "%=");
    yylval.val = "%=";
    yylval.ptr->lineno = yylineno;
    return MODASSIGN;}
<INLINE,BRACKET>{ATASSIGN} {
    yylval.ptr = new node("OPERATOR", "@=");
    yylval.val = "@=";
    yylval.ptr->lineno = yylineno;
    return ATASSIGN;}
<INLINE,BRACKET>{ANDASSIGN} {
    yylval.ptr = new node("OPERATOR", "&=");
    yylval.val = "&=";
    yylval.ptr->lineno = yylineno;
    return ANDASSIGN;}
<INLINE,BRACKET>{ORASSIGN} {
    yylval.ptr = new node("OPERATOR", "|=");
    yylval.val = "|=";
    yylval.ptr->lineno = yylineno;
    return ORASSIGN;}
<INLINE,BRACKET>{XORASSIGN} {
    yylval.ptr = new node("OPERATOR", "^=");
    yylval.val = "^=";
    yylval.ptr->lineno = yylineno;
    return XORASSIGN;}
<INLINE,BRACKET>{LSASSIGN} {
    yylval.ptr = new node("OPERATOR", "<<=");
    yylval.val = "<<=";
    yylval.ptr->lineno = yylineno;
    return LSASSIGN;}
<INLINE,BRACKET>{RSASSIGN} {
    yylval.ptr = new node("OPERATOR", ">>=");
    yylval.val = ">>=";
    yylval.ptr->lineno = yylineno;
    return RSASSIGN;}
<INLINE,BRACKET>{POWASSIGN} {
    yylval.ptr = new node("OPERATOR", "**=");
    yylval.val = "**=";
    yylval.ptr->lineno = yylineno;
    return POWASSIGN;}
<INLINE,BRACKET>{ARROWOP} {
    yylval.ptr = new node("OPERATOR", "->");
    yylval.val = "->";
    yylval.ptr->lineno = yylineno;
    return ARROWOP;}

<INLINE,BRACKET>{stringliteral} { 
    yylval.ptr = new node("STRING", string(yytext, yytext + yyleng));
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr->lineno = yylineno;
    return STRING;}
<INLINE,BRACKET>{POW} {
    yylval.ptr = new node("OPERATOR", "**");
    yylval.val = "**";
    yylval.ptr->lineno = yylineno;
    return POW;}
<INLINE,BRACKET>{IDIV} {
    yylval.ptr = new node("OPERATOR", "//");
    yylval.val = "//";
    yylval.ptr->lineno = yylineno;
    return IDIV;}
<INLINE,BRACKET>{LEFTSHIFT} {
    yylval.ptr = new node("OPERATOR", "<<");
    yylval.val = "<<";
    yylval.ptr->lineno = yylineno;
    return LEFTSHIFT;}
<INLINE,BRACKET>{RIGHTSHIFT} {
    yylval.ptr = new node("OPERATOR", ">>");
    yylval.val = ">>";
    yylval.ptr->lineno = yylineno;
    return RIGHTSHIFT;}
<INLINE,BRACKET>{LEQ} {
    yylval.ptr = new node("OPERATOR", "<=");
    yylval.val = "<=";
    yylval.ptr->lineno = yylineno;
    return LEQ;}
<INLINE,BRACKET>{GEQ} {
    yylval.ptr = new node("OPERATOR", ">=");
    yylval.val = ">=";
    yylval.ptr->lineno = yylineno;
    return GEQ;}
<INLINE,BRACKET>{EQUAL} {
    yylval.ptr = new node("OPERATOR", "==");
    yylval.val = "==";
    yylval.ptr->lineno = yylineno;
    return EQUAL;}
<INLINE,BRACKET>{NEQ} {
    yylval.ptr = new node("OPERATOR", "!=");
    yylval.val = "!=";
    yylval.ptr->lineno = yylineno;
    return NEQ;}
<INLINE,BRACKET>({integer}|{floatnumber}|{imagnumber})  {
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("NUMBER", yylval.val);
    yylval.ptr->lineno = yylineno;
    return NUMBER;}
<INLINE,BRACKET>{NAME} {
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("IDENTIFIER", yylval.val);
    yylval.ptr->lineno = yylineno; 
    yylval.ptr->lineno = yylineno;
    return NAME;}
<INLINE,BRACKET>. {
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    yylval.ptr->lineno = yylineno;
    return yytext[0];}

%%
