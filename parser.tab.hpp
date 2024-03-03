/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
#line 25 "parser.y"

    #ifndef PARSER
    #include "node.hpp"




    #endif

#line 58 "parser.tab.hpp"

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
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
