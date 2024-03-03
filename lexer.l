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
stringescapeseq ([\][.])
longstringchar  [^\\]
shortstringchar [^\\\n"]
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
%x ARRAY

%%

    if(inside_line) BEGIN(INLINE);
    else BEGIN(OUTLINE);
<OUTLINE>[ ] {space++; /*cerr<<"uninline space detected\n";*/}


<OUTLINE>{NEWLINE}|{COMMENT} {
    cerr << "Empty line\n";
    space = 0;
    inside_line = 0;
}
<*><<EOF>> {
    if(indents.size() > 1){
        indents.pop();
        yylval.val = "DEDENT";
        yylval.ptr = new node("DEDENT", "DEDENT");
        unput(yytext[0]);
        return DEDENT;
    }
    cerr << "returning end\n";
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("ENDMARKER", yylval.val);
    return ENDMARKER;
}
<*>\000 {
    if(indents.size() > 1){
        indents.pop();
        yylval.val = "DEDENT";
        yylval.ptr = new node("DEDENT", "DEDENT");
        unput(yytext[0]);
        return DEDENT;
    }
    cerr << "returning end\n";
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("ENDMARKER", yylval.val);
    return ENDMARKER;   
}
<OUTLINE>. {
        cerr << "here ex\n";
        int pos = space;
        cerr << "pos: " << pos << ' ' << int(yytext[0]) << ' ' << yyleng << '\n';
        if(pos > indents.top()){
            inside_line = true;
            unput(yytext[0]);
            indents.push(pos);
            yylval.val = "INDENT";
            yylval.ptr = new node(yylval.val, yylval.val);
            cerr << "return indent\n";
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
            yylval.ptr = new node(yylval.val, yylval.val);
            cerr<<"\n\nreturning dedent\n\n";
            return DEDENT;
        }
    }


<INLINE>{NEWLINE} {
    yylval.ptr = new node("NEWLINE", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    // cerr << "return newline token";
    return NEWLINE;
}

<INLINE>"\\"[ ]*\n {
    cerr << "line joining\n";
} 

<INLINE>[ ]*  {/*cerr << "space\n";*/}


<INLINE>"async" { 
    yylval.ptr = new node("KEYWORD", "async");
    yylval.val = "async";
    return ASYNC;}
<INLINE>"del" {
    yylval.ptr = new node("KEYWORD", "del");
    yylval.val = "del";
    return DEL;}
<INLINE>"pass" {
    yylval.ptr = new node("KEYWORD", "pass");
    yylval.val = "pass";
    return PASS;}
<INLINE>"break" {
    yylval.ptr = new node("KEYWORD", "break");
    yylval.val = "break";
    return BREAK;}
<INLINE>"continue" {
    yylval.ptr = new node("KEYWORD", "continue");
    yylval.val = "continue";
    return CONTINUE;}
<INLINE>"return" {
    yylval.ptr = new node("KEYWORD", "return");
    yylval.val = "return";
    return RETURN;}
<INLINE>"raise" {
    yylval.ptr = new node("KEYWORD", "raise");
    yylval.val = "raise";
    return RAISE;}
<INLINE>"from" {
    yylval.ptr = new node("KEYWORD", "from");
    yylval.val = "from";
    return FROM;}
<INLINE>"import" {
    // cerr<<"import detected\n";
    yylval.ptr = new node("KEYWORD", "import");
    yylval.val = "import";
    return IMPORT;}
<INLINE>"as" {
    yylval.ptr = new node("KEYWORD", "as");
    yylval.val = "as";
    return AS;}
<INLINE>"global" {
    yylval.ptr = new node("KEYWORD", "global");
    yylval.val = "global";
    return GLOBAL;}
<INLINE>"nonlocal" {
    yylval.ptr = new node("KEYWORD", "nonlocal");
    yylval.val = "nonlocal";
    return NONLOCAL;}
<INLINE>"assert" {
    yylval.ptr = new node("KEYWORD", "assert");
    yylval.val = "assert";
    return ASSERT;}
<INLINE>"if" {
    cerr<<"if read\n";
    yylval.ptr = new node("KEYWORD", "if");
    yylval.val = "if";
    return IF;}
<INLINE>"elif" {
    yylval.ptr = new node("KEYWORD", "elif");
    yylval.val = "elif";
    return ELIF;}
<INLINE>"else" {
    yylval.ptr = new node("KEYWORD", "else");
    yylval.val = "else";
    return ELSE;}
<INLINE>"for" {
    yylval.ptr = new node("KEYWORD", "for");
    yylval.val = "for";
    return FOR;}
<INLINE>"in" {
    yylval.ptr = new node("KEYWORD", "in");
    yylval.val = "in";
    return IN;}
<INLINE>"while" {
    yylval.ptr = new node("KEYWORD", "while");
    yylval.val = "while";
    return WHILE;}
<INLINE>"try" {
    yylval.ptr = new node("KEYWORD", "try");
    yylval.val = "try";
    return TRY;}
<INLINE>"finally" {
    yylval.ptr = new node("KEYWORD", "finally");
    yylval.val = "finally";
    return FINALLY;}
<INLINE>"with" {
    yylval.ptr = new node("KEYWORD", "with");
    yylval.val = "with";
    return WITH;}
<INLINE>"except" {
    yylval.ptr = new node("KEYWORD", "except");
    yylval.val = "except";
    return EXCEPT;}
<INLINE>"lambda" {
    yylval.ptr = new node("KEYWORD", "lambda");
    yylval.val = "lambda";
    return LAMBDA;}
<INLINE>"not" {
    yylval.ptr = new node("KEYWORD", "not");
    yylval.val = "not";
    return NOT;}
<INLINE>"or" {
    yylval.ptr = new node("KEYWORD", "or");
    yylval.val = "or";
    return OR;}
<INLINE>"and" {
    cerr << "returning end\n";
    yylval.ptr = new node("KEYWORD", "and");
    yylval.val = "and";
    return AND;}
<INLINE>"await" {
    yylval.ptr = new node("KEYWORD", "await");
    yylval.val = "await";
    return AWAIT;}
<INLINE>"is" {
    yylval.ptr = new node("KEYWORD", "is");
    yylval.val = "is";
    return IS;}
<INLINE>"yield" {
    yylval.ptr = new node("KEYWORD", "yield");
    yylval.val = "yield";
    return YIELD;}
<INLINE>"True" {
    yylval.ptr = new node("KEYWORD", "True");
    yylval.val = "True";
    return TRUE;}
<INLINE>"False" {
    yylval.ptr = new node("KEYWORD", "False");
    yylval.val = "False";
    return FALSE;}
<INLINE>"None" {
    cerr << "return keyword none\n";
    yylval.ptr = new node("KEYWORD", "None");
    yylval.val = "None";
    return NONE;}
<INLINE>"class" {
    yylval.ptr = new node("KEYWORD", "class");
    yylval.val = "class";
    return CLASS;}
<INLINE>"def" {
    cerr << "returning def\n";
    yylval.ptr = new node("KEYWORD", "def");
    yylval.val = "def";
    return DEF;}

<INLINE>{COMMENT} {
    yylval.ptr = new node("NEWLINE", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    // cerr << "return newline token";
    return NEWLINE;
}
<INLINE>{ADDASSIGN} {
    yylval.ptr = new node("OPERATOR", "+=");
    yylval.val = "+=";
    return ADDASSIGN;}
<INLINE>{SUBASSIGN} {
    yylval.ptr = new node("OPERATOR", "-=");
    yylval.val = "-=";
    return SUBASSIGN;}
<INLINE>{MULASSIGN} {
    yylval.ptr = new node("OPERATOR", "*=");
    yylval.val = "*=";
    return MULASSIGN;}
<INLINE>{DIVASSIGN} {
    yylval.ptr = new node("OPERATOR", "/=");
    yylval.val = "/=";
    return DIVASSIGN;}
<INLINE>{IDIVASSIGN} {
    yylval.ptr = new node("OPERATOR", "//=");
    yylval.val = "//=";
    return IDIVASSIGN;}
<INLINE>{MODASSIGN} {
    yylval.ptr = new node("OPERATOR", "%=");
    yylval.val = "%=";
    return MODASSIGN;}
<INLINE>{ATASSIGN} {
    yylval.ptr = new node("OPERATOR", "@=");
    yylval.val = "@=";
    return ATASSIGN;}
<INLINE>{ANDASSIGN} {
    yylval.ptr = new node("OPERATOR", "&=");
    yylval.val = "&=";
    return ANDASSIGN;}
<INLINE>{ORASSIGN} {
    yylval.ptr = new node("OPERATOR", "|=");
    yylval.val = "|=";
    return ORASSIGN;}
<INLINE>{XORASSIGN} {
    yylval.ptr = new node("OPERATOR", "^=");
    yylval.val = "^=";
    return XORASSIGN;}
<INLINE>{LSASSIGN} {
    yylval.ptr = new node("OPERATOR", "<<=");
    yylval.val = "<<=";
    return LSASSIGN;}
<INLINE>{RSASSIGN} {
    yylval.ptr = new node("OPERATOR", ">>=");
    yylval.val = ">>=";
    return RSASSIGN;}
<INLINE>{POWASSIGN} {
    yylval.ptr = new node("OPERATOR", "**=");
    yylval.val = "**=";
    return POWASSIGN;}
<INLINE>{ARROWOP} {
    cerr << "returing arrow OP\n";
    yylval.ptr = new node("OPERATOR", "->");
    yylval.val = "->";
    return ARROWOP;}

<INLINE>{stringliteral} { 
    yylval.ptr = new node("STRING LITERAL", string(yytext, yytext + yyleng));
    yylval.val = string(yytext, yytext + yyleng);
    return STRING;}
<INLINE>{POW} {
    yylval.ptr = new node("OPERATOR", "**");
    yylval.val = "**";
    return POW;}
<INLINE>{IDIV} {
    yylval.ptr = new node("OPERATOR", "//");
    yylval.val = "//";
    return IDIV;}
<INLINE>{LEFTSHIFT} {
    yylval.ptr = new node("OPERATOR", "<<");
    yylval.val = "<<";
    return LEFTSHIFT;}
<INLINE>{RIGHTSHIFT} {
    yylval.ptr = new node("OPERATOR", ">>");
    yylval.val = ">>";
    return RIGHTSHIFT;}
<INLINE>{LEQ} {
    yylval.ptr = new node("OPERATOR", "<=");
    yylval.val = "<=";
    return LEQ;}
<INLINE>{GEQ} {
    yylval.ptr = new node("OPERATOR", ">=");
    yylval.val = ">=";
    return GEQ;}
<INLINE>{EQUAL} {
    yylval.ptr = new node("OPERATOR", "==");
    yylval.val = "==";
    return EQUAL;}
<INLINE>{NEQ} {
    yylval.ptr = new node("OPERATOR", "!=");
    yylval.val = "!=";
    return NEQ;}
<INLINE>({integer}|{floatnumber}|{imagnumber})  {
    cerr << "here number "<< yytext <<"\n";
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("NUMBER", yylval.val);
    return NUMBER;}
<INLINE>{NAME} {
    cerr << "here name "<<yytext<<"\n";
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("IDENTIFIER", yylval.val);
    return NAME;}
<INLINE>. {
    cerr << "here delimiter "<<yytext<<"\n";
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    return yytext[0];}


%%
