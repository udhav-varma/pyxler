/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 27 "parser.y"

    #ifndef PARSER
    #include "node.hpp"
    #endif

#line 55 "parser.tab.hpp"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    NEWLINE = 258,                 /* NEWLINE  */
    ENDMARKER = 259,               /* ENDMARKER  */
    ASYNC = 260,                   /* ASYNC  */
    NAME = 261,                    /* NAME  */
    DEL = 262,                     /* DEL  */
    PASS = 263,                    /* PASS  */
    BREAK = 264,                   /* BREAK  */
    CONTINUE = 265,                /* CONTINUE  */
    RETURN = 266,                  /* RETURN  */
    RAISE = 267,                   /* RAISE  */
    FROM = 268,                    /* FROM  */
    IMPORT = 269,                  /* IMPORT  */
    AS = 270,                      /* AS  */
    GLOBAL = 271,                  /* GLOBAL  */
    NONLOCAL = 272,                /* NONLOCAL  */
    ASSERT = 273,                  /* ASSERT  */
    IF = 274,                      /* IF  */
    ELIF = 275,                    /* ELIF  */
    ELSE = 276,                    /* ELSE  */
    FOR = 277,                     /* FOR  */
    IN = 278,                      /* IN  */
    WHILE = 279,                   /* WHILE  */
    TRY = 280,                     /* TRY  */
    FINALLY = 281,                 /* FINALLY  */
    WITH = 282,                    /* WITH  */
    EXCEPT = 283,                  /* EXCEPT  */
    LAMBDA = 284,                  /* LAMBDA  */
    NOT = 285,                     /* NOT  */
    OR = 286,                      /* OR  */
    AND = 287,                     /* AND  */
    AWAIT = 288,                   /* AWAIT  */
    IS = 289,                      /* IS  */
    INDENT = 290,                  /* INDENT  */
    DEDENT = 291,                  /* DEDENT  */
    YIELD = 292,                   /* YIELD  */
    TRUE = 293,                    /* TRUE  */
    NUMBER = 294,                  /* NUMBER  */
    STRING = 295,                  /* STRING  */
    FALSE = 296,                   /* FALSE  */
    NONE = 297,                    /* NONE  */
    CLASS = 298,                   /* CLASS  */
    DEF = 299,                     /* DEF  */
    ARROWOP = 300,                 /* ARROWOP  */
    POW = 301,                     /* POW  */
    ADDASSIGN = 302,               /* ADDASSIGN  */
    SUBASSIGN = 303,               /* SUBASSIGN  */
    MULASSIGN = 304,               /* MULASSIGN  */
    ATASSIGN = 305,                /* ATASSIGN  */
    DIVASSIGN = 306,               /* DIVASSIGN  */
    MODASSIGN = 307,               /* MODASSIGN  */
    ANDASSIGN = 308,               /* ANDASSIGN  */
    ORASSIGN = 309,                /* ORASSIGN  */
    XORASSIGN = 310,               /* XORASSIGN  */
    LSASSIGN = 311,                /* LSASSIGN  */
    RSASSIGN = 312,                /* RSASSIGN  */
    POWASSIGN = 313,               /* POWASSIGN  */
    IDIVASSIGN = 314,              /* IDIVASSIGN  */
    ELLIPSIS = 315,                /* ELLIPSIS  */
    EQUAL = 316,                   /* EQUAL  */
    GEQ = 317,                     /* GEQ  */
    LEQ = 318,                     /* LEQ  */
    LTORGT = 319,                  /* LTORGT  */
    NEQ = 320,                     /* NEQ  */
    LEFTSHIFT = 321,               /* LEFTSHIFT  */
    RIGHTSHIFT = 322,              /* RIGHTSHIFT  */
    IDIV = 323                     /* IDIV  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef NODE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
