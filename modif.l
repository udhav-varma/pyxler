%option noyywrap 
%option yylineno 
%{ 
#include<iostream> 
#include<stack> 
using namespace std;
using std::stack; 
stack<int> indents; 
int dedpos = 0; 
int indent = 0;
bool spaceset = false;
int setspace()
{
    spaceset = true;
    if(indent > indents.top()){ 
    indents.push(indent); 
    printf("INDENT\n");
    return 1;
    } 
    int ctr = 0; 
    while(indent < indents.top()){ 
    ctr++; 
    indents.pop(); 
    } 
    if(indents.top() != indent){ 
    printf("Indentation error\n"); 
    return;
    } 
    dedpos = ctr; 
    return 0;
}
enum yytokentype 
{ 
NEWLINE = 258, 
ENDMARKER = 259, 
ASYNC = 260, 
NAME = 261, 
DEL = 262, 
PASS = 263, 
BREAK = 264, 
CONTINUE = 265, 
RETURN = 266, 
RAISE = 267, 
FROM = 268, 
IMPORT = 269, 
AS = 270, 
GLOBAL = 271, 
NONLOCAL = 272, 
ASSERT = 273, 
IF = 274, 
ELIF = 275, 
ELSE = 276, 
FOR = 277, 
IN = 278, 
WHILE = 279, 
TRY = 280, 
FINALLY = 281, 
WITH = 282, 
EXCEPT = 283, 
LAMBDA = 284, 
NOT = 285, 
OR = 286, 
AND = 287, 
AWAIT = 288, 
IS = 289, 
INDENT = 290, 
DEDENT = 291, 
YIELD = 292, 
TRUE = 293, 
NUMBER = 294, 
STRING = 295, 
FALSE = 296, 
NONE = 297, 
CLASS = 298, 
DEF = 299, 
ARROWOP = 300, 
POW = 301, 
ADDASSIGN = 302, 
SUBASSIGN = 303, 
MULASSIGN = 304, 
ATASSIGN = 305, 
DIVASSIGN = 306, 
MODASSIGN = 307, 
ANDASSIGN = 308, 
ORASSIGN = 309, 
XORASSIGN = 310, 
LSASSIGN = 311, 
RSASSIGN = 312, 
POWASSIGN = 313, 
IDIVASSIGN = 314, 
ELLIPSIS = 315, 
EQUAL = 316, 
GEQ = 317, 
LEQ = 318, 
LTORGT = 319, 
NEQ = 320, 
LEFTSHIFT = 321, 
RIGHTSHIFT = 322, 
IDIV = 323 
}; 
%} 

