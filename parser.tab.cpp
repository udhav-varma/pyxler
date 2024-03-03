/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 33 "parser.y"

    #include "node.hpp"
    AST ast;
    #define PARSER

#line 74 "parser.tab.cpp"



/* First part of user prologue.  */
#line 11 "parser.y"

    extern int yylex();
    extern int yylineno;
    extern int yydebug;
    extern FILE * yyin;
    void yyerror(char * s){
    fprintf(stderr, "Error! Line Number %d, message: %s\n", yylineno, s);
    }
    void yyerror(string s){
    fprintf(stderr, "Error! Line Number %d, message: %s\n", yylineno, s.c_str());
    }
    extern stack<int> indents;
    #define YYDEBUG 1

#line 94 "parser.tab.cpp"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NEWLINE = 3,                    /* NEWLINE  */
  YYSYMBOL_ENDMARKER = 4,                  /* ENDMARKER  */
  YYSYMBOL_ASYNC = 5,                      /* ASYNC  */
  YYSYMBOL_NAME = 6,                       /* NAME  */
  YYSYMBOL_DEL = 7,                        /* DEL  */
  YYSYMBOL_PASS = 8,                       /* PASS  */
  YYSYMBOL_BREAK = 9,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 10,                  /* CONTINUE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_RAISE = 12,                     /* RAISE  */
  YYSYMBOL_FROM = 13,                      /* FROM  */
  YYSYMBOL_IMPORT = 14,                    /* IMPORT  */
  YYSYMBOL_AS = 15,                        /* AS  */
  YYSYMBOL_GLOBAL = 16,                    /* GLOBAL  */
  YYSYMBOL_NONLOCAL = 17,                  /* NONLOCAL  */
  YYSYMBOL_ASSERT = 18,                    /* ASSERT  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELIF = 20,                      /* ELIF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_IN = 23,                        /* IN  */
  YYSYMBOL_WHILE = 24,                     /* WHILE  */
  YYSYMBOL_TRY = 25,                       /* TRY  */
  YYSYMBOL_FINALLY = 26,                   /* FINALLY  */
  YYSYMBOL_WITH = 27,                      /* WITH  */
  YYSYMBOL_EXCEPT = 28,                    /* EXCEPT  */
  YYSYMBOL_LAMBDA = 29,                    /* LAMBDA  */
  YYSYMBOL_NOT = 30,                       /* NOT  */
  YYSYMBOL_OR = 31,                        /* OR  */
  YYSYMBOL_AND = 32,                       /* AND  */
  YYSYMBOL_AWAIT = 33,                     /* AWAIT  */
  YYSYMBOL_IS = 34,                        /* IS  */
  YYSYMBOL_INDENT = 35,                    /* INDENT  */
  YYSYMBOL_DEDENT = 36,                    /* DEDENT  */
  YYSYMBOL_YIELD = 37,                     /* YIELD  */
  YYSYMBOL_TRUE = 38,                      /* TRUE  */
  YYSYMBOL_NUMBER = 39,                    /* NUMBER  */
  YYSYMBOL_STRING = 40,                    /* STRING  */
  YYSYMBOL_FALSE = 41,                     /* FALSE  */
  YYSYMBOL_NONE = 42,                      /* NONE  */
  YYSYMBOL_CLASS = 43,                     /* CLASS  */
  YYSYMBOL_DEF = 44,                       /* DEF  */
  YYSYMBOL_ARROWOP = 45,                   /* ARROWOP  */
  YYSYMBOL_POW = 46,                       /* POW  */
  YYSYMBOL_ADDASSIGN = 47,                 /* ADDASSIGN  */
  YYSYMBOL_SUBASSIGN = 48,                 /* SUBASSIGN  */
  YYSYMBOL_MULASSIGN = 49,                 /* MULASSIGN  */
  YYSYMBOL_ATASSIGN = 50,                  /* ATASSIGN  */
  YYSYMBOL_DIVASSIGN = 51,                 /* DIVASSIGN  */
  YYSYMBOL_MODASSIGN = 52,                 /* MODASSIGN  */
  YYSYMBOL_ANDASSIGN = 53,                 /* ANDASSIGN  */
  YYSYMBOL_ORASSIGN = 54,                  /* ORASSIGN  */
  YYSYMBOL_XORASSIGN = 55,                 /* XORASSIGN  */
  YYSYMBOL_LSASSIGN = 56,                  /* LSASSIGN  */
  YYSYMBOL_RSASSIGN = 57,                  /* RSASSIGN  */
  YYSYMBOL_POWASSIGN = 58,                 /* POWASSIGN  */
  YYSYMBOL_IDIVASSIGN = 59,                /* IDIVASSIGN  */
  YYSYMBOL_ELLIPSIS = 60,                  /* ELLIPSIS  */
  YYSYMBOL_EQUAL = 61,                     /* EQUAL  */
  YYSYMBOL_GEQ = 62,                       /* GEQ  */
  YYSYMBOL_LEQ = 63,                       /* LEQ  */
  YYSYMBOL_LTORGT = 64,                    /* LTORGT  */
  YYSYMBOL_NEQ = 65,                       /* NEQ  */
  YYSYMBOL_LEFTSHIFT = 66,                 /* LEFTSHIFT  */
  YYSYMBOL_RIGHTSHIFT = 67,                /* RIGHTSHIFT  */
  YYSYMBOL_IDIV = 68,                      /* IDIV  */
  YYSYMBOL_69_ = 69,                       /* '@'  */
  YYSYMBOL_70_ = 70,                       /* '('  */
  YYSYMBOL_71_ = 71,                       /* ')'  */
  YYSYMBOL_72_ = 72,                       /* ':'  */
  YYSYMBOL_73_ = 73,                       /* '*'  */
  YYSYMBOL_74_ = 74,                       /* ','  */
  YYSYMBOL_75_ = 75,                       /* ';'  */
  YYSYMBOL_76_ = 76,                       /* '='  */
  YYSYMBOL_77_ = 77,                       /* '.'  */
  YYSYMBOL_78_ = 78,                       /* '<'  */
  YYSYMBOL_79_ = 79,                       /* '>'  */
  YYSYMBOL_80_ = 80,                       /* '|'  */
  YYSYMBOL_81_ = 81,                       /* '^'  */
  YYSYMBOL_82_ = 82,                       /* '&'  */
  YYSYMBOL_83_ = 83,                       /* '+'  */
  YYSYMBOL_84_ = 84,                       /* '-'  */
  YYSYMBOL_85_ = 85,                       /* '/'  */
  YYSYMBOL_86_ = 86,                       /* '%'  */
  YYSYMBOL_87_ = 87,                       /* '~'  */
  YYSYMBOL_88_ = 88,                       /* '['  */
  YYSYMBOL_89_ = 89,                       /* ']'  */
  YYSYMBOL_90_ = 90,                       /* '{'  */
  YYSYMBOL_91_ = 91,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 92,                  /* $accept  */
  YYSYMBOL_file_input = 93,                /* file_input  */
  YYSYMBOL_nstatement = 94,                /* nstatement  */
  YYSYMBOL_decorator = 95,                 /* decorator  */
  YYSYMBOL_cond_brack_cond_arglist = 96,   /* cond_brack_cond_arglist  */
  YYSYMBOL_brack_cond_arglist = 97,        /* brack_cond_arglist  */
  YYSYMBOL_cond_arglist = 98,              /* cond_arglist  */
  YYSYMBOL_decorators = 99,                /* decorators  */
  YYSYMBOL_decorated = 100,                /* decorated  */
  YYSYMBOL_defob = 101,                    /* defob  */
  YYSYMBOL_async_funcdef = 102,            /* async_funcdef  */
  YYSYMBOL_funcdef = 103,                  /* funcdef  */
  YYSYMBOL_cond_arrowtest = 104,           /* cond_arrowtest  */
  YYSYMBOL_parameters = 105,               /* parameters  */
  YYSYMBOL_cond_typedargslist = 106,       /* cond_typedargslist  */
  YYSYMBOL_typedargslist = 107,            /* typedargslist  */
  YYSYMBOL_conds_comma_startfpdefcondcomma = 108, /* conds_comma_startfpdefcondcomma  */
  YYSYMBOL_cond_star_or_startstar = 109,   /* cond_star_or_startstar  */
  YYSYMBOL_cond_comma_or_condstarorstartstar = 110, /* cond_comma_or_condstarorstartstar  */
  YYSYMBOL_close_comma_tfpdef_condeqtest = 111, /* close_comma_tfpdef_condeqtest  */
  YYSYMBOL_cond_tfpdef = 112,              /* cond_tfpdef  */
  YYSYMBOL_tfpdef = 113,                   /* tfpdef  */
  YYSYMBOL_varargslist = 114,              /* varargslist  */
  YYSYMBOL_vfpdef = 115,                   /* vfpdef  */
  YYSYMBOL_close_comma_vfpdef_condeqtest = 116, /* close_comma_vfpdef_condeqtest  */
  YYSYMBOL_cond_vfpdef = 117,              /* cond_vfpdef  */
  YYSYMBOL_cond_star_or_startstar_vf = 118, /* cond_star_or_startstar_vf  */
  YYSYMBOL_conds_comma_starvfpdefcondcomma = 119, /* conds_comma_starvfpdefcondcomma  */
  YYSYMBOL_cond_comma_or_condstarorstartstarvf = 120, /* cond_comma_or_condstarorstartstarvf  */
  YYSYMBOL_stmt = 121,                     /* stmt  */
  YYSYMBOL_simple_stmt = 122,              /* simple_stmt  */
  YYSYMBOL_close_small_stmt = 123,         /* close_small_stmt  */
  YYSYMBOL_cond_semi_colon = 124,          /* cond_semi_colon  */
  YYSYMBOL_small_stmt = 125,               /* small_stmt  */
  YYSYMBOL_expr_stmt = 126,                /* expr_stmt  */
  YYSYMBOL_yield_or_test = 127,            /* yield_or_test  */
  YYSYMBOL_yield_or_test_star = 128,       /* yield_or_test_star  */
  YYSYMBOL_close_yield_or_test_star = 129, /* close_yield_or_test_star  */
  YYSYMBOL_annassign = 130,                /* annassign  */
  YYSYMBOL_cond_eqtest = 131,              /* cond_eqtest  */
  YYSYMBOL_anna_or_auga_or_closeyield = 132, /* anna_or_auga_or_closeyield  */
  YYSYMBOL_testlist_star_expr = 133,       /* testlist_star_expr  */
  YYSYMBOL_test_or_starexp = 134,          /* test_or_starexp  */
  YYSYMBOL_close_commatest_or_starexp = 135, /* close_commatest_or_starexp  */
  YYSYMBOL_cond_comma = 136,               /* cond_comma  */
  YYSYMBOL_augassign = 137,                /* augassign  */
  YYSYMBOL_del_stmt = 138,                 /* del_stmt  */
  YYSYMBOL_pass_stmt = 139,                /* pass_stmt  */
  YYSYMBOL_flow_stmt = 140,                /* flow_stmt  */
  YYSYMBOL_break_stmt = 141,               /* break_stmt  */
  YYSYMBOL_continue_stmt = 142,            /* continue_stmt  */
  YYSYMBOL_return_stmt = 143,              /* return_stmt  */
  YYSYMBOL_cond_testlist = 144,            /* cond_testlist  */
  YYSYMBOL_yield_stmt = 145,               /* yield_stmt  */
  YYSYMBOL_raise_stmt = 146,               /* raise_stmt  */
  YYSYMBOL_cond_from_test = 147,           /* cond_from_test  */
  YYSYMBOL_import_stmt = 148,              /* import_stmt  */
  YYSYMBOL_import_name = 149,              /* import_name  */
  YYSYMBOL_import_from = 150,              /* import_from  */
  YYSYMBOL_closeplusdotorellipsisname_or_plusdotellip = 151, /* closeplusdotorellipsisname_or_plusdotellip  */
  YYSYMBOL_star_or_import_parentheses_or_import = 152, /* star_or_import_parentheses_or_import  */
  YYSYMBOL_plus_dot_or_ellipsis = 153,     /* plus_dot_or_ellipsis  */
  YYSYMBOL_close_dot_or_ellipsis = 154,    /* close_dot_or_ellipsis  */
  YYSYMBOL_import_as_name = 155,           /* import_as_name  */
  YYSYMBOL_dotted_as_name = 156,           /* dotted_as_name  */
  YYSYMBOL_import_as_names = 157,          /* import_as_names  */
  YYSYMBOL_close_commaimportasname = 158,  /* close_commaimportasname  */
  YYSYMBOL_dotted_as_names = 159,          /* dotted_as_names  */
  YYSYMBOL_close_commadottedasname = 160,  /* close_commadottedasname  */
  YYSYMBOL_dotted_name = 161,              /* dotted_name  */
  YYSYMBOL_close_dotted_name = 162,        /* close_dotted_name  */
  YYSYMBOL_global_stmt = 163,              /* global_stmt  */
  YYSYMBOL_nonlocal_stmt = 164,            /* nonlocal_stmt  */
  YYSYMBOL_close_comma_name = 165,         /* close_comma_name  */
  YYSYMBOL_assert_stmt = 166,              /* assert_stmt  */
  YYSYMBOL_compound_stmt = 167,            /* compound_stmt  */
  YYSYMBOL_async_stmt = 168,               /* async_stmt  */
  YYSYMBOL_funcdef_or_withstmt_or_forstmt = 169, /* funcdef_or_withstmt_or_forstmt  */
  YYSYMBOL_if_stmt = 170,                  /* if_stmt  */
  YYSYMBOL_cond_else_colon_suite = 171,    /* cond_else_colon_suite  */
  YYSYMBOL_close_eliftestsuite = 172,      /* close_eliftestsuite  */
  YYSYMBOL_while_stmt = 173,               /* while_stmt  */
  YYSYMBOL_for_stmt = 174,                 /* for_stmt  */
  YYSYMBOL_try_stmt = 175,                 /* try_stmt  */
  YYSYMBOL_cond_finallycolsuite = 176,     /* cond_finallycolsuite  */
  YYSYMBOL_plus_except_colsuite = 177,     /* plus_except_colsuite  */
  YYSYMBOL_with_stmt = 178,                /* with_stmt  */
  YYSYMBOL_close_commawithitem = 179,      /* close_commawithitem  */
  YYSYMBOL_with_item = 180,                /* with_item  */
  YYSYMBOL_except_clause = 181,            /* except_clause  */
  YYSYMBOL_cond_testasname = 182,          /* cond_testasname  */
  YYSYMBOL_suite = 183,                    /* suite  */
  YYSYMBOL_plus_stmt = 184,                /* plus_stmt  */
  YYSYMBOL_test = 185,                     /* test  */
  YYSYMBOL_test_nocond = 186,              /* test_nocond  */
  YYSYMBOL_lambdef = 187,                  /* lambdef  */
  YYSYMBOL_lambdef_nocond = 188,           /* lambdef_nocond  */
  YYSYMBOL_or_test = 189,                  /* or_test  */
  YYSYMBOL_close_or_and_test = 190,        /* close_or_and_test  */
  YYSYMBOL_and_test = 191,                 /* and_test  */
  YYSYMBOL_close_and_not_test = 192,       /* close_and_not_test  */
  YYSYMBOL_not_test = 193,                 /* not_test  */
  YYSYMBOL_close_not = 194,                /* close_not  */
  YYSYMBOL_comparison = 195,               /* comparison  */
  YYSYMBOL_close_compopexpr = 196,         /* close_compopexpr  */
  YYSYMBOL_comp_op = 197,                  /* comp_op  */
  YYSYMBOL_star_expr = 198,                /* star_expr  */
  YYSYMBOL_expr = 199,                     /* expr  */
  YYSYMBOL_close_orxorexp = 200,           /* close_orxorexp  */
  YYSYMBOL_xor_expr = 201,                 /* xor_expr  */
  YYSYMBOL_close_xor_and_expr = 202,       /* close_xor_and_expr  */
  YYSYMBOL_and_expr = 203,                 /* and_expr  */
  YYSYMBOL_close_andshiftexpr = 204,       /* close_andshiftexpr  */
  YYSYMBOL_shift_expr = 205,               /* shift_expr  */
  YYSYMBOL_left_right_shift = 206,         /* left_right_shift  */
  YYSYMBOL_close_lrs_arith_expr = 207,     /* close_lrs_arith_expr  */
  YYSYMBOL_arith_expr = 208,               /* arith_expr  */
  YYSYMBOL_close_plusminusterm = 209,      /* close_plusminusterm  */
  YYSYMBOL_term = 210,                     /* term  */
  YYSYMBOL_group_muldivremops = 211,       /* group_muldivremops  */
  YYSYMBOL_close_muldivopsfactor = 212,    /* close_muldivopsfactor  */
  YYSYMBOL_factor = 213,                   /* factor  */
  YYSYMBOL_close_plus_or_minus_or_not = 214, /* close_plus_or_minus_or_not  */
  YYSYMBOL_plus_or_minus_or_not = 215,     /* plus_or_minus_or_not  */
  YYSYMBOL_power = 216,                    /* power  */
  YYSYMBOL_atom_expr = 217,                /* atom_expr  */
  YYSYMBOL_close_trailer = 218,            /* close_trailer  */
  YYSYMBOL_atom = 219,                     /* atom  */
  YYSYMBOL_cond_yield_or_testlist = 220,   /* cond_yield_or_testlist  */
  YYSYMBOL_multi_str = 221,                /* multi_str  */
  YYSYMBOL_testlist_comp = 222,            /* testlist_comp  */
  YYSYMBOL_trailer = 223,                  /* trailer  */
  YYSYMBOL_subscriptlist = 224,            /* subscriptlist  */
  YYSYMBOL_close_commasubscript = 225,     /* close_commasubscript  */
  YYSYMBOL_subscript = 226,                /* subscript  */
  YYSYMBOL_cond_test = 227,                /* cond_test  */
  YYSYMBOL_cond_sliceop = 228,             /* cond_sliceop  */
  YYSYMBOL_sliceop = 229,                  /* sliceop  */
  YYSYMBOL_exprlist = 230,                 /* exprlist  */
  YYSYMBOL_expr_or_star_expr = 231,        /* expr_or_star_expr  */
  YYSYMBOL_close_comma_expr_or_star_expr = 232, /* close_comma_expr_or_star_expr  */
  YYSYMBOL_testlist = 233,                 /* testlist  */
  YYSYMBOL_close_comma_test = 234,         /* close_comma_test  */
  YYSYMBOL_dictorsetmaker = 235,           /* dictorsetmaker  */
  YYSYMBOL_testcoltest_or_starrexpr = 236, /* testcoltest_or_starrexpr  */
  YYSYMBOL_close_commatestcoltestorstarrexpr = 237, /* close_commatestcoltestorstarrexpr  */
  YYSYMBOL_compfor_or_close_commatestcoltestorstarexpr_condcomma = 238, /* compfor_or_close_commatestcoltestorstarexpr_condcomma  */
  YYSYMBOL_some_non_terminal = 239,        /* some_non_terminal  */
  YYSYMBOL_classdef = 240,                 /* classdef  */
  YYSYMBOL_cond_parentheses_arglist = 241, /* cond_parentheses_arglist  */
  YYSYMBOL_arglist = 242,                  /* arglist  */
  YYSYMBOL_close_comma_argument = 243,     /* close_comma_argument  */
  YYSYMBOL_argument = 244,                 /* argument  */
  YYSYMBOL_comp_iter = 245,                /* comp_iter  */
  YYSYMBOL_comp_for = 246,                 /* comp_for  */
  YYSYMBOL_cond_async = 247,               /* cond_async  */
  YYSYMBOL_comp_if = 248,                  /* comp_if  */
  YYSYMBOL_yield_expr = 249,               /* yield_expr  */
  YYSYMBOL_yield_arg = 250                 /* yield_arg  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  341
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  515

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    86,    82,     2,
      70,    71,    73,    83,    74,    84,    77,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,    75,
      78,    76,    79,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,    81,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,    80,    91,    87,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   109,   109,   134,   140,   146,   166,   174,   177,   180,
     187,   190,   193,   196,   203,   209,   212,   216,   220,   226,
     237,   243,   246,   253,   255,   259,   267,   275,   282,   285,
     293,   296,   304,   311,   314,   320,   323,   330,   333,   336,
     339,   342,   350,   358,   366,   373,   376,   384,   387,   390,
     393,   402,   409,   412,   415,   423,   426,   432,   436,   439,
     442,   450,   457,   460,   463,   466,   468,   471,   474,   477,
     481,   484,   487,   490,   497,   501,   504,   508,   511,   518,
     521,   528,   534,   537,   539,   541,   545,   552,   556,   559,
     566,   569,   572,   575,   578,   581,   584,   587,   590,   593,
     596,   599,   602,   605,   608,   611,   615,   621,   626,   629,
     632,   635,   638,   642,   648,   654,   661,   663,   666,   669,
     675,   677,   683,   687,   691,   694,   702,   711,   716,   720,
     722,   728,   732,   737,   742,   744,   748,   750,   754,   756,
     764,   766,   774,   782,   788,   792,   800,   806,   810,   819,
     825,   830,   837,   843,   849,   853,   858,   867,   869,   871,
     873,   875,   877,   879,   881,   883,   887,   894,   896,   898,
     902,   914,   920,   924,   932,   936,   943,   954,   963,   976,
     985,   996,  1002,  1006,  1012,  1021,  1031,  1037,  1041,  1043,
    1052,  1059,  1061,  1067,  1071,  1074,  1083,  1085,  1091,  1099,
    1101,  1106,  1108,  1112,  1119,  1127,  1134,  1142,  1150,  1156,
    1160,  1168,  1174,  1178,  1186,  1191,  1195,  1203,  1209,  1217,
    1219,  1221,  1223,  1225,  1227,  1229,  1231,  1233,  1238,  1240,
    1247,  1254,  1261,  1267,  1271,  1279,  1285,  1289,  1297,  1303,
    1307,  1315,  1317,  1321,  1327,  1331,  1338,  1343,  1348,  1352,
    1360,  1362,  1364,  1366,  1368,  1372,  1378,  1382,  1390,  1395,
    1400,  1402,  1404,  1408,  1414,  1419,  1425,  1433,  1438,  1442,
    1448,  1455,  1460,  1466,  1471,  1473,  1477,  1479,  1481,  1483,
    1485,  1489,  1491,  1493,  1497,  1499,  1506,  1511,  1519,  1525,
    1532,  1540,  1548,  1554,  1558,  1560,  1569,  1571,  1576,  1578,
    1582,  1587,  1591,  1599,  1601,  1605,  1611,  1615,  1623,  1629,
    1635,  1640,  1644,  1650,  1655,  1661,  1665,  1667,  1674,  1679,
    1687,  1697,  1703,  1707,  1715,  1721,  1734,  1740,  1743,  1750,
    1756,  1763,  1765,  1768,  1778,  1780,  1785,  1790,  1803,  1809,
    1813,  1819
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NEWLINE", "ENDMARKER",
  "ASYNC", "NAME", "DEL", "PASS", "BREAK", "CONTINUE", "RETURN", "RAISE",
  "FROM", "IMPORT", "AS", "GLOBAL", "NONLOCAL", "ASSERT", "IF", "ELIF",
  "ELSE", "FOR", "IN", "WHILE", "TRY", "FINALLY", "WITH", "EXCEPT",
  "LAMBDA", "NOT", "OR", "AND", "AWAIT", "IS", "INDENT", "DEDENT", "YIELD",
  "TRUE", "NUMBER", "STRING", "FALSE", "NONE", "CLASS", "DEF", "ARROWOP",
  "POW", "ADDASSIGN", "SUBASSIGN", "MULASSIGN", "ATASSIGN", "DIVASSIGN",
  "MODASSIGN", "ANDASSIGN", "ORASSIGN", "XORASSIGN", "LSASSIGN",
  "RSASSIGN", "POWASSIGN", "IDIVASSIGN", "ELLIPSIS", "EQUAL", "GEQ", "LEQ",
  "LTORGT", "NEQ", "LEFTSHIFT", "RIGHTSHIFT", "IDIV", "'@'", "'('", "')'",
  "':'", "'*'", "','", "';'", "'='", "'.'", "'<'", "'>'", "'|'", "'^'",
  "'&'", "'+'", "'-'", "'/'", "'%'", "'~'", "'['", "']'", "'{'", "'}'",
  "$accept", "file_input", "nstatement", "decorator",
  "cond_brack_cond_arglist", "brack_cond_arglist", "cond_arglist",
  "decorators", "decorated", "defob", "async_funcdef", "funcdef",
  "cond_arrowtest", "parameters", "cond_typedargslist", "typedargslist",
  "conds_comma_startfpdefcondcomma", "cond_star_or_startstar",
  "cond_comma_or_condstarorstartstar", "close_comma_tfpdef_condeqtest",
  "cond_tfpdef", "tfpdef", "varargslist", "vfpdef",
  "close_comma_vfpdef_condeqtest", "cond_vfpdef",
  "cond_star_or_startstar_vf", "conds_comma_starvfpdefcondcomma",
  "cond_comma_or_condstarorstartstarvf", "stmt", "simple_stmt",
  "close_small_stmt", "cond_semi_colon", "small_stmt", "expr_stmt",
  "yield_or_test", "yield_or_test_star", "close_yield_or_test_star",
  "annassign", "cond_eqtest", "anna_or_auga_or_closeyield",
  "testlist_star_expr", "test_or_starexp", "close_commatest_or_starexp",
  "cond_comma", "augassign", "del_stmt", "pass_stmt", "flow_stmt",
  "break_stmt", "continue_stmt", "return_stmt", "cond_testlist",
  "yield_stmt", "raise_stmt", "cond_from_test", "import_stmt",
  "import_name", "import_from",
  "closeplusdotorellipsisname_or_plusdotellip",
  "star_or_import_parentheses_or_import", "plus_dot_or_ellipsis",
  "close_dot_or_ellipsis", "import_as_name", "dotted_as_name",
  "import_as_names", "close_commaimportasname", "dotted_as_names",
  "close_commadottedasname", "dotted_name", "close_dotted_name",
  "global_stmt", "nonlocal_stmt", "close_comma_name", "assert_stmt",
  "compound_stmt", "async_stmt", "funcdef_or_withstmt_or_forstmt",
  "if_stmt", "cond_else_colon_suite", "close_eliftestsuite", "while_stmt",
  "for_stmt", "try_stmt", "cond_finallycolsuite", "plus_except_colsuite",
  "with_stmt", "close_commawithitem", "with_item", "except_clause",
  "cond_testasname", "suite", "plus_stmt", "test", "test_nocond",
  "lambdef", "lambdef_nocond", "or_test", "close_or_and_test", "and_test",
  "close_and_not_test", "not_test", "close_not", "comparison",
  "close_compopexpr", "comp_op", "star_expr", "expr", "close_orxorexp",
  "xor_expr", "close_xor_and_expr", "and_expr", "close_andshiftexpr",
  "shift_expr", "left_right_shift", "close_lrs_arith_expr", "arith_expr",
  "close_plusminusterm", "term", "group_muldivremops",
  "close_muldivopsfactor", "factor", "close_plus_or_minus_or_not",
  "plus_or_minus_or_not", "power", "atom_expr", "close_trailer", "atom",
  "cond_yield_or_testlist", "multi_str", "testlist_comp", "trailer",
  "subscriptlist", "close_commasubscript", "subscript", "cond_test",
  "cond_sliceop", "sliceop", "exprlist", "expr_or_star_expr",
  "close_comma_expr_or_star_expr", "testlist", "close_comma_test",
  "dictorsetmaker", "testcoltest_or_starrexpr",
  "close_commatestcoltestorstarrexpr",
  "compfor_or_close_commatestcoltestorstarexpr_condcomma",
  "some_non_terminal", "classdef", "cond_parentheses_arglist", "arglist",
  "close_comma_argument", "argument", "comp_iter", "comp_for",
  "cond_async", "comp_if", "yield_expr", "yield_arg", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-383)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-340)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -383,    69,   405,  -383,  -383,  -383,   174,    66,  -383,  -383,
    -383,    43,    53,   -26,   142,   171,   183,   203,   203,    66,
     203,   131,   203,    77,    25,   206,   236,   142,  -383,  -383,
     150,  -383,  -383,  -383,  -383,  -383,  -383,   516,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,   224,  -383,  -383,   216,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,   175,  -383,  -383,  -383,  -383,  -383,  -383,   234,   -26,
     -26,   237,   242,   142,  -383,  -383,  -383,   235,  -383,  -383,
     180,   185,   232,   188,   311,  -383,   252,  -383,   264,   203,
     264,   199,   202,   203,  -383,  -383,   207,   209,   213,  -383,
     240,  -383,  -383,  -383,  -383,  -383,   211,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
     203,   222,  -383,  -383,    28,   226,  -383,   245,   269,  -383,
    -383,  -383,   227,   221,   228,    -3,   100,   265,  -383,    46,
    -383,  -383,   271,  -383,  -383,  -383,   168,  -383,  -383,  -383,
      65,    97,  -383,  -383,   266,  -383,  -383,   239,   241,   203,
    -383,  -383,    49,  -383,   254,   243,   310,   262,   262,   203,
     311,   203,   311,   302,  -383,     7,   101,  -383,   273,  -383,
    -383,  -383,   203,   203,  -383,  -383,   156,   267,    85,   304,
     156,   349,  -383,  -383,   352,   350,   202,   201,  -383,  -383,
    -383,    37,  -383,   335,  -383,  -383,   528,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,    40,   286,  -383,  -383,  -383,   283,    66,
    -383,    40,   301,   284,    40,  -383,  -383,   -40,    36,  -383,
      70,  -383,  -383,   343,   371,  -383,  -383,  -383,  -383,   373,
     142,  -383,   374,  -383,  -383,   313,   361,   513,   314,    21,
     212,   316,   311,   203,  -383,  -383,  -383,   309,  -383,  -383,
     317,   203,   203,   319,    27,  -383,  -383,   311,   320,   387,
     387,   323,  -383,   202,   203,   324,   326,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,   203,  -383,  -383,  -383,   376,
     370,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,   -40,  -383,   226,  -383,
     379,  -383,  -383,  -383,   226,  -383,   203,  -383,   328,  -383,
    -383,  -383,   156,   397,    42,  -383,  -383,  -383,   398,   334,
     332,  -383,  -383,  -383,   200,   311,   339,  -383,   472,   311,
    -383,   413,   348,   407,   359,   311,  -383,  -383,    34,  -383,
      89,  -383,  -383,  -383,  -383,   203,  -383,   362,  -383,   203,
     273,  -383,  -383,  -383,  -383,  -383,   311,  -383,  -383,  -383,
    -383,  -383,  -383,    66,  -383,  -383,   115,  -383,   364,  -383,
     365,   351,  -383,   366,  -383,  -383,   371,  -383,   203,  -383,
     420,   311,  -383,  -383,  -383,   437,   311,   372,  -383,   311,
    -383,   264,   202,   264,   264,  -383,  -383,   223,  -383,  -383,
    -383,   377,   378,  -383,   422,   301,  -383,  -383,  -383,   380,
     137,  -383,   375,   381,  -383,  -383,  -383,   311,  -383,   273,
    -383,   273,  -383,  -383,    35,  -383,   106,  -383,  -383,   118,
    -383,  -383,   383,   311,   311,  -383,  -383,  -383,   309,   387,
     202,   387,   387,  -383,   146,  -383,     0,  -383,  -383,  -383,
    -383,  -383,   273,  -383,   273,  -383,   417,  -383,  -383,  -383,
    -383,  -383,  -383,   377,    84,    39,  -383,  -383,  -383,   417,
     384,  -383,  -383,   417,  -383
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       5,     0,   215,     1,     3,     2,     0,   259,   107,   113,
     114,   215,   215,   137,     0,     0,     0,   215,   215,   259,
     215,     0,   215,     0,   215,     0,     0,     0,   259,    12,
       0,   164,   162,     4,    58,    62,    65,    79,    90,    66,
      67,    68,   108,   109,   110,   112,   111,    69,   123,   124,
      70,    71,    72,    59,   165,   157,   158,   159,   160,   161,
      87,   199,   200,   209,   212,   259,    88,   163,   118,   167,
     166,   169,   168,   304,   303,   233,   236,   239,   244,   248,
     256,     0,   106,   306,   115,   309,   116,   119,   120,   135,
     134,     0,   128,     0,   150,   147,   125,   140,   154,   154,
     155,     0,     0,     0,   215,   187,   188,    45,     0,   215,
      49,     0,    82,   215,   341,   338,   322,     0,     8,   230,
       0,    13,    14,    17,    16,    15,    64,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     215,    85,    83,    73,   215,    92,   215,   207,   210,   214,
     213,   218,   231,   234,   237,   240,   245,   249,   274,     0,
     279,   275,   284,   280,   278,   277,   215,   260,   261,   262,
     215,   215,   258,   257,   264,   268,   276,    92,    92,   215,
     133,   132,     0,   127,   148,   145,     0,   151,   152,   215,
     215,   215,   215,     0,   194,     0,     0,   259,    92,   204,
      48,    47,   215,   215,    47,   340,   215,     0,    24,    21,
     215,     0,     7,    18,   215,     0,    82,   215,    84,    75,
      74,    91,    86,     0,   215,   215,   216,   259,   259,   259,
     241,   242,   259,   259,   259,   254,   251,   250,   252,   253,
     259,   268,   285,    90,     0,   282,   281,   271,     0,     0,
     273,    90,    87,     0,   315,   311,   259,   266,   259,   302,
     215,   307,   121,   138,     0,   129,   126,   144,   131,     0,
       0,   141,     0,   156,   174,     0,   175,   215,     0,   215,
     172,     0,   215,   215,   189,    91,    44,    55,   203,    81,
      57,   215,   215,     0,   327,    10,   325,   215,    40,     0,
      39,     0,    23,    82,   215,     0,     0,     6,    61,    60,
      80,    78,    77,    76,    89,   215,   208,   211,   226,     0,
     228,   221,   222,   223,   224,   225,   219,   220,   259,   232,
     235,   238,   243,   246,   247,   255,   265,   334,    92,   286,
       0,   269,   270,   313,    92,   318,   215,   272,    92,   310,
     316,   263,   215,     0,   215,   267,   305,   308,     0,     0,
      92,   149,   146,   153,   172,   215,     0,   196,   215,   215,
     190,   191,     0,   182,     0,   215,   185,   186,    53,    43,
      52,    42,   329,   330,   321,   215,   326,    92,   320,   215,
      92,    37,    38,    22,    37,    20,   215,     9,   198,   227,
     229,   217,   287,   259,   319,   312,   215,   317,     0,   290,
     294,     0,   293,     0,   139,   130,    91,   142,   215,   170,
     177,   215,   195,   197,   180,     0,   215,     0,   179,   215,
     183,     0,    82,     0,    49,    56,   328,   215,   323,    41,
      27,    30,    35,    19,     0,     0,   314,   288,   289,    92,
     215,   143,     0,     0,   176,   192,   171,   215,   184,    92,
      46,    92,    47,   324,    28,    26,    33,    25,   215,   215,
     291,   296,   299,   215,   215,   181,    54,    51,    55,     0,
      82,     0,    39,    34,   335,   292,   215,   295,   298,   173,
     178,    50,    92,    36,    92,    37,   215,   333,   331,   332,
     300,    29,    32,    30,     0,   336,   202,   201,    31,   215,
       0,   337,   206,   215,   205
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -383,  -383,  -383,   427,  -383,  -383,  -188,  -383,  -383,  -383,
    -383,    17,  -383,  -383,  -383,  -383,   -53,  -383,  -383,  -382,
     -22,  -191,   -45,   -89,  -196,    29,  -383,   -17,  -383,  -253,
       8,  -383,  -383,   248,  -383,  -383,  -383,  -383,  -383,  -198,
    -383,   247,     1,  -183,  -162,  -383,  -383,  -383,  -383,  -383,
    -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,  -383,
    -383,   134,  -383,    50,   195,   204,  -383,  -383,  -383,    -1,
    -383,  -383,  -383,   368,  -383,  -383,  -383,  -383,  -383,   105,
    -383,  -383,   464,  -383,  -383,  -383,   465,  -383,   189,   193,
    -383,  -165,  -383,   -11,  -350,  -383,  -383,  -142,  -383,   263,
    -383,   251,  -383,  -383,  -383,  -383,    -5,   -23,  -383,   268,
    -383,   270,  -383,   274,  -383,  -383,   260,  -383,     3,  -383,
    -383,   -87,  -383,  -383,  -383,  -383,   259,   345,  -383,   331,
     336,  -383,  -383,  -383,    33,    55,  -383,  -383,   -16,   249,
    -383,    -4,  -383,  -383,   104,  -383,  -383,  -383,   481,  -383,
    -383,  -383,    75,     9,    52,  -383,  -383,  -113,  -383
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    29,   211,   212,   293,    30,    31,   122,
     123,    32,   305,   209,   301,   302,   465,   483,   467,   441,
     391,   392,   111,   112,   287,   201,   435,   379,   381,    33,
     194,   126,   215,    35,    36,   218,   311,   141,   142,   204,
     143,    37,    38,   145,   222,   144,    39,    40,    41,    42,
      43,    44,    84,    45,    46,    87,    47,    48,    49,    91,
     266,    92,    93,   267,    95,   268,   360,    96,   185,    97,
     184,    50,    51,   187,    52,    53,    54,    70,    55,   373,
     364,    56,    57,    58,   428,   280,    59,   196,   105,   281,
     370,   195,   368,    60,   505,    61,   506,    62,   147,    63,
     148,    64,    65,   150,   226,   328,    66,    74,   152,    75,
     153,    76,   154,    77,   232,   155,    78,   156,    79,   240,
     157,    80,    81,   172,   173,   174,   257,   175,   244,   176,
     245,   355,   411,   449,   412,   413,   487,   488,    82,    83,
     177,    86,   178,   253,   254,   348,   349,   255,    67,   207,
     295,   387,   296,   497,   498,   340,   499,    68,   115
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    88,    73,   102,   223,   119,   100,   101,   290,   103,
      34,   106,   442,    85,    73,   259,   261,   303,   310,   198,
     114,   200,   306,    69,   367,   274,   118,   276,  -339,    23,
     352,   220,   337,   278,    89,   279,   286,   353,   113,   -91,
     107,   298,   151,  -215,   337,   337,  -117,   124,   354,  -335,
      23,    90,   158,   246,    23,   263,  -122,    23,   496,   -91,
     338,  -335,  -335,   230,   231,    24,    23,  -215,   344,     3,
    -215,    23,    23,   -91,  -301,  -215,  -215,  -215,  -215,  -215,
     431,   479,    23,   107,   160,   161,   162,   163,   164,  -301,
     107,   298,   183,  -193,    23,   107,  -339,  -215,   199,    23,
    -339,  -339,   205,   385,   313,   394,   165,  -215,   390,    28,
      28,   -91,   298,   503,  -297,   423,   166,   376,  -117,   264,
    -215,  -215,   265,   108,  -215,  -215,    23,  -215,  -122,   216,
     108,   299,   388,    85,   170,   433,   171,   213,    28,    28,
     219,   -91,   -91,   249,    23,   -91,   -91,    23,    94,   109,
     110,   337,   481,   335,   247,   120,   509,   110,   300,   512,
     252,   249,   434,   514,   408,   496,    23,   243,   262,   351,
      28,   243,   251,   282,   284,   283,   402,    98,   273,   482,
      85,   158,   404,   233,   234,    23,   407,   275,   250,    99,
    -297,   288,   289,    25,    26,   294,    19,    23,   417,   294,
     420,    22,   291,   104,   424,    24,   -91,   -91,   159,  -297,
     430,  -297,   116,   160,   161,   162,   163,   164,    26,    27,
     418,   372,   314,   180,   181,   438,  -297,   -11,   440,   292,
      23,   443,    23,   372,   460,   165,   333,   334,    24,  -283,
     279,    28,   117,   146,   343,   166,   149,   179,  -136,   357,
     186,   182,    23,    73,   189,   191,   454,   190,   167,   168,
     192,   456,   169,   170,   458,   171,   478,   197,   371,   291,
     107,   202,   106,   480,    28,   480,   224,   206,   203,   208,
     382,   383,   493,   210,    26,    34,   214,   470,   492,   432,
     494,   432,   475,   395,   -91,   339,   292,   476,   217,   477,
     221,   225,   228,   345,   398,   401,   350,   227,   489,   490,
     229,   162,   256,   258,   193,   260,   271,   270,     7,     8,
       9,    10,    11,    12,    13,    14,   484,    15,    16,    17,
     501,   269,   502,   235,   236,   405,   272,   277,   237,   297,
      23,   294,   459,   410,   461,   200,   386,   285,    24,   304,
     238,   239,   307,   309,   507,   -63,   315,   341,   358,     7,
       8,     9,    10,    11,    12,    13,    14,   507,    15,    16,
      17,   507,   342,   346,   436,   347,    34,   263,   439,   361,
     363,    23,   366,   378,    28,   365,   369,   444,   375,    24,
     384,   380,   389,   298,   393,   445,   396,   397,    73,   399,
     400,   403,   406,   409,   414,   415,   416,   452,     4,     5,
       6,   421,     7,     8,     9,    10,    11,    12,    13,    14,
     426,    15,    16,    17,    18,    28,   294,    19,   425,    20,
      21,   429,    22,   427,    23,   447,   437,  -296,   450,   471,
     448,   453,    24,   455,   457,   468,   504,   473,    25,    26,
     508,   464,   466,   474,   469,   486,   513,   121,   410,   510,
     495,   491,   308,   462,   312,   362,   451,   188,   359,   419,
      71,    72,   377,   374,    27,   500,   317,     6,    28,     7,
       8,     9,    10,    11,    12,    13,    14,   316,    15,    16,
      17,    18,   332,   242,    19,   329,    20,    21,   330,    22,
     336,    23,   485,   331,   241,   472,   248,   356,   422,    24,
     446,   125,   463,     0,   511,    25,    26,     0,     6,     0,
       7,     8,     9,    10,    11,    12,    13,    14,     0,    15,
      16,    17,    18,     0,     0,    19,     0,    20,    21,     0,
      22,    27,    23,     0,     0,    28,     0,     0,     0,     0,
      24,   318,     0,     0,     0,     0,    25,    26,   319,     0,
       0,     0,   320,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,    28,     0,   140,   321,
     322,   323,   324,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   326,   327
};

static const yytype_int16 yycheck[] =
{
      11,    12,     7,    19,   146,    28,    17,    18,   204,    20,
       2,    22,   394,    24,    19,   177,   178,   208,   216,   108,
      24,   110,   210,     6,   277,   190,    27,   192,     3,    29,
      70,   144,     5,    26,    60,    28,   198,    77,    13,     3,
       6,     6,    65,     6,     5,     5,     3,    30,    88,    22,
      29,    77,     6,   166,    29,     6,     3,    29,    19,    23,
     243,    22,    22,    66,    67,    37,    29,    30,   251,     0,
      33,    29,    29,     3,    74,    38,    39,    40,    41,    42,
      46,    46,    29,     6,    38,    39,    40,    41,    42,    89,
       6,     6,    93,    72,    29,     6,    71,    60,   109,    29,
      75,    76,   113,    76,   217,   303,    60,    70,   299,    73,
      73,    75,     6,   495,    72,   368,    70,   282,    75,    70,
      83,    84,    73,    46,    87,    88,    29,    90,    75,   140,
      46,    46,   297,   144,    88,    46,    90,   120,    73,    73,
     144,    71,    72,    46,    29,    75,    76,    29,     6,    72,
      73,     5,    46,   240,    89,     5,    72,    73,    73,   509,
     171,    46,    73,   513,   352,    19,    29,   166,   179,   256,
      73,   170,   171,    72,   197,    74,   338,     6,   189,    73,
     191,     6,   344,    83,    84,    29,   348,   191,    91,     6,
      72,   202,   203,    43,    44,   206,    22,    29,   360,   210,
     365,    27,    46,    72,   369,    37,    91,    89,    33,    72,
     375,    74,     6,    38,    39,    40,    41,    42,    44,    69,
      20,    21,   221,    89,    90,   387,    89,    71,   390,    73,
      29,   396,    29,    21,   432,    60,   233,   234,    37,    71,
      28,    73,     6,    19,   249,    70,    30,    13,     6,   260,
      15,    14,    29,   258,    74,    23,   421,    72,    83,    84,
      72,   426,    87,    88,   429,    90,   462,    15,   279,    46,
       6,    72,   283,   464,    73,   466,    31,    70,    76,    70,
     291,   292,   480,    70,    44,   277,    75,   449,   479,   378,
     481,   380,   457,   304,    71,   243,    73,   459,    76,   461,
      74,    32,    81,   251,   315,   328,   254,    80,   473,   474,
      82,    40,    46,    74,     3,    74,     6,    74,     7,     8,
       9,    10,    11,    12,    13,    14,   468,    16,    17,    18,
     492,    77,   494,    68,    69,   346,    74,    35,    73,    72,
      29,   352,   431,   354,   433,   434,   294,    74,    37,    45,
      85,    86,     3,     3,   496,     3,    21,    71,    15,     7,
       8,     9,    10,    11,    12,    13,    14,   509,    16,    17,
      18,   513,    89,    72,   385,    91,   368,     6,   389,     6,
       6,    29,    21,    74,    73,    72,    72,   403,    72,    37,
      71,    74,    72,     6,    71,   406,    72,    71,   403,    23,
      30,    22,    74,     6,     6,    71,    74,   418,     3,     4,
       5,    72,     7,     8,     9,    10,    11,    12,    13,    14,
      72,    16,    17,    18,    19,    73,   437,    22,    15,    24,
      25,    72,    27,    26,    29,    71,    74,    72,    72,   450,
      89,    21,    37,     6,    72,    23,    29,    72,    43,    44,
     503,    74,    74,    72,    74,    72,    72,    30,   469,   504,
     482,   478,   214,   434,   217,   270,   416,    99,   264,   364,
       6,     6,   283,   280,    69,   486,   225,     5,    73,     7,
       8,     9,    10,    11,    12,    13,    14,   224,    16,    17,
      18,    19,   232,   162,    22,   227,    24,    25,   228,    27,
     241,    29,   469,   229,   159,   450,   170,   258,    36,    37,
     406,    30,   437,    -1,   505,    43,    44,    -1,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    -1,    24,    25,    -1,
      27,    69,    29,    -1,    -1,    73,    -1,    -1,    -1,    -1,
      37,    23,    -1,    -1,    -1,    -1,    43,    44,    30,    -1,
      -1,    -1,    34,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    -1,    73,    -1,    72,    61,
      62,    63,    64,    65,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    93,    94,     0,     3,     4,     5,     7,     8,     9,
      10,    11,    12,    13,    14,    16,    17,    18,    19,    22,
      24,    25,    27,    29,    37,    43,    44,    69,    73,    95,
      99,   100,   103,   121,   122,   125,   126,   133,   134,   138,
     139,   140,   141,   142,   143,   145,   146,   148,   149,   150,
     163,   164,   166,   167,   168,   170,   173,   174,   175,   178,
     185,   187,   189,   191,   193,   194,   198,   240,   249,   103,
     169,   174,   178,   198,   199,   201,   203,   205,   208,   210,
     213,   214,   230,   231,   144,   185,   233,   147,   185,    60,
      77,   151,   153,   154,     6,   156,   159,   161,     6,     6,
     185,   185,   230,   185,    72,   180,   185,     6,    46,    72,
      73,   114,   115,    13,   233,   250,     6,     6,   161,   199,
       5,    95,   101,   102,   103,   240,   123,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      72,   129,   130,   132,   137,   135,    19,   190,   192,    30,
     195,   199,   200,   202,   204,   207,   209,   212,     6,    33,
      38,    39,    40,    41,    42,    60,    70,    83,    84,    87,
      88,    90,   215,   216,   217,   219,   221,   232,   234,    13,
     153,   153,    14,   161,   162,   160,    15,   165,   165,    74,
      72,    23,    72,     3,   122,   183,   179,    15,   115,   185,
     115,   117,    72,    76,   131,   185,    70,   241,    70,   105,
      70,    96,    97,   103,    75,   124,   185,    76,   127,   233,
     249,    74,   136,   189,    31,    32,   196,    80,    81,    82,
      66,    67,   206,    83,    84,    68,    69,    73,    85,    86,
     211,   219,   221,   134,   220,   222,   249,    89,   222,    46,
      91,   134,   185,   235,   236,   239,    46,   218,    74,   136,
      74,   136,   185,     6,    70,    73,   152,   155,   157,    77,
      74,     6,    74,   185,   183,   233,   183,    35,    26,    28,
     177,   181,    72,    74,   199,    74,   136,   116,   185,   185,
     116,    46,    73,    98,   185,   242,   244,    72,     6,    46,
      73,   106,   107,   113,    45,   104,    98,     3,   125,     3,
     131,   128,   133,   249,   134,    21,   191,   193,    23,    30,
      34,    61,    62,    63,    64,    65,    78,    79,   197,   201,
     203,   205,   208,   210,   210,   213,   218,     5,   135,   246,
     247,    71,    89,   198,   135,   246,    72,    91,   237,   238,
     246,   213,    70,    77,    88,   223,   231,   185,    15,   157,
     158,     6,   156,     6,   172,    72,    21,   121,   184,    72,
     182,   185,    21,   171,   181,    72,   183,   180,    74,   119,
      74,   120,   185,   185,    71,    76,   246,   243,   183,    72,
     113,   112,   113,    71,   131,   185,    72,    71,   185,    23,
      30,   199,   136,    22,   136,   185,    74,   136,    98,     6,
     185,   224,   226,   227,     6,    71,    74,   136,    20,   171,
     183,    72,    36,   121,   183,    15,    72,    26,   176,    72,
     183,    46,   115,    46,    73,   118,   185,    74,   136,   185,
     136,   111,   111,   183,   230,   185,   236,    71,    89,   225,
      72,   155,   185,    21,   183,     6,   183,    72,   183,   115,
     131,   115,   117,   244,    74,   108,    74,   110,    23,    74,
     136,   185,   227,    72,    72,   183,   136,   136,   116,    46,
     113,    46,    73,   109,   189,   226,    72,   228,   229,   183,
     183,   119,   113,   131,   113,   112,    19,   245,   246,   248,
     185,   136,   136,   111,    29,   186,   188,   189,   108,    72,
     114,   245,   186,    72,   186
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    94,    94,    94,    95,    96,    96,    97,
      98,    98,    99,    99,   100,   101,   101,   101,   102,   103,
     104,   104,   105,   106,   106,   107,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   114,   115,   116,   116,   117,   117,
     118,   118,   118,   119,   119,   119,   120,   120,   121,   121,
     122,   123,   123,   124,   124,   125,   125,   125,   125,   125,
     125,   125,   125,   126,   127,   127,   128,   128,   129,   129,
     130,   131,   131,   132,   132,   132,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   137,   137,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   138,   139,   140,   140,
     140,   140,   140,   141,   142,   143,   144,   144,   145,   146,
     147,   147,   147,   148,   148,   149,   150,   151,   151,   152,
     152,   152,   153,   153,   153,   153,   154,   154,   155,   155,
     156,   156,   157,   158,   158,   159,   160,   160,   161,   162,
     162,   163,   164,   165,   165,   166,   166,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   168,   169,   169,   169,
     170,   171,   171,   172,   172,   173,   173,   174,   174,   175,
     175,   176,   176,   177,   177,   178,   179,   179,   180,   180,
     181,   182,   182,   182,   183,   183,   184,   184,   185,   185,
     185,   186,   186,   187,   187,   188,   188,   189,   190,   190,
     191,   192,   192,   193,   194,   194,   195,   196,   196,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     198,   199,   200,   200,   201,   202,   202,   203,   204,   204,
     205,   206,   206,   207,   207,   208,   209,   209,   209,   210,
     211,   211,   211,   211,   211,   212,   212,   213,   214,   214,
     215,   215,   215,   216,   216,   217,   217,   218,   218,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   220,   220,   220,   221,   221,   222,   222,   223,   223,
     223,   224,   225,   225,   226,   226,   227,   227,   228,   228,
     229,   229,   230,   231,   231,   232,   232,   233,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   241,   241,   242,   243,   243,   244,   244,   244,   244,
     244,   245,   245,   246,   247,   247,   248,   248,   249,   249,
     250,   250
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     2,     0,     4,     1,     0,     3,
       1,     0,     1,     2,     2,     1,     1,     1,     2,     6,
       2,     0,     3,     1,     0,     4,     4,     3,     1,     4,
       0,     4,     3,     0,     2,     0,     4,     0,     1,     0,
       1,     3,     4,     4,     3,     1,     4,     0,     1,     0,
       4,     3,     0,     1,     4,     0,     2,     0,     1,     1,
       4,     3,     0,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     3,     0,
       3,     2,     0,     1,     2,     1,     3,     1,     1,     3,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     0,     1,     2,
       1,     3,     0,     1,     1,     2,     4,     2,     1,     1,
       3,     1,     2,     2,     1,     1,     1,     0,     1,     3,
       1,     3,     3,     3,     0,     2,     3,     0,     2,     3,
       0,     3,     3,     3,     0,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       6,     3,     0,     5,     0,     4,     7,     6,     9,     6,
       6,     3,     0,     3,     4,     5,     3,     0,     1,     3,
       2,     1,     3,     0,     1,     4,     1,     2,     5,     1,
       1,     1,     1,     4,     3,     4,     3,     2,     3,     0,
       2,     3,     0,     2,     2,     0,     2,     3,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     2,     3,     0,     2,     3,     0,     2,     3,     0,
       2,     1,     1,     3,     0,     2,     3,     3,     0,     2,
       1,     1,     1,     1,     1,     3,     0,     2,     2,     0,
       1,     1,     1,     3,     1,     3,     2,     2,     0,     3,
       3,     2,     3,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     3,     3,     3,
       2,     3,     3,     0,     1,     4,     1,     0,     1,     0,
       2,     1,     3,     1,     1,     3,     0,     3,     3,     0,
       2,     1,     3,     2,     3,     0,     1,     2,     2,     3,
       5,     3,     0,     3,     3,     0,     2,     1,     3,     2,
       2,     1,     1,     6,     1,     0,     2,     3,     2,     1,
       2,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* file_input: nstatement ENDMARKER  */
