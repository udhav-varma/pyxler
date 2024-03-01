%option noyywrap
%option yylineno
%{
#include<iostream>
#include<stack>
using std::stack;
stack<int> indents;
int dedpos = 0;
%}

NEWLINE ([\n])
COMMENT ([#](.*){NEWLINE})

bytesescapeseq ([\\] (.|[\n]))
longbyteschar  ([^\\])
shortbyteschar ([^\\\n"])
longbytesitem  ({longbyteschar}|{bytesescapeseq})
shortbytesitem ({shortbyteschar}|{bytesescapeseq})
longbytes ((["][']['][']["]{longbytesitem}*["][']['][']["])|([']["]["]["][']{longbytesitem}*[']["]["]["][']))
shortbytes  ((["][']["]{shortbytesitem}*["][']["])|([']["][']{shortbytesitem}*[']["][']))
bytesprefix    ("b"|"B"|"br"|"Br"|"bR"|"BR"|"rb"|"rB"|"Rb"|"RB")
bytesliteral   {bytesprefix}({shortbytes}|{longbytes})
stringescapeseq ([\][.])
longstringchar  [^\\]
shortstringchar [^\\\n"]
longstringitem  ({longstringchar}|{stringescapeseq})
shortstringitem ({shortstringchar}|{stringescapeseq})
longstring   ((["][']['][']["]{longstringitem}*["][']['][']["])|([']["]["]["][']{longstringitem}*[']["]["]["][']))
shortstring  ((["][']["]{shortstringitem}*["][']["])|([']["][']{shortstringitem}*[']["][']))
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
decinteger (({nonzerodigit}((([_]?){digit})*))|(([0]+)(([_]?)[0])*))
bininteger ([0][bB](([_]?){bindigit})+)
octinteger ([0][oO](([_]?){octdigit})+)
hexinteger ([0][xX](([_]?){hexdigit})+)
integer ({decinteger}|{bininteger}|{octinteger}|{hexinteger})

floatnumber ({pointfloat}|{exponentfloat})
pointfloat (([{digitpart}]?{fraction})|({digitpart}[.]))
exponentfloat ({digitpart}|{pointfloat}){exponent}
digitpart {digit}((([_]?){digit})*)
fraction [.]{digitpart}
exponent ("e"|"E")(["+"|"-"]?){digitpart}
digit  [0-9]
imagnumber ({floatnumber}|{digitpart})[jJ]

%%

^[ ]*\n       {/* Ignore blank lines.*/}
^[ ]*[^ \n]+ {
    int pos = yyleng - 1;
    while(pos >= 0 and yytext[pos] != ' '){
        unput(yytext[pos]);
        --pos;
    }
    if(pos > indents.top()){
        indents.push(pos);
        return INDENT;
    }
    int ctr = 0;
    while(pos < indents.top()){
        ctr++;
        indets.pop();
    }
    for(int i = 0; i < ctr; i++){
        unput('$');
    }
    dedpos = ctr;
}

[$] {
    if(dedpos > 0){
        --dedpos;
        return DEDENT;
    }
    else{
        printf("Error, unrecognised token");
    }
}
"async" {return ASYNC;}
"name" {return NAME;}
"del" {return DEL;}
"pass" {return PASS;}
"break" {return BREAK;}
"continue" {return CONTINUE;}
"return" {return RETURN;}
"raise" {return RAISE;}
"from" {return FROM;}
"import" {return IMPORT;}
"as" {return AS;}
"global" {return GLOBAL;}
"nonlocal" {return NONLOCAL;}
"assert" {return ASSERT;}
"if" {return IF;}
"elif" {return ELIF;}
"else" {return ELSE;}
"for" {return FOR;}
"in" {return IN;}
"while" {return WHILE;}
"try" {return TRY;}
"finally" {return FINALLY;}
"with" {return WITH;}
"except" {return EXCEPT;}
"lambda" {return LAMBDA;}
"not" {return NOT;}
"or" {return OR;}
"and" {return AND;}
"await" {return AWAIT;}
"is" {return IS;}
"yield" {return YIELD;}
"True" {return TRUE;}
"number" {return NUMBER;}
"string" {return STRING;}
"False" {return FALSE;}
"None" {return NONE;}
"class" {return CLASS;}
"def" {return DEF;}

{NEWLINE} {return NEWLINE;}
{COMMENT} {;}
{ADDASSIGN} {return ADDASSIGN;}
{SUBASSIGN} {return SUBASSIGN;}
{MULASSIGN} {return MULASSIGN;}
{DIVASSIGN} {return DIVASSIGN;}
{IDIVASSIGN} {return IDIVASSIGN;}
{MODASSIGN} {return MODASSIGN;}
{ATASSIGN} {return ATASSIGN;}
{ANDASSIGN} {return ANDASSIGN;}
{ORASSIGN} {return ORASSIGN;}
{XORASSIGN} {return XORASSIGN;}
{LSASSIGN} {return LSASSIGN;}
{RSASSIGN} {return RSASSIGN;}
{POWASSIGN} {return POWASSIGN;}
{ARROWOP} {return ARROWOP;}

{POW} {return POW;}
{IDIV} {return IDIV;}
{LEFTSHIFT} {return LEFTSHIFT;}
{RIGHTSHIFT} {return RIGHTSHIFT;}
{LEQ} {return LEQ;}
{GEQ} {return GEQ;}
{EQUAL} {return EQUAL;}
{NEQ} {return NEQ;}
({integer}|{floatnumber}|{imagnumber})  {return NUMBER;}
%%

int main(int argc, char * argv[])
{
    indents.push(0);

}