%option noyywrap
%option yylineno
%{
#include<bits/stdc++.h>
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
    return 0;
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
NAME ([A-Za-z_][A-Za-z0-9_]*)

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
decinteger ({nonzerodigit}(([_]?{digit})*|([0]+)([_]?[0])*))
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
 {
    if(dedpos > 0){
        --dedpos;
        yylval.ptr = new node("DEDENT", "DEDENT");
        yylval.val = string("DEDENT");
        return DEDENT;
    }
 }
^[ ]*\n       {/* Ignore blank lines.*/}

"async" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;}; 
    yylval.ptr = new node("KEYWORD", "async");
    yyval.val = "async";
    return ASYNC;}
"del" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "del");
    yylval.val = "del";
    return DEL;}
"pass" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "pass");
    yylval.val = "pass";
    return PASS;}
"break" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "break");
    yylval.val = "break";
    return BREAK;}
"continue" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "continue");
    yylval.val = "continue";
    return CONTINUE;}
"return" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "return");
    yylval.val = "return";
    return RETURN;}
"raise" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "raise");
    yylval.val = "raise";
    return RAISE;}
"from" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "from");
    yylval.val = "from";
    return FROM;}
"import" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "import");
    yylval.val = "import";
    return IMPORT;}
"as" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "as");
    yylval.val = "as";
    return AS;}
"global" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "global");
    yylval.val = "global";
    return GLOBAL;}
"nonlocal" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "nonlocal");
    yylval.val = "nonlocal";
    return NONLOCAL;}
"assert" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "assert");
    yylval.val = "assert";
    return ASSERT;}
"if" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "if");
    yylval.val = "if";
    return IF;}
"elif" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "elif");
    yylval.val = "elif";
    return ELIF;}
"else" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "else");
    yylval.val = "else";
    return ELSE;}
"for" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "for");
    yylval.val = "for";
    return FOR;}
"in" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "in");
    yylval.val = "in";
    return IN;}
"while" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "while");
    yylval.val = "while";
    return WHILE;}
"try" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "try");
    yylval.val = "try";
    return TRY;}
"finally" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "finally");
    yylval.val = "finally";
    return FINALLY;}
"with" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "with");
    yylval.val = "with";
    return WITH;}
"except" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "except");
    yylval.val = "except";
    return EXCEPT;}
"lambda" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "lambda");
    yylval.val = "lambda";
    return LAMBDA;}
"not" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "not");
    yylval.val = "not";
    return NOT;}
"or" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "or");
    yylval.val = "or";
    return OR;}
"and" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "and");
    yylval.val = "and";
    return AND;}
"await" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "await");
    yylval.val = "await";
    return AWAIT;}
"is" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "is");
    yylval.val = "is";
    return IS;}
"yield" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "yield");
    yylval.val = "yield";
    return YIELD;}
"True" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "True");
    yylval.val = "True";
    return TRUE;}
"False" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "False");
    yylval.val = "False";
    return FALSE;}
"None" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "None");
    yylval.val = "None";
    return NONE;}
"class" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "class");
    yylval.val = "class";
    return CLASS;}
"def" {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("KEYWORD", "def");
    yylval.val = "def";
    return DEF;}

{NEWLINE} {indent = 0; spaceset = false;
    yylval.ptr = new node("NEWLINE", "NEWLINE");
    yylval.val = "NEWLINE";
    return NEWLINE;}
{COMMENT} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};}
{ADDASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "+=");
    yylval.val = "+=";
    return ADDASSIGN;}
{SUBASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "-=")
    yylval.val = "-=";
    return SUBASSIGN;}
{MULASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "*=");
    yylval.val = "*=";
    return MULASSIGN;}
{DIVASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "/=");
    yylval.val = "/=";
    return DIVASSIGN;}
{IDIVASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "//=");
    yylval.val = "//=";
    return IDIVASSIGN;}
{MODASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "%=");
    yylval.val = "%=";
    return MODASSIGN;}
{ATASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "@=");
    yylval.val = "@=";
    return ATASSIGN;}
{ANDASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "&=");
    yylval.val = "&=";
    return ANDASSIGN;}
{ORASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "|=");
    yylval.val = "|=";
    return ORASSIGN;}
{XORASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "^=");
    yylval.val = "^=";
    return XORASSIGN;}
{LSASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "<<=");
    yylval.val = "<<=";
    return LSASSIGN;}
{RSASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", ">>=");
    yylval.val = ">>=";
    return RSASSIGN;}
{POWASSIGN} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "**=");
    yylval.val = "**=";
    return POWASSIGN;}
{ARROWOP} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "->");
    yylval.val = "->";
    return ARROWOP;}

{stringliteral} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;}; 
    yylval.ptr = new node("STRING LITERAL", string(yytext, yytext + yyleng));
    yylval.val = string(yytext, yytext + yyleng);
    return STRING;}
{POW} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "**");
    yylval.val = "**";
    return POW;}
{IDIV} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "//");
    yylval.val = "//";
    return IDIV;}
{LEFTSHIFT} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "<<");
    yylval.val = "<<";
    return LEFTSHIFT;}
{RIGHTSHIFT} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", ">>");
    yylval.val = ">>";
    return RIGHTSHIFT;}
{LEQ} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR"< "<=");
    yylval.val = "<=";
    return LEQ;}
{GEQ} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", ">=");
    yylval.val = ">=";
    return GEQ;}
{EQUAL} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "==");
    yylval.val = "==";
    return EQUAL;}
{NEQ} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.ptr = new node("OPERATOR", "!=");
    yylval.val = "!=";
    return NEQ;}
({integer}|{floatnumber}|{imagnumber})  {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("NUMBER", yylval.val);
    return NUMBER;}
{NAME} {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;};
    yylval.val = string(yytext, yytext + yyleng);
    yylval.ptr = new node("IDENTIFIER", yylval.val);
    return NAME;}
. {if(!spaceset){setspace(); for(int i = yyleng - 1; i >= 0; i--) unput(yytext[i]); return -1;}; 
    yylval.val = string(1, yytext[0]);
    yylval.ptr = new node("DELIMITER", yylval.val);
    return yytext[0];}

^[ ]*[^ \n]+ {
    int pos = yyleng - 1;
    while(pos >= 1 and yytext[pos] != ' '){
        unput(yytext[pos]);
        --pos;
    }
    
    if(yytext[pos] == ' ') pos++;
    indent = pos;
    if(setspace()){
        yylval.val = "INDENT";
        yylval.ptr = new node("INDENT", yylval.val);
        return INDENT;
    }
}
<<EOF>> {return 0;}
%%

int main(int argc, char * argv[])
{
    indents.push(0);
    if(argc > 1){
        FIlE *in = fopen(argv[1], "r");
        yyin = in;
    }
    else yyin = stdin;
}