NEWLINE ([\n]) 
COMMENT ([#](.*){NEWLINE}) 

bytesescapeseq ([\\] (.|[\n])) 
longbyteschar ([^\\]) 
shortbyteschar ([^\\\n"]) 
longbytesitem ({longbyteschar}|{bytesescapeseq}) 
shortbytesitem ({shortbyteschar}|{bytesescapeseq}) 
longbytes ((["][']['][']["]{longbytesitem}*["][']['][']["])|([']["]["]["][']{longbytesitem}*[']["]["]["]['])) 
shortbytes ((["][']["]{shortbytesitem}*["][']["])|([']["][']{shortbytesitem}*[']["]['])) 
bytesprefix ("b"|"B"|"br"|"Br"|"bR"|"BR"|"rb"|"rB"|"Rb"|"RB") 
bytesliteral {bytesprefix}({shortbytes}|{longbytes}) 
stringescapeseq ([\][.]) 
longstringchar [^\\] 
shortstringchar [^\\\n"] 
longstringitem ({longstringchar}|{stringescapeseq}) 
shortstringitem ({shortstringchar}|{stringescapeseq}) 
longstring ((["][']['][']["]{longstringitem}*["][']['][']["])|([']["]["]["][']{longstringitem}*[']["]["]["]['])) 
shortstring ((["][']["]{shortstringitem}*["][']["])|([']["][']{shortstringitem}*[']["]['])) 
stringprefix ("r"|"u"|"R"|"U"|"f"|"F"|"fr"|"Fr"|"fR"|"FR"|"rf"|"rF"|"Rf"|"RF") 
stringliteral ({stringprefix}?)({shortstring}|{longstring}) 

NAME ([A-Za-z_][A-Za-z0-9_]*)
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
digit [0-9] 
imagnumber ({floatnumber}|{digitpart})[jJ] 

%% 
    { 
        if(!spaceset){
            setspace();
        }
        cerr << "here\n";
    if(dedpos > 0){ 
        --dedpos; 
        printf("DEDENT\n");
        // return DEDENT;
    } 
    } 
^[ ]*\n {printf("empty\n");/* Ignore blank lines.*/} 


"async" {printf("ASYNC\n"); return ASYNC;} 
{NAME} {printf("NAME\n"); return NAME;} 
"del" {printf("DEL\n");return DEL;} 
"pass" {printf("PASS\n");return PASS;} 
"break" {printf("BREAK\n");return BREAK;} 
"continue" {printf("CONTINUE\n");} 
"return" {printf("RETURN\n");} 
"raise" {printf("RAISE\n");} 
"from" {printf("FROM\n");} 
"import" {printf("IMPORT\n");} 
"as" {printf("AS\n");} 
"global" {printf("GLOBAL\n");} 
"nonlocal" {printf("NONLOCAL\n");} 
"assert" {printf("ASSERT\n");} 
"if" {printf("IF\n"); return IF;} 
"elif" {printf("ELIF\n");} 
"else" {printf("ELSE\n"); return ELSE;} 
"for" {printf("FOR\n");} 
"in" {printf("IN\n");} 
"while" {printf("WHILE\n");} 
"try" {printf("TRY\n");} 
"finally" {printf("FINALLY\n");} 
"with" {printf("WITH\n");} 
"except" {printf("EXCEPT\n");} 
"lambda" {printf("LAMBDA\n");} 
"not" {printf("NOT\n");} 
"or" {printf("OR\n");} 
"and" {printf("AND\n");} 
"await" {printf("AWAIT\n");} 
"is" {printf("IS\n");} 
"yield" {printf("YIELD\n");} 
"string" {printf("STRING\n");} 
"False" {printf("FALSE\n");} 
"None" {printf("NONE\n");} 
"class" {printf("CLASS\n");} 
"def" {printf("DEF\n");} 

{NEWLINE} {
    indent = 0;printf("newline\n");
    spaceset = false;
    return NEWLINE;} 
{COMMENT} {printf("comment\n");} 
{ADDASSIGN} {printf("addassign\n"); ;} 
{SUBASSIGN} {printf("subassign\n"); ;} 
{MULASSIGN} {printf("mulassign\n"); ;} 
{DIVASSIGN} {printf("divassign\n"); ;} 
{IDIVASSIGN} {printf("idivassign"); ;} 
{MODASSIGN} {printf("modassign\n"); ;} 
{ATASSIGN} {printf("atassign\n"); ;} 
{ANDASSIGN} {printf("andassign\n"); ;} 
{ORASSIGN} {printf("orassign\n"); ;} 
{XORASSIGN} {printf("xorassign\n"); ;} 
{LSASSIGN} {printf("lsassign\n"); ;} 
{RSASSIGN} {printf("rsassign\n"); ;} 
{POWASSIGN} {printf("powassign\n"); ;} 
{ARROWOP} {printf("arrowop\n"); }

{POW} {printf("pow\n");} 
{IDIV} {printf("idiv\n");} 
{LEFTSHIFT} {printf("leftshift\n");} 
{RIGHTSHIFT} {printf("rightshift\n");} 
{LEQ} {printf("leq\n");} 
{GEQ} {printf("geq\n");} 
{EQUAL} {printf("equal\n"); return EQUAL;} 
{NEQ} {printf("neq\n");} 
({integer}|{floatnumber}|{imagnumber}) {printf("number\n"); return NUMBER;} 
. {printf("Character %c\n", yytext[0]); return yytext[0];}
<<EOF>> {return 0;}
^[ ]*[^ \n]+ { 
    // printf("enter\n");
int pos = yyleng - 1; 
while(pos >= 0 and yytext[pos] != ' '){ 
unput(yytext[pos]); 
--pos; 
} 
if(yytext[pos] == ' ') pos++;
indent = pos;
printf("here %d\n", pos);
if(setspace()) return INDENT;
} 
%% 

int main(int argc, char * argv[]) 
{ 
indents.push(0); 
if(argc > 1){ 
FILE *in = fopen(argv[1], "r"); 
yyin = in; 
} 
else yyin = stdin; 
while(yylex()){
    printf("Done token\n\n");
}

} 
