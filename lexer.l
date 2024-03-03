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
        yylval.ptr = new node("", "DEDENT");
        unput(yytext[0]);
        return DEDENT;
    }
    cerr << "returning end\n";
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("", yylval.val);
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
    cerr << "returning end\n";
    yylval.val = "ENDMARKER";
    yylval.ptr = new node("", yylval.val);
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
            yylval.ptr = new node("", yylval.val);
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
            yylval.ptr = new node("", yylval.val);
            cerr<<"\n\nreturning dedent\n\n";
            return DEDENT;
        }
    }


<INLINE,BRACKET>("["|"("|"{") {
    sq_pos++;
    cerr << YYSTATE << ' ';
    if(sq_pos > 0){
        BEGIN(BRACKET);
        inside_brack = true;
    }
    cerr << YYSTATE << '\n';
    cerr << "BRACK BEGIN " << sq_pos << '\n';
    cerr << "here delimiter\n";
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    return yytext[0];
}

<BRACKET>{NEWLINE} {
    cerr << "newline implicit line join\n";
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
        cerr << "BRACK_CLOSE\n";
    }
    cerr << YYSTATE << '\n';
    cerr << "here delimiter\n";
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    return yytext[0];
}

<INLINE,BRACKET>{NEWLINE} {
    yylval.ptr = new node("", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    cerr << "return newline token\n";
    return NEWLINE;
}

<INLINE,BRACKET>"\\"[ ]*\n {
    cerr << "line joining\n";
} 

<INLINE,BRACKET>[ ]*  {/*cerr << "space\n";*/}


<INLINE,BRACKET>"async" { 
    yylval.ptr = new node("KEYWORD", "async");
    yylval.val = "async";
    return ASYNC;}
<INLINE,BRACKET>"del" {
    yylval.ptr = new node("KEYWORD", "del");
    yylval.val = "del";
    return DEL;}
<INLINE,BRACKET>"pass" {
    yylval.ptr = new node("KEYWORD", "pass");
    yylval.val = "pass";
    return PASS;}
<INLINE,BRACKET>"break" {
    yylval.ptr = new node("KEYWORD", "break");
    yylval.val = "break";
    return BREAK;}
<INLINE,BRACKET>"continue" {
    yylval.ptr = new node("KEYWORD", "continue");
    yylval.val = "continue";
    return CONTINUE;}
<INLINE,BRACKET>"return" {
    yylval.ptr = new node("KEYWORD", "return");
    yylval.val = "return";
    return RETURN;}
<INLINE,BRACKET>"raise" {
    yylval.ptr = new node("KEYWORD", "raise");
    yylval.val = "raise";
    return RAISE;}
<INLINE,BRACKET>"from" {
    yylval.ptr = new node("KEYWORD", "from");
    yylval.val = "from";
    return FROM;}
<INLINE,BRACKET>"import" {
    // cerr<<"import detected\n";
    yylval.ptr = new node("KEYWORD", "import");
    yylval.val = "import";
    return IMPORT;}
<INLINE,BRACKET>"as" {
    yylval.ptr = new node("KEYWORD", "as");
    yylval.val = "as";
    return AS;}
<INLINE,BRACKET>"global" {
    yylval.ptr = new node("KEYWORD", "global");
    yylval.val = "global";
    return GLOBAL;}
<INLINE,BRACKET>"nonlocal" {
    yylval.ptr = new node("KEYWORD", "nonlocal");
    yylval.val = "nonlocal";
    return NONLOCAL;}
<INLINE,BRACKET>"assert" {
    yylval.ptr = new node("KEYWORD", "assert");
    yylval.val = "assert";
    return ASSERT;}
<INLINE,BRACKET>"if" {
    cerr<<"if read\n";
    yylval.ptr = new node("KEYWORD", "if");
    yylval.val = "if";
    return IF;}
<INLINE,BRACKET>"elif" {
    yylval.ptr = new node("KEYWORD", "elif");
    yylval.val = "elif";
    return ELIF;}
<INLINE,BRACKET>"else" {
    yylval.ptr = new node("KEYWORD", "else");
    yylval.val = "else";
    return ELSE;}
<INLINE,BRACKET>"for" {
    yylval.ptr = new node("KEYWORD", "for");
    yylval.val = "for";
    return FOR;}
<INLINE,BRACKET>"in" {
    yylval.ptr = new node("KEYWORD", "in");
    yylval.val = "in";
    return IN;}
<INLINE,BRACKET>"while" {
    yylval.ptr = new node("KEYWORD", "while");
    yylval.val = "while";
    return WHILE;}
<INLINE,BRACKET>"try" {
    yylval.ptr = new node("KEYWORD", "try");
    yylval.val = "try";
    return TRY;}
<INLINE,BRACKET>"finally" {
    yylval.ptr = new node("KEYWORD", "finally");
    yylval.val = "finally";
    return FINALLY;}
<INLINE,BRACKET>"with" {
    yylval.ptr = new node("KEYWORD", "with");
    yylval.val = "with";
    return WITH;}
<INLINE,BRACKET>"except" {
    yylval.ptr = new node("KEYWORD", "except");
    yylval.val = "except";
    return EXCEPT;}
<INLINE,BRACKET>"lambda" {
    yylval.ptr = new node("KEYWORD", "lambda");
    yylval.val = "lambda";
    return LAMBDA;}
<INLINE,BRACKET>"not" {
    yylval.ptr = new node("KEYWORD", "not");
    yylval.val = "not";
    return NOT;}
<INLINE,BRACKET>"or" {
    yylval.ptr = new node("KEYWORD", "or");
    yylval.val = "or";
    return OR;}
<INLINE,BRACKET>"and" {
    cerr << "returning end\n";
    yylval.ptr = new node("KEYWORD", "and");
    yylval.val = "and";
    return AND;}
<INLINE,BRACKET>"await" {
    yylval.ptr = new node("KEYWORD", "await");
    yylval.val = "await";
    return AWAIT;}
<INLINE,BRACKET>"is" {
    yylval.ptr = new node("KEYWORD", "is");
    yylval.val = "is";
    return IS;}
<INLINE,BRACKET>"yield" {
    yylval.ptr = new node("KEYWORD", "yield");
    yylval.val = "yield";
    return YIELD;}
<INLINE,BRACKET>"True" {
    yylval.ptr = new node("KEYWORD", "True");
    yylval.val = "True";
    return TRUE;}
<INLINE,BRACKET>"False" {
    yylval.ptr = new node("KEYWORD", "False");
    yylval.val = "False";
    return FALSE;}
<INLINE,BRACKET>"None" {
    cerr << "return keyword none\n";
    yylval.ptr = new node("KEYWORD", "None");
    yylval.val = "None";
    return NONE;}
<INLINE,BRACKET>"class" {
    yylval.ptr = new node("KEYWORD", "class");
    yylval.val = "class";
    return CLASS;}
<INLINE,BRACKET>"def" {
    cerr << "returning def\n";
    yylval.ptr = new node("KEYWORD", "def");
    yylval.val = "def";
    return DEF;}

<INLINE,BRACKET>{COMMENT} {
    yylval.ptr = new node("", "NEWLINE");
    yylval.val = "NEWLINE";
    inside_line = 0;
    space = 0;
    // cerr << "return newline token";
    return NEWLINE;
}
<INLINE,BRACKET>{ADDASSIGN} {
    yylval.ptr = new node("DELIMITER", "+=");
    yylval.val = "+=";
    return ADDASSIGN;}
<INLINE,BRACKET>{SUBASSIGN} {
    yylval.ptr = new node("DELIMITER", "-=");
    yylval.val = "-=";
    return SUBASSIGN;}
<INLINE,BRACKET>{MULASSIGN} {
    yylval.ptr = new node("DELIMITER", "*=");
    yylval.val = "*=";
    return MULASSIGN;}
<INLINE,BRACKET>{DIVASSIGN} {
    yylval.ptr = new node("DELIMITER", "/=");
    yylval.val = "/=";
    return DIVASSIGN;}
<INLINE,BRACKET>{IDIVASSIGN} {
    yylval.ptr = new node("DELIMITER", "//=");
    yylval.val = "//=";
    return IDIVASSIGN;}
<INLINE,BRACKET>{MODASSIGN} {
    yylval.ptr = new node("DELIMITER", "%=");
    yylval.val = "%=";
    return MODASSIGN;}
<INLINE,BRACKET>{ATASSIGN} {
    yylval.ptr = new node("DELIMITER", "@=");
    yylval.val = "@=";
    return ATASSIGN;}
<INLINE,BRACKET>{ANDASSIGN} {
    yylval.ptr = new node("DELIMITER", "&=");
    yylval.val = "&=";
    return ANDASSIGN;}
<INLINE,BRACKET>{ORASSIGN} {
    yylval.ptr = new node("DELIMITER", "|=");
    yylval.val = "|=";
    return ORASSIGN;}
<INLINE,BRACKET>{XORASSIGN} {
    yylval.ptr = new node("DELIMITER", "^=");
    yylval.val = "^=";
    return XORASSIGN;}
<INLINE,BRACKET>{LSASSIGN} {
    yylval.ptr = new node("DELIMITER", "<<=");
    yylval.val = "<<=";
    return LSASSIGN;}
<INLINE,BRACKET>{RSASSIGN} {
    yylval.ptr = new node("OPERDELIMITERATOR", ">>=");
    yylval.val = ">>=";
    return RSASSIGN;}
<INLINE,BRACKET>{POWASSIGN} {
    yylval.ptr = new node("OPERATOR", "**=");
    yylval.val = "**=";
    return POWASSIGN;}
<INLINE,BRACKET>{ARROWOP} {
    cerr << "returing arrow OP\n";
    yylval.ptr = new node("OPERATOR", "->");
    yylval.val = "->";
    return ARROWOP;}

<INLINE,BRACKET>{stringliteral} { 
    cerr << "return string " << yytext << '\n';
    yylval.ptr = new node("", string(yytext, yytext + yyleng));
    yylval.val = string(yytext, yytext + yyleng);
    return STRING;}
<INLINE,BRACKET>{POW} {
    yylval.ptr = new node("OPERATOR", "**");
    yylval.val = "**";
    return POW;}
<INLINE,BRACKET>{IDIV} {
    yylval.ptr = new node("OPERATOR", "//");
    yylval.val = "//";
    return IDIV;}
<INLINE,BRACKET>{LEFTSHIFT} {
    yylval.ptr = new node("OPERATOR", "<<");
    yylval.val = "<<";
    return LEFTSHIFT;}
<INLINE,BRACKET>{RIGHTSHIFT} {
    yylval.ptr = new node("OPERATOR", ">>");
    yylval.val = ">>";
    return RIGHTSHIFT;}
<INLINE,BRACKET>{LEQ} {
    yylval.ptr = new node("OPERATOR", "<=");
    yylval.val = "<=";
    return LEQ;}
<INLINE,BRACKET>{GEQ} {
    yylval.ptr = new node("OPERATOR", ">=");
    yylval.val = ">=";
    return GEQ;}
<INLINE,BRACKET>{EQUAL} {
    yylval.ptr = new node("OPERATOR", "==");
    yylval.val = "==";
    return EQUAL;}
<INLINE,BRACKET>{NEQ} {
    yylval.ptr = new node("OPERATOR", "!=");
    yylval.val = "!=";
    return NEQ;}
<INLINE,BRACKET>({integer}|{floatnumber}|{imagnumber})  {
    cerr << "here number "<< yytext <<"\n";
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("NUMBER", yylval.val);
    return NUMBER;}
<INLINE,BRACKET>{NAME} {
    cerr << "here name "<<yytext<<"\n";
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("IDENTIFIER", yylval.val);
    return NAME;}
<INLINE,BRACKET>. {
    cerr << "here delimiter "<<yytext<<"\n";
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    return yytext[0];}

%%