#line 109 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "file input");
    cerr<<"nstatement - Parsing successful\n";
    cerr<<(yyvsp[0].val)<<" yoyoyoyo\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    ast.graphviz((yyval.ptr));
    return 0;
}
#line 1795 "parser.tab.cpp"
    break;

  case 3: /* nstatement: nstatement NEWLINE  */
#line 134 "parser.y"
                               {
    cerr<<"nstatement -> nstatement newline\n";
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1807 "parser.tab.cpp"
    break;

  case 4: /* nstatement: nstatement stmt  */
#line 140 "parser.y"
                    {
    cerr<<"nstatement -> nstatement stmt\n";
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1819 "parser.tab.cpp"
    break;

  case 5: /* nstatement: %empty  */
#line 146 "parser.y"
    {
    cerr << "Null rpodsdsdsfds\n";
    (yyval.ptr) = NULL;
}
#line 1828 "parser.tab.cpp"
    break;

  case 6: /* decorator: '@' dotted_name cond_brack_cond_arglist NEWLINE  */
#line 166 "parser.y"
                                                           {
    (yyval.ptr) = new node("nt", "decorator");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1841 "parser.tab.cpp"
    break;

  case 7: /* cond_brack_cond_arglist: brack_cond_arglist  */
#line 174 "parser.y"
                                            {
    (yyval.ptr) = (yyvsp[0].ptr);    
}
#line 1849 "parser.tab.cpp"
    break;

  case 8: /* cond_brack_cond_arglist: %empty  */
#line 177 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1857 "parser.tab.cpp"
    break;

  case 9: /* brack_cond_arglist: '(' cond_arglist ')'  */
#line 180 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "enclosed argument list");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1869 "parser.tab.cpp"
    break;

  case 10: /* cond_arglist: arglist  */
#line 187 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1877 "parser.tab.cpp"
    break;

  case 11: /* cond_arglist: %empty  */
#line 190 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1885 "parser.tab.cpp"
    break;

  case 12: /* decorators: decorator  */
#line 193 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1893 "parser.tab.cpp"
    break;

  case 13: /* decorators: decorators decorator  */
#line 196 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "decorators");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1904 "parser.tab.cpp"
    break;

  case 14: /* decorated: decorators defob  */
#line 203 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "decorated");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1915 "parser.tab.cpp"
    break;

  case 15: /* defob: classdef  */
#line 209 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1923 "parser.tab.cpp"
    break;

  case 16: /* defob: funcdef  */
#line 212 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);

}
#line 1932 "parser.tab.cpp"
    break;

  case 17: /* defob: async_funcdef  */
#line 216 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);

     }
#line 1941 "parser.tab.cpp"
    break;

  case 18: /* async_funcdef: ASYNC funcdef  */
#line 220 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Async Function Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1952 "parser.tab.cpp"
    break;

  case 19: /* funcdef: DEF NAME parameters cond_arrowtest ':' suite  */
#line 226 "parser.y"
                                                      {
    (yyval.ptr) = new node("nt", "function definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 1968 "parser.tab.cpp"
    break;

  case 20: /* cond_arrowtest: ARROWOP test  */
#line 237 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "condition arrowtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1979 "parser.tab.cpp"
    break;

  case 21: /* cond_arrowtest: %empty  */
#line 243 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1987 "parser.tab.cpp"
    break;

  case 22: /* parameters: '(' cond_typedargslist ')'  */
#line 246 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "parameters");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1999 "parser.tab.cpp"
    break;

  case 23: /* cond_typedargslist: typedargslist  */
#line 253 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2007 "parser.tab.cpp"
    break;

  case 24: /* cond_typedargslist: %empty  */
#line 255 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 2015 "parser.tab.cpp"
    break;

  case 25: /* typedargslist: tfpdef cond_eqtest close_comma_tfpdef_condeqtest cond_comma_or_condstarorstartstar  */
#line 259 "parser.y"
                                                                                                 {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2028 "parser.tab.cpp"
    break;

  case 26: /* typedargslist: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma  */
#line 267 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2041 "parser.tab.cpp"
    break;

  case 27: /* typedargslist: POW tfpdef cond_comma  */
#line 275 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2053 "parser.tab.cpp"
    break;

  case 28: /* conds_comma_startfpdefcondcomma: ','  */
#line 282 "parser.y"
                                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2061 "parser.tab.cpp"
    break;

  case 29: /* conds_comma_startfpdefcondcomma: ',' POW tfpdef cond_comma  */
#line 285 "parser.y"
                                {
        (yyval.ptr) = new node("nt", "condition comma start condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2074 "parser.tab.cpp"
    break;

  case 30: /* conds_comma_startfpdefcondcomma: %empty  */
#line 293 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2082 "parser.tab.cpp"
    break;

  case 31: /* cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma  */
#line 296 "parser.y"
                                                                                                      {
            (yyval.ptr) = new node("nt", "condition star or star star");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2095 "parser.tab.cpp"
    break;

  case 32: /* cond_star_or_startstar: POW tfpdef cond_comma  */
#line 304 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2107 "parser.tab.cpp"
    break;

  case 33: /* cond_star_or_startstar: %empty  */
#line 311 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2115 "parser.tab.cpp"
    break;

  case 34: /* cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar  */
#line 314 "parser.y"
                                                              {
        (yyval.ptr) = new node("nt", "condition comma or condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2126 "parser.tab.cpp"
    break;

  case 35: /* cond_comma_or_condstarorstartstar: %empty  */
#line 320 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2134 "parser.tab.cpp"
    break;

  case 36: /* close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest  */
#line 323 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma condition eqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 2146 "parser.tab.cpp"
    break;

  case 37: /* close_comma_tfpdef_condeqtest: %empty  */
#line 330 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2154 "parser.tab.cpp"
    break;

  case 38: /* cond_tfpdef: tfpdef  */
#line 333 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2162 "parser.tab.cpp"
    break;

  case 39: /* cond_tfpdef: %empty  */
#line 336 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2170 "parser.tab.cpp"
    break;

  case 40: /* tfpdef: NAME  */
#line 339 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2178 "parser.tab.cpp"
    break;

  case 41: /* tfpdef: NAME ':' test  */
#line 342 "parser.y"
                {
    (yyval.ptr) = new node("nt", "name colon test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2190 "parser.tab.cpp"
    break;

  case 42: /* varargslist: vfpdef cond_eqtest close_comma_vfpdef_condeqtest cond_comma_or_condstarorstartstarvf  */
#line 350 "parser.y"
                                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2203 "parser.tab.cpp"
    break;

  case 43: /* varargslist: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma  */
#line 358 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2216 "parser.tab.cpp"
    break;

  case 44: /* varargslist: POW vfpdef cond_comma  */
#line 366 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2228 "parser.tab.cpp"
    break;

  case 45: /* vfpdef: NAME  */
#line 373 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2236 "parser.tab.cpp"
    break;

  case 46: /* close_comma_vfpdef_condeqtest: close_comma_vfpdef_condeqtest ',' vfpdef cond_eqtest  */
#line 376 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma vfpdef condeqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2249 "parser.tab.cpp"
    break;

  case 47: /* close_comma_vfpdef_condeqtest: %empty  */
#line 384 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2257 "parser.tab.cpp"
    break;

  case 48: /* cond_vfpdef: vfpdef  */
#line 387 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2265 "parser.tab.cpp"
    break;

  case 49: /* cond_vfpdef: %empty  */
#line 390 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2273 "parser.tab.cpp"
    break;

  case 50: /* cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma  */
#line 394 "parser.y"
        {
            (yyval.ptr) = new node("nt", "condition star or start star vf");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2286 "parser.tab.cpp"
    break;

  case 51: /* cond_star_or_startstar_vf: POW vfpdef cond_comma  */
#line 402 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or start star vf");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2298 "parser.tab.cpp"
    break;

  case 52: /* cond_star_or_startstar_vf: %empty  */
#line 409 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2306 "parser.tab.cpp"
    break;

  case 53: /* conds_comma_starvfpdefcondcomma: ','  */
#line 412 "parser.y"
                                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2314 "parser.tab.cpp"
    break;

  case 54: /* conds_comma_starvfpdefcondcomma: ',' POW vfpdef cond_comma  */
#line 415 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "condition comma star vfpdef condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2327 "parser.tab.cpp"
    break;

  case 55: /* conds_comma_starvfpdefcondcomma: %empty  */
#line 423 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2335 "parser.tab.cpp"
    break;

  case 56: /* cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf  */
#line 426 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "comma or star star");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2346 "parser.tab.cpp"
    break;

  case 57: /* cond_comma_or_condstarorstartstarvf: %empty  */
#line 432 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2354 "parser.tab.cpp"
    break;

  case 58: /* stmt: simple_stmt  */
#line 436 "parser.y"
                  {
    cerr<<"stmt reached\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2363 "parser.tab.cpp"
    break;

  case 59: /* stmt: compound_stmt  */
#line 439 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2371 "parser.tab.cpp"
    break;

  case 60: /* simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE  */
#line 442 "parser.y"
                                                                 {
        cerr << "simple statement\n";
        (yyval.ptr) = new node("nt", "simple statement");
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2384 "parser.tab.cpp"
    break;

  case 61: /* close_small_stmt: close_small_stmt ';' small_stmt  */
#line 450 "parser.y"
                                                  {
        (yyval.ptr) = new node("nt", "close small statement");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2396 "parser.tab.cpp"
    break;

  case 62: /* close_small_stmt: %empty  */
#line 457 "parser.y"
          {
            (yyval.ptr) = NULL;
        }
#line 2404 "parser.tab.cpp"
    break;

  case 63: /* cond_semi_colon: ';'  */
#line 460 "parser.y"
                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2412 "parser.tab.cpp"
    break;

  case 64: /* cond_semi_colon: %empty  */
#line 463 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2420 "parser.tab.cpp"
    break;

  case 65: /* small_stmt: expr_stmt  */
#line 466 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2428 "parser.tab.cpp"
    break;

  case 66: /* small_stmt: del_stmt  */
#line 468 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2436 "parser.tab.cpp"
    break;

  case 67: /* small_stmt: pass_stmt  */
#line 471 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2444 "parser.tab.cpp"
    break;

  case 68: /* small_stmt: flow_stmt  */
#line 474 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2452 "parser.tab.cpp"
    break;

  case 69: /* small_stmt: import_stmt  */
#line 477 "parser.y"
              {
    cerr<<" import statement \n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2461 "parser.tab.cpp"
    break;

  case 70: /* small_stmt: global_stmt  */
#line 481 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2469 "parser.tab.cpp"
    break;

  case 71: /* small_stmt: nonlocal_stmt  */
#line 484 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2477 "parser.tab.cpp"
    break;

  case 72: /* small_stmt: assert_stmt  */
#line 487 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
  }
#line 2485 "parser.tab.cpp"
    break;

  case 73: /* expr_stmt: testlist_star_expr anna_or_auga_or_closeyield  */
#line 490 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "expression statement");
    cerr << "here expr_stmt\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2497 "parser.tab.cpp"
    break;

  case 74: /* yield_or_test: yield_expr  */
#line 497 "parser.y"
                          {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2505 "parser.tab.cpp"
    break;

  case 75: /* yield_or_test: testlist  */
#line 501 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2513 "parser.tab.cpp"
    break;

  case 76: /* yield_or_test_star: yield_expr  */
#line 504 "parser.y"
                               {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2521 "parser.tab.cpp"
    break;

  case 77: /* yield_or_test_star: testlist_star_expr  */
#line 508 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2529 "parser.tab.cpp"
    break;

  case 78: /* close_yield_or_test_star: close_yield_or_test_star '=' yield_or_test_star  */
#line 511 "parser.y"
                                                                          {
                    (yyval.ptr) = new node("nt", "close yield or test star");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
            }
#line 2541 "parser.tab.cpp"
    break;

  case 79: /* close_yield_or_test_star: %empty  */
#line 518 "parser.y"
                          {
                            (yyval.ptr) = NULL;
                        }
#line 2549 "parser.tab.cpp"
    break;

  case 80: /* annassign: ':' test cond_eqtest  */
#line 521 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Annotated Assignment");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2561 "parser.tab.cpp"
    break;

  case 81: /* cond_eqtest: '=' test  */
#line 528 "parser.y"
                      {
        (yyval.ptr) = new node("nt", "condition equal test");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2572 "parser.tab.cpp"
    break;

  case 82: /* cond_eqtest: %empty  */
#line 534 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2580 "parser.tab.cpp"
    break;

  case 83: /* anna_or_auga_or_closeyield: annassign  */
#line 537 "parser.y"
                                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2588 "parser.tab.cpp"
    break;

  case 84: /* anna_or_auga_or_closeyield: augassign yield_or_test  */
#line 539 "parser.y"
                            {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 2596 "parser.tab.cpp"
    break;

  case 85: /* anna_or_auga_or_closeyield: close_yield_or_test_star  */
#line 541 "parser.y"
                             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2604 "parser.tab.cpp"
    break;

  case 86: /* testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 545 "parser.y"
                                                                          {
    (yyval.ptr) = new node("nt", "testlist star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2616 "parser.tab.cpp"
    break;

  case 87: /* test_or_starexp: test  */
#line 552 "parser.y"
                      {
    cerr<<"yo1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2625 "parser.tab.cpp"
    break;

  case 88: /* test_or_starexp: star_expr  */
#line 556 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2633 "parser.tab.cpp"
    break;

  case 89: /* close_commatest_or_starexp: close_commatest_or_starexp ',' test_or_starexp  */
#line 559 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "close commatest or star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2645 "parser.tab.cpp"
    break;

  case 90: /* close_commatest_or_starexp: %empty  */
#line 566 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2653 "parser.tab.cpp"
    break;

  case 91: /* cond_comma: ','  */
#line 569 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2661 "parser.tab.cpp"
    break;

  case 92: /* cond_comma: %empty  */
#line 572 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2669 "parser.tab.cpp"
    break;

  case 93: /* augassign: ADDASSIGN  */
#line 575 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2677 "parser.tab.cpp"
    break;

  case 94: /* augassign: SUBASSIGN  */
#line 578 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2685 "parser.tab.cpp"
    break;

  case 95: /* augassign: MULASSIGN  */
#line 581 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2693 "parser.tab.cpp"
    break;

  case 96: /* augassign: ATASSIGN  */
#line 584 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2701 "parser.tab.cpp"
    break;

  case 97: /* augassign: DIVASSIGN  */
#line 587 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2709 "parser.tab.cpp"
    break;

  case 98: /* augassign: MODASSIGN  */
#line 590 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2717 "parser.tab.cpp"
    break;

  case 99: /* augassign: ANDASSIGN  */
#line 593 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2725 "parser.tab.cpp"
    break;

  case 100: /* augassign: ORASSIGN  */
#line 596 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2733 "parser.tab.cpp"
    break;

  case 101: /* augassign: XORASSIGN  */
#line 599 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2741 "parser.tab.cpp"
    break;

  case 102: /* augassign: LSASSIGN  */
#line 602 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2749 "parser.tab.cpp"
    break;

  case 103: /* augassign: RSASSIGN  */
#line 605 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2757 "parser.tab.cpp"
    break;

  case 104: /* augassign: POWASSIGN  */
#line 608 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2765 "parser.tab.cpp"
    break;

  case 105: /* augassign: IDIVASSIGN  */
#line 611 "parser.y"
                         {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2773 "parser.tab.cpp"
    break;

  case 106: /* del_stmt: DEL exprlist  */
#line 615 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Delete Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2784 "parser.tab.cpp"
    break;

  case 107: /* pass_stmt: PASS  */
#line 621 "parser.y"
               {
    (yyval.ptr) = new node("nt", "Pass Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2794 "parser.tab.cpp"
    break;

  case 108: /* flow_stmt: break_stmt  */
#line 626 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2802 "parser.tab.cpp"
    break;

  case 109: /* flow_stmt: continue_stmt  */
#line 629 "parser.y"
                        {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2810 "parser.tab.cpp"
    break;

  case 110: /* flow_stmt: return_stmt  */
#line 632 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2818 "parser.tab.cpp"
    break;

  case 111: /* flow_stmt: raise_stmt  */
#line 635 "parser.y"
                     {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2826 "parser.tab.cpp"
    break;

  case 112: /* flow_stmt: yield_stmt  */
#line 638 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2834 "parser.tab.cpp"
    break;

  case 113: /* break_stmt: BREAK  */
#line 642 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Break Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2844 "parser.tab.cpp"
    break;

  case 114: /* continue_stmt: CONTINUE  */
#line 648 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Continue Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2854 "parser.tab.cpp"
    break;

  case 115: /* return_stmt: RETURN cond_testlist  */
#line 654 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "Return Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2865 "parser.tab.cpp"
    break;

  case 116: /* cond_testlist: testlist  */
#line 661 "parser.y"
                       {
      (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2873 "parser.tab.cpp"
    break;

  case 117: /* cond_testlist: %empty  */
#line 663 "parser.y"
    {
      (yyval.ptr) = nullptr;
}
#line 2881 "parser.tab.cpp"
    break;

  case 118: /* yield_stmt: yield_expr  */
#line 666 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2889 "parser.tab.cpp"
    break;

  case 119: /* raise_stmt: RAISE cond_from_test  */
#line 669 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Raise Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2900 "parser.tab.cpp"
    break;

  case 120: /* cond_from_test: test  */
#line 675 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2908 "parser.tab.cpp"
    break;

  case 121: /* cond_from_test: test FROM test  */
#line 677 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "condition from test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2920 "parser.tab.cpp"
    break;

  case 122: /* cond_from_test: %empty  */
#line 683 "parser.y"
   {    
    (yyval.ptr) = nullptr;
}
#line 2928 "parser.tab.cpp"
    break;

  case 123: /* import_stmt: import_name  */
#line 687 "parser.y"
                         {
    cerr << "Import name\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2937 "parser.tab.cpp"
    break;

  case 124: /* import_stmt: import_from  */
#line 691 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2945 "parser.tab.cpp"
    break;

  case 125: /* import_name: IMPORT dotted_as_names  */
#line 694 "parser.y"
                                   {
    cerr<<"import\n";
    (yyval.ptr) = new node("nt", "Import Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2957 "parser.tab.cpp"
    break;

  case 126: /* import_from: FROM closeplusdotorellipsisname_or_plusdotellip IMPORT star_or_import_parentheses_or_import  */
#line 702 "parser.y"
                                                                                                         {
                    (yyval.ptr) = new node("nt", "Import from");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
            }
#line 2970 "parser.tab.cpp"
    break;

  case 127: /* closeplusdotorellipsisname_or_plusdotellip: close_dot_or_ellipsis dotted_name  */
#line 711 "parser.y"
                                                                             {
    (yyval.ptr) = new node("nt", "close plus dot or ellipsis name or plus dot ellip");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2981 "parser.tab.cpp"
    break;

  case 128: /* closeplusdotorellipsisname_or_plusdotellip: plus_dot_or_ellipsis  */
#line 716 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2989 "parser.tab.cpp"
    break;

  case 129: /* star_or_import_parentheses_or_import: '*'  */
#line 720 "parser.y"
                                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2997 "parser.tab.cpp"
    break;

  case 130: /* star_or_import_parentheses_or_import: '(' import_as_names ')'  */
#line 722 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "star or import parentheses or import");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3009 "parser.tab.cpp"
    break;

  case 131: /* star_or_import_parentheses_or_import: import_as_names  */
#line 728 "parser.y"
                   {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3017 "parser.tab.cpp"
    break;

  case 132: /* plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis  */
#line 732 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3028 "parser.tab.cpp"
    break;

  case 133: /* plus_dot_or_ellipsis: ELLIPSIS plus_dot_or_ellipsis  */
#line 737 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3039 "parser.tab.cpp"
    break;

  case 134: /* plus_dot_or_ellipsis: '.'  */
#line 742 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3047 "parser.tab.cpp"
    break;

  case 135: /* plus_dot_or_ellipsis: ELLIPSIS  */
#line 744 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3055 "parser.tab.cpp"
    break;

  case 136: /* close_dot_or_ellipsis: plus_dot_or_ellipsis  */
#line 748 "parser.y"
                                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3063 "parser.tab.cpp"
    break;

  case 137: /* close_dot_or_ellipsis: %empty  */
#line 750 "parser.y"
    {
    (yyval.ptr) = nullptr;
}
#line 3071 "parser.tab.cpp"
    break;

  case 138: /* import_as_name: NAME  */
#line 754 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3079 "parser.tab.cpp"
    break;

  case 139: /* import_as_name: NAME AS NAME  */
#line 756 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3091 "parser.tab.cpp"
    break;

  case 140: /* dotted_as_name: dotted_name  */
#line 764 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3099 "parser.tab.cpp"
    break;

  case 141: /* dotted_as_name: dotted_name AS NAME  */
#line 766 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3111 "parser.tab.cpp"
    break;

  case 142: /* import_as_names: import_as_name close_commaimportasname cond_comma  */
#line 774 "parser.y"
                                                                  {
    (yyval.ptr) = new node("nt", "Import As Names");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr)); 
}
#line 3123 "parser.tab.cpp"
    break;

  case 143: /* close_commaimportasname: close_commaimportasname ',' import_as_name  */
#line 782 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3135 "parser.tab.cpp"
    break;

  case 144: /* close_commaimportasname: %empty  */
#line 788 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3143 "parser.tab.cpp"
    break;

  case 145: /* dotted_as_names: dotted_as_name close_commadottedasname  */
#line 792 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Dotted As Names");
    cerr<<"dotted_as_name reached\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3155 "parser.tab.cpp"
    break;

  case 146: /* close_commadottedasname: close_commadottedasname ',' dotted_as_name  */
#line 800 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3167 "parser.tab.cpp"
    break;

  case 147: /* close_commadottedasname: %empty  */
#line 806 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3175 "parser.tab.cpp"
    break;

  case 148: /* dotted_name: NAME close_dotted_name  */
#line 810 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Dotted Name");
    cerr << "Dotted name reached\n";
    cerr << (yyvsp[-1].val) << '\n';
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3188 "parser.tab.cpp"
    break;

  case 149: /* close_dotted_name: close_dotted_name '.' NAME  */
#line 819 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Close Dotted Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3200 "parser.tab.cpp"
    break;

  case 150: /* close_dotted_name: %empty  */
#line 825 "parser.y"
    {
    cerr << "Null production\n";
    (yyval.ptr) = NULL;
}
#line 3209 "parser.tab.cpp"
    break;

  case 151: /* global_stmt: GLOBAL NAME close_comma_name  */
#line 830 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "Global Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3221 "parser.tab.cpp"
    break;

  case 152: /* nonlocal_stmt: NONLOCAL NAME close_comma_name  */
#line 837 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Nonlocal Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 3232 "parser.tab.cpp"
    break;

  case 153: /* close_comma_name: close_comma_name ',' NAME  */
#line 843 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Comma Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3244 "parser.tab.cpp"
    break;

  case 154: /* close_comma_name: %empty  */
#line 849 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3252 "parser.tab.cpp"
    break;

  case 155: /* assert_stmt: ASSERT test  */
#line 853 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3263 "parser.tab.cpp"
    break;

  case 156: /* assert_stmt: ASSERT test ',' test  */
#line 858 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3276 "parser.tab.cpp"
    break;

  case 157: /* compound_stmt: if_stmt  */
#line 867 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3284 "parser.tab.cpp"
    break;

  case 158: /* compound_stmt: while_stmt  */
#line 869 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3292 "parser.tab.cpp"
    break;

  case 159: /* compound_stmt: for_stmt  */
#line 871 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3300 "parser.tab.cpp"
    break;

  case 160: /* compound_stmt: try_stmt  */
#line 873 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3308 "parser.tab.cpp"
    break;

  case 161: /* compound_stmt: with_stmt  */
#line 875 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3316 "parser.tab.cpp"
    break;

  case 162: /* compound_stmt: funcdef  */
#line 877 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3324 "parser.tab.cpp"
    break;

  case 163: /* compound_stmt: classdef  */
#line 879 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3332 "parser.tab.cpp"
    break;

  case 164: /* compound_stmt: decorated  */
#line 881 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3340 "parser.tab.cpp"
    break;

  case 165: /* compound_stmt: async_stmt  */
#line 883 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3348 "parser.tab.cpp"
    break;

  case 166: /* async_stmt: ASYNC funcdef_or_withstmt_or_forstmt  */
#line 887 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Async Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3359 "parser.tab.cpp"
    break;

  case 167: /* funcdef_or_withstmt_or_forstmt: funcdef  */
#line 894 "parser.y"
                                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3367 "parser.tab.cpp"
    break;

  case 168: /* funcdef_or_withstmt_or_forstmt: with_stmt  */
#line 896 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3375 "parser.tab.cpp"
    break;

  case 169: /* funcdef_or_withstmt_or_forstmt: for_stmt  */
#line 898 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3383 "parser.tab.cpp"
    break;

  case 170: /* if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite  */
#line 902 "parser.y"
                                                                    {
    cerr<<"if stmt reached\n";
    (yyval.ptr) = new node("nt", "If Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3399 "parser.tab.cpp"
    break;

  case 171: /* cond_else_colon_suite: ELSE ':' suite  */
#line 914 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Else Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3411 "parser.tab.cpp"
    break;

  case 172: /* cond_else_colon_suite: %empty  */
#line 920 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3419 "parser.tab.cpp"
    break;

  case 173: /* close_eliftestsuite: close_eliftestsuite ELIF test ':' suite  */
#line 924 "parser.y"
                                                            {
    (yyval.ptr) = new node("nt", "Close Elif Test Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3433 "parser.tab.cpp"
    break;

  case 174: /* close_eliftestsuite: %empty  */
#line 932 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3441 "parser.tab.cpp"
    break;

  case 175: /* while_stmt: WHILE test ':' suite  */
#line 936 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "While Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3454 "parser.tab.cpp"
    break;

  case 176: /* while_stmt: WHILE test ':' suite ELSE ':' suite  */
#line 943 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "While Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-6].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3470 "parser.tab.cpp"
    break;

  case 177: /* for_stmt: FOR exprlist IN testlist ':' suite  */
#line 954 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "For Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3485 "parser.tab.cpp"
    break;

  case 178: /* for_stmt: FOR exprlist IN testlist ':' suite ELSE ':' suite  */
#line 963 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "For Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-8].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-7].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-6].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3503 "parser.tab.cpp"
    break;

  case 179: /* try_stmt: TRY ':' suite plus_except_colsuite cond_else_colon_suite cond_finallycolsuite  */
#line 976 "parser.y"
                                                                                       {
    (yyval.ptr) = new node("nt", "Try Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3518 "parser.tab.cpp"
    break;

  case 180: /* try_stmt: TRY ':' suite FINALLY ':' suite  */
#line 985 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Try Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3533 "parser.tab.cpp"
    break;

  case 181: /* cond_finallycolsuite: FINALLY ':' suite  */
#line 996 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Finally Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3545 "parser.tab.cpp"
    break;

  case 182: /* cond_finallycolsuite: %empty  */
#line 1002 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3553 "parser.tab.cpp"
    break;

  case 183: /* plus_except_colsuite: except_clause ':' suite  */
#line 1006 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3565 "parser.tab.cpp"
    break;

  case 184: /* plus_except_colsuite: plus_except_colsuite except_clause ':' suite  */
#line 1012 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3578 "parser.tab.cpp"
    break;

  case 185: /* with_stmt: WITH with_item close_commawithitem ':' suite  */
#line 1021 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "With Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3592 "parser.tab.cpp"
    break;

  case 186: /* close_commawithitem: close_commawithitem ',' with_item  */
#line 1031 "parser.y"
                                                      {
    (yyval.ptr) = new node("nt", "Close Comma With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3604 "parser.tab.cpp"
    break;

  case 187: /* close_commawithitem: %empty  */
#line 1037 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3612 "parser.tab.cpp"
    break;

  case 188: /* with_item: test  */
#line 1041 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3620 "parser.tab.cpp"
    break;

  case 189: /* with_item: test AS expr  */
#line 1043 "parser.y"
                {
    (yyval.ptr) = new node("nt", "With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3632 "parser.tab.cpp"
    break;

  case 190: /* except_clause: EXCEPT cond_testasname  */
#line 1052 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Except Clause");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3643 "parser.tab.cpp"
    break;

  case 191: /* cond_testasname: test  */
#line 1059 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3651 "parser.tab.cpp"
    break;

  case 192: /* cond_testasname: test AS NAME  */
#line 1061 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Condition Test As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3663 "parser.tab.cpp"
    break;

  case 193: /* cond_testasname: %empty  */
#line 1067 "parser.y"
   {
    (yyval.ptr) = NULL;
}
#line 3671 "parser.tab.cpp"
    break;

  case 194: /* suite: simple_stmt  */
#line 1071 "parser.y"
                  {
    cerr<<" yo yo yo 1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3680 "parser.tab.cpp"
    break;

  case 195: /* suite: NEWLINE INDENT plus_stmt DEDENT  */
#line 1074 "parser.y"
                                   {
    cerr<<" yo yo yo 2\n";
    (yyval.ptr) = new node("nt", "Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3694 "parser.tab.cpp"
    break;

  case 196: /* plus_stmt: stmt  */
#line 1083 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3702 "parser.tab.cpp"
    break;

  case 197: /* plus_stmt: plus_stmt stmt  */
#line 1085 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Plus Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3713 "parser.tab.cpp"
    break;

  case 198: /* test: or_test IF or_test ELSE test  */
#line 1091 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3727 "parser.tab.cpp"
    break;

  case 199: /* test: lambdef  */
#line 1099 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3735 "parser.tab.cpp"
    break;

  case 200: /* test: or_test  */
#line 1101 "parser.y"
           {
    cerr << "debug statement " << 1 <<"\n";
    cerr<<"test->or_test\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3745 "parser.tab.cpp"
    break;

  case 201: /* test_nocond: or_test  */
#line 1106 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3753 "parser.tab.cpp"
    break;

  case 202: /* test_nocond: lambdef_nocond  */
#line 1108 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3761 "parser.tab.cpp"
    break;

  case 203: /* lambdef: LAMBDA varargslist ':' test  */
#line 1112 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3774 "parser.tab.cpp"
    break;

  case 204: /* lambdef: LAMBDA ':' test  */
#line 1119 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3786 "parser.tab.cpp"
    break;

  case 205: /* lambdef_nocond: LAMBDA varargslist ':' test_nocond  */
#line 1127 "parser.y"
                                                  {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3799 "parser.tab.cpp"
    break;

  case 206: /* lambdef_nocond: LAMBDA ':' test_nocond  */
#line 1134 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3811 "parser.tab.cpp"
    break;

  case 207: /* or_test: and_test close_or_and_test  */
#line 1142 "parser.y"
                                   {
    cerr << "debug statement " << 2 <<" "<<((yyvsp[-1].ptr))->name<<"\n";
    (yyval.ptr) = new node("nt", "Or Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3823 "parser.tab.cpp"
    break;

  case 208: /* close_or_and_test: close_or_and_test OR and_test  */
#line 1150 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Close Or And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3835 "parser.tab.cpp"
    break;

  case 209: /* close_or_and_test: %empty  */
#line 1156 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3843 "parser.tab.cpp"
    break;

  case 210: /* and_test: not_test close_and_not_test  */
#line 1160 "parser.y"
                                     {
    cerr << "debug statement " << 3 <<"\n";
    (yyval.ptr) = new node("nt", "And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3855 "parser.tab.cpp"
    break;

  case 211: /* close_and_not_test: close_and_not_test AND not_test  */
#line 1168 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close And Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3867 "parser.tab.cpp"
    break;

  case 212: /* close_and_not_test: %empty  */
#line 1174 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3875 "parser.tab.cpp"
    break;

  case 213: /* not_test: close_not comparison  */
#line 1178 "parser.y"
                              {
    cerr << "debug statement " << 4 << "\n";
    (yyval.ptr) = new node("nt", "Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3887 "parser.tab.cpp"
    break;

  case 214: /* close_not: close_not NOT  */
#line 1186 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Close Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3898 "parser.tab.cpp"
    break;

  case 215: /* close_not: %empty  */
#line 1191 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3906 "parser.tab.cpp"
    break;

  case 216: /* comparison: expr close_compopexpr  */
#line 1195 "parser.y"
                                 {
    cerr << "debug statement " << 5 <<"\n";
    (yyval.ptr) = new node("nt", "Comparison");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3918 "parser.tab.cpp"
    break;

  case 217: /* close_compopexpr: close_compopexpr comp_op expr  */
#line 1203 "parser.y"
                                               {
    (yyval.ptr) = new node("nt", "Close Comparison Operator Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3930 "parser.tab.cpp"
    break;

  case 218: /* close_compopexpr: %empty  */
#line 1209 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3938 "parser.tab.cpp"
    break;

  case 219: /* comp_op: '<'  */
#line 1217 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3946 "parser.tab.cpp"
    break;

  case 220: /* comp_op: '>'  */
#line 1219 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3954 "parser.tab.cpp"
    break;

  case 221: /* comp_op: EQUAL  */
#line 1221 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3962 "parser.tab.cpp"
    break;

  case 222: /* comp_op: GEQ  */
#line 1223 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3970 "parser.tab.cpp"
    break;

  case 223: /* comp_op: LEQ  */
#line 1225 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3978 "parser.tab.cpp"
    break;

  case 224: /* comp_op: LTORGT  */
#line 1227 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3986 "parser.tab.cpp"
    break;

  case 225: /* comp_op: NEQ  */
#line 1229 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3994 "parser.tab.cpp"
    break;

  case 226: /* comp_op: IN  */
#line 1231 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4002 "parser.tab.cpp"
    break;

  case 227: /* comp_op: NOT IN  */
#line 1233 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Not in");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4013 "parser.tab.cpp"
    break;

  case 228: /* comp_op: IS  */
#line 1238 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4021 "parser.tab.cpp"
    break;

  case 229: /* comp_op: IS NOT  */
#line 1240 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Is Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4032 "parser.tab.cpp"
    break;

  case 230: /* star_expr: '*' expr  */
#line 1247 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4043 "parser.tab.cpp"
    break;

  case 231: /* expr: xor_expr close_orxorexp  */
#line 1254 "parser.y"
                             {
    cerr << "debug statement " << 6 <<"\n";
    (yyval.ptr) = new node("nt", "Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4055 "parser.tab.cpp"
    break;

  case 232: /* close_orxorexp: close_orxorexp '|' xor_expr  */
#line 1261 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Or Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4067 "parser.tab.cpp"
    break;

  case 233: /* close_orxorexp: %empty  */
#line 1267 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4075 "parser.tab.cpp"
    break;

  case 234: /* xor_expr: and_expr close_xor_and_expr  */
#line 1271 "parser.y"
                                     {
    cerr << "debug statement " << 7 <<"\n";
    (yyval.ptr) = new node("nt", "Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4087 "parser.tab.cpp"
    break;

  case 235: /* close_xor_and_expr: close_xor_and_expr '^' and_expr  */
#line 1279 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close Xor And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4099 "parser.tab.cpp"
    break;

  case 236: /* close_xor_and_expr: %empty  */
#line 1285 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4107 "parser.tab.cpp"
    break;

  case 237: /* and_expr: shift_expr close_andshiftexpr  */
#line 1289 "parser.y"
                                       {
    cerr << "debug statement " << 8 <<"\n";
    (yyval.ptr) = new node("nt", "And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4119 "parser.tab.cpp"
    break;

  case 238: /* close_andshiftexpr: close_andshiftexpr '&' shift_expr  */
#line 1297 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "Close And Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4131 "parser.tab.cpp"
    break;

  case 239: /* close_andshiftexpr: %empty  */
#line 1303 "parser.y"
     {
(yyval.ptr) = NULL;
}
#line 4139 "parser.tab.cpp"
    break;

  case 240: /* shift_expr: arith_expr close_lrs_arith_expr  */
#line 1307 "parser.y"
                                           {
    cerr << "debug statement " << 9 <<"\n";
    (yyval.ptr) = new node("nt", "Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4151 "parser.tab.cpp"
    break;

  case 241: /* left_right_shift: LEFTSHIFT  */
#line 1315 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4159 "parser.tab.cpp"
    break;

  case 242: /* left_right_shift: RIGHTSHIFT  */
#line 1317 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4167 "parser.tab.cpp"
    break;

  case 243: /* close_lrs_arith_expr: close_lrs_arith_expr left_right_shift arith_expr  */
#line 1321 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Leftright shift Arithmatic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4179 "parser.tab.cpp"
    break;

  case 244: /* close_lrs_arith_expr: %empty  */
#line 1327 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4187 "parser.tab.cpp"
    break;

  case 245: /* arith_expr: term close_plusminusterm  */
#line 1331 "parser.y"
                                    {
    cerr << "debug statement " << 10 <<"\n";
    (yyval.ptr) = new node("nt", "Arithmatic Expression");
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4198 "parser.tab.cpp"
    break;

  case 246: /* close_plusminusterm: close_plusminusterm '+' term  */
#line 1338 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4209 "parser.tab.cpp"
    break;

  case 247: /* close_plusminusterm: close_plusminusterm '-' term  */
#line 1343 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4220 "parser.tab.cpp"
    break;

  case 248: /* close_plusminusterm: %empty  */
#line 1348 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4228 "parser.tab.cpp"
    break;

  case 249: /* term: factor close_muldivopsfactor  */
#line 1352 "parser.y"
                                  {
    cerr << "debug statement " << 11 <<"\n";
    (yyval.ptr) = new node("nt", "Term");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4240 "parser.tab.cpp"
    break;

  case 250: /* group_muldivremops: '*'  */
#line 1360 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4248 "parser.tab.cpp"
    break;

  case 251: /* group_muldivremops: '@'  */
#line 1362 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4256 "parser.tab.cpp"
    break;

  case 252: /* group_muldivremops: '/'  */
#line 1364 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4264 "parser.tab.cpp"
    break;

  case 253: /* group_muldivremops: '%'  */
#line 1366 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4272 "parser.tab.cpp"
    break;

  case 254: /* group_muldivremops: IDIV  */
#line 1368 "parser.y"
        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4280 "parser.tab.cpp"
    break;

  case 255: /* close_muldivopsfactor: close_muldivopsfactor group_muldivremops factor  */
#line 1372 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Mul Div Ops Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4292 "parser.tab.cpp"
    break;

  case 256: /* close_muldivopsfactor: %empty  */
#line 1378 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4300 "parser.tab.cpp"
    break;

  case 257: /* factor: close_plus_or_minus_or_not power  */
#line 1382 "parser.y"
                                        {
    cerr << "debug statement " << 12 <<"\n";
    (yyval.ptr) = new node("nt", "Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4312 "parser.tab.cpp"
    break;

  case 258: /* close_plus_or_minus_or_not: close_plus_or_minus_or_not plus_or_minus_or_not  */
#line 1390 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "Close Plus Or Minus Or Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4323 "parser.tab.cpp"
    break;

  case 259: /* close_plus_or_minus_or_not: %empty  */
#line 1395 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4331 "parser.tab.cpp"
    break;

  case 260: /* plus_or_minus_or_not: '+'  */
#line 1400 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4339 "parser.tab.cpp"
    break;

  case 261: /* plus_or_minus_or_not: '-'  */
#line 1402 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4347 "parser.tab.cpp"
    break;

  case 262: /* plus_or_minus_or_not: '~'  */
#line 1404 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4355 "parser.tab.cpp"
    break;

  case 263: /* power: atom_expr POW factor  */
#line 1408 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Power");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4367 "parser.tab.cpp"
    break;

  case 264: /* power: atom_expr  */
#line 1414 "parser.y"
             {
    cerr << "debug statement " << 13 <<"\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4376 "parser.tab.cpp"
    break;

  case 265: /* atom_expr: AWAIT atom close_trailer  */
#line 1419 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4388 "parser.tab.cpp"
    break;

  case 266: /* atom_expr: atom close_trailer  */
#line 1425 "parser.y"
                      {
    cerr << "debug statement " << 14 <<"\n";
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4400 "parser.tab.cpp"
    break;

  case 267: /* close_trailer: close_trailer trailer  */
#line 1433 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Close Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4411 "parser.tab.cpp"
    break;

  case 268: /* close_trailer: %empty  */
#line 1438 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4419 "parser.tab.cpp"
    break;

  case 269: /* atom: '(' cond_yield_or_testlist ')'  */
#line 1442 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4431 "parser.tab.cpp"
    break;

  case 270: /* atom: '[' testlist_comp ']'  */
#line 1448 "parser.y"
                        {
    cerr<<"err1\n";
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4444 "parser.tab.cpp"
    break;

  case 271: /* atom: '[' ']'  */
#line 1455 "parser.y"
           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4455 "parser.tab.cpp"
    break;

  case 272: /* atom: '{' dictorsetmaker '}'  */
#line 1460 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4467 "parser.tab.cpp"
    break;

  case 273: /* atom: '{' '}'  */
#line 1466 "parser.y"
            {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4478 "parser.tab.cpp"
    break;

  case 274: /* atom: NAME  */
#line 1471 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4486 "parser.tab.cpp"
    break;

  case 275: /* atom: NUMBER  */
#line 1473 "parser.y"
           {
    cerr << "debug statement " << 15 <<"\n";
    cerr << "number reached " << (yyvsp[0].val) << '\n';
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4496 "parser.tab.cpp"
    break;

  case 276: /* atom: multi_str  */
#line 1477 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4504 "parser.tab.cpp"
    break;

  case 277: /* atom: ELLIPSIS  */
#line 1479 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4512 "parser.tab.cpp"
    break;

  case 278: /* atom: NONE  */
#line 1481 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4520 "parser.tab.cpp"
    break;

  case 279: /* atom: TRUE  */
#line 1483 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4528 "parser.tab.cpp"
    break;

  case 280: /* atom: FALSE  */
#line 1485 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4536 "parser.tab.cpp"
    break;

  case 281: /* cond_yield_or_testlist: yield_expr  */
#line 1489 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4544 "parser.tab.cpp"
    break;

  case 282: /* cond_yield_or_testlist: testlist_comp  */
#line 1491 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4552 "parser.tab.cpp"
    break;

  case 283: /* cond_yield_or_testlist: %empty  */
#line 1493 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4560 "parser.tab.cpp"
    break;

  case 284: /* multi_str: STRING  */
#line 1497 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4568 "parser.tab.cpp"
    break;

  case 285: /* multi_str: STRING multi_str  */
#line 1499 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "Multiple String");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4579 "parser.tab.cpp"
    break;

  case 286: /* testlist_comp: test_or_starexp comp_for  */
#line 1506 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4590 "parser.tab.cpp"
    break;

  case 287: /* testlist_comp: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 1511 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4602 "parser.tab.cpp"
    break;

  case 288: /* trailer: '(' cond_arglist ')'  */
#line 1519 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4614 "parser.tab.cpp"
    break;

  case 289: /* trailer: '[' subscriptlist ']'  */
#line 1525 "parser.y"
                          {
    cerr<<"err3\n";
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4627 "parser.tab.cpp"
    break;

  case 290: /* trailer: '.' NAME  */
#line 1532 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 4639 "parser.tab.cpp"
    break;

  case 291: /* subscriptlist: subscript close_commasubscript cond_comma  */
#line 1540 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Subscript List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4651 "parser.tab.cpp"
    break;

  case 292: /* close_commasubscript: close_commasubscript ',' subscript  */
#line 1548 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Close Comma Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4663 "parser.tab.cpp"
    break;

  case 293: /* close_commasubscript: %empty  */
#line 1554 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4671 "parser.tab.cpp"
    break;

  case 294: /* subscript: test  */
#line 1558 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4679 "parser.tab.cpp"
    break;

  case 295: /* subscript: cond_test ':' cond_test cond_sliceop  */
#line 1560 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4692 "parser.tab.cpp"
    break;

  case 296: /* cond_test: test  */
#line 1569 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4700 "parser.tab.cpp"
    break;

  case 297: /* cond_test: %empty  */
#line 1571 "parser.y"
    {
    (yyval.ptr) = NULL;

}
#line 4709 "parser.tab.cpp"
    break;

  case 298: /* cond_sliceop: sliceop  */
#line 1576 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4717 "parser.tab.cpp"
    break;

  case 299: /* cond_sliceop: %empty  */
#line 1578 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4725 "parser.tab.cpp"
    break;

  case 300: /* sliceop: ':' test  */
#line 1582 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Slice Operation");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4736 "parser.tab.cpp"
    break;

  case 301: /* sliceop: ':'  */
#line 1587 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4744 "parser.tab.cpp"
    break;

  case 302: /* exprlist: expr_or_star_expr close_comma_expr_or_star_expr cond_comma  */
#line 1591 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "Expression List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4756 "parser.tab.cpp"
    break;

  case 303: /* expr_or_star_expr: expr  */
#line 1599 "parser.y"
                        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4764 "parser.tab.cpp"
    break;

  case 304: /* expr_or_star_expr: star_expr  */
#line 1601 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4772 "parser.tab.cpp"
    break;

  case 305: /* close_comma_expr_or_star_expr: close_comma_expr_or_star_expr ',' expr_or_star_expr  */
#line 1605 "parser.y"
                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Expression Or Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4784 "parser.tab.cpp"
    break;

  case 306: /* close_comma_expr_or_star_expr: %empty  */
#line 1611 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4792 "parser.tab.cpp"
    break;

  case 307: /* testlist: test close_comma_test cond_comma  */
#line 1615 "parser.y"
                                          {
    (yyval.ptr) = new node("nt", "Test List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4804 "parser.tab.cpp"
    break;

  case 308: /* close_comma_test: close_comma_test ',' test  */
#line 1623 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "Close Comma Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4816 "parser.tab.cpp"
    break;

  case 309: /* close_comma_test: %empty  */
#line 1629 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4824 "parser.tab.cpp"
    break;

  case 310: /* dictorsetmaker: testcoltest_or_starrexpr compfor_or_close_commatestcoltestorstarexpr_condcomma  */
#line 1635 "parser.y"
                                                                                                {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4835 "parser.tab.cpp"
    break;

  case 311: /* dictorsetmaker: some_non_terminal  */
#line 1640 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4843 "parser.tab.cpp"
    break;

  case 312: /* testcoltest_or_starrexpr: test ':' test  */
#line 1644 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4855 "parser.tab.cpp"
    break;

  case 313: /* testcoltest_or_starrexpr: POW star_expr  */
#line 1650 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 4863 "parser.tab.cpp"
    break;

  case 314: /* close_commatestcoltestorstarrexpr: close_commatestcoltestorstarrexpr ',' testcoltest_or_starrexpr  */
#line 1655 "parser.y"
                                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4875 "parser.tab.cpp"
    break;

  case 315: /* close_commatestcoltestorstarrexpr: %empty  */
#line 1661 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4883 "parser.tab.cpp"
    break;

  case 316: /* compfor_or_close_commatestcoltestorstarexpr_condcomma: comp_for  */
#line 1665 "parser.y"
                                                                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4891 "parser.tab.cpp"
    break;

  case 317: /* compfor_or_close_commatestcoltestorstarexpr_condcomma: close_commatestcoltestorstarrexpr cond_comma  */
#line 1667 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4902 "parser.tab.cpp"
    break;

  case 318: /* some_non_terminal: test_or_starexp comp_for  */
#line 1674 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4913 "parser.tab.cpp"
    break;

  case 319: /* some_non_terminal: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 1679 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4925 "parser.tab.cpp"
    break;

  case 320: /* classdef: CLASS NAME cond_parentheses_arglist ':' suite  */
#line 1687 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Class Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4939 "parser.tab.cpp"
    break;

  case 321: /* cond_parentheses_arglist: '(' cond_arglist ')'  */
#line 1697 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "Condition Parentheses Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4951 "parser.tab.cpp"
    break;

  case 322: /* cond_parentheses_arglist: %empty  */
#line 1703 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4959 "parser.tab.cpp"
    break;

  case 323: /* arglist: argument close_comma_argument cond_comma  */
#line 1707 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4971 "parser.tab.cpp"
    break;

  case 324: /* close_comma_argument: close_comma_argument ',' argument  */
#line 1715 "parser.y"
                                                        {
        (yyval.ptr) = new node("nt", "Close Comma Argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 4983 "parser.tab.cpp"
    break;

  case 325: /* close_comma_argument: %empty  */
#line 1721 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 4991 "parser.tab.cpp"
    break;

  case 326: /* argument: test comp_for  */
#line 1734 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5002 "parser.tab.cpp"
    break;

  case 327: /* argument: test  */
#line 1740 "parser.y"
         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5010 "parser.tab.cpp"
    break;

  case 328: /* argument: test '=' test  */
#line 1743 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr)); 
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5022 "parser.tab.cpp"
    break;

  case 329: /* argument: POW test  */
#line 1750 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5033 "parser.tab.cpp"
    break;

  case 330: /* argument: '*' test  */
#line 1756 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5044 "parser.tab.cpp"
    break;

  case 331: /* comp_iter: comp_for  */
#line 1763 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);    
    }
#line 5052 "parser.tab.cpp"
    break;

  case 332: /* comp_iter: comp_if  */
#line 1765 "parser.y"
                {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5060 "parser.tab.cpp"
    break;

  case 333: /* comp_for: cond_async FOR exprlist IN or_test comp_iter  */
#line 1768 "parser.y"
                                                       {
        (yyval.ptr) = new node("nt", "comp for");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5075 "parser.tab.cpp"
    break;

  case 334: /* cond_async: ASYNC  */
#line 1778 "parser.y"
                  {  
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5083 "parser.tab.cpp"
    break;

  case 335: /* cond_async: %empty  */
#line 1780 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5091 "parser.tab.cpp"
    break;

  case 336: /* comp_if: IF test_nocond  */
#line 1785 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5102 "parser.tab.cpp"
    break;

  case 337: /* comp_if: IF test_nocond comp_iter  */
#line 1790 "parser.y"
                                 {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5114 "parser.tab.cpp"
    break;

  case 338: /* yield_expr: YIELD yield_arg  */
#line 1803 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "Yield Expression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5125 "parser.tab.cpp"
    break;

  case 339: /* yield_expr: YIELD  */
#line 1809 "parser.y"
            {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5133 "parser.tab.cpp"
    break;

  case 340: /* yield_arg: FROM test  */
#line 1813 "parser.y"
                     {
        (yyval.ptr) = new node("nt", "Yield Arguments");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5144 "parser.tab.cpp"
    break;

  case 341: /* yield_arg: testlist  */
#line 1819 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5152 "parser.tab.cpp"
    break;


#line 5156 "parser.tab.cpp"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 1823 "parser.y"



int main(int argc, char *argv[]){
    /* yydebug = 1  */
    if(argc > 1){

    }
    else{
        cerr << "No Input file specified.\nParsing Terminated\n";
        return -1;
    }
    yyin = fopen(argv[1], "r");
    if(yyin == NULL){
        cerr << "Failed to open input file.\n Terminated\n";
        return -1;
    }
    indents.push(0);
    if(!yyparse()) cerr << "Parsing successful\n";
    return 0;
}
