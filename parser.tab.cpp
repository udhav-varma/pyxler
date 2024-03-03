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
#line 32 "parser.y"

    #include "node.hpp"
    AST ast;
    #define PARSER

#line 74 "parser.tab.cpp"



/* First part of user prologue.  */
#line 11 "parser.y"

    extern int yylex();
    extern int yylineno;
    extern int yydebug;
    void yyerror(char * s){
    printf("Error! Line Number %d, message: %s\n", yylineno, s);
    }
    void yyerror(string s){
    printf("Error! Line Number %d, message: %s\n", yylineno, s.c_str());
    }
    extern stack<int> indents;
    #define YYDEBUG 1

#line 93 "parser.tab.cpp"

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
#define YYLAST   591

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  341
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  518

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
       0,   108,   108,   133,   139,   145,   165,   173,   176,   179,
     186,   189,   192,   195,   202,   208,   211,   215,   219,   225,
     236,   242,   245,   252,   254,   258,   266,   274,   281,   284,
     292,   295,   303,   310,   313,   319,   322,   329,   332,   335,
     338,   341,   349,   357,   365,   372,   375,   383,   386,   389,
     392,   401,   408,   411,   414,   422,   425,   431,   435,   438,
     441,   449,   456,   459,   462,   465,   467,   470,   473,   476,
     480,   483,   486,   489,   496,   500,   503,   507,   510,   517,
     520,   527,   533,   536,   538,   540,   544,   551,   555,   558,
     565,   568,   571,   574,   577,   580,   583,   586,   589,   592,
     595,   598,   601,   604,   607,   610,   614,   620,   625,   628,
     631,   634,   637,   641,   647,   653,   660,   662,   665,   668,
     674,   676,   682,   686,   690,   693,   701,   710,   715,   719,
     721,   727,   731,   736,   741,   743,   747,   749,   753,   755,
     763,   765,   773,   781,   787,   791,   799,   805,   809,   818,
     824,   829,   836,   842,   848,   852,   857,   866,   868,   870,
     872,   874,   876,   878,   880,   882,   886,   893,   895,   897,
     901,   913,   919,   923,   931,   935,   942,   953,   962,   975,
     984,   995,  1001,  1005,  1011,  1020,  1030,  1036,  1040,  1042,
    1051,  1058,  1060,  1066,  1070,  1073,  1082,  1084,  1090,  1098,
    1100,  1105,  1107,  1111,  1118,  1126,  1133,  1141,  1149,  1155,
    1159,  1167,  1173,  1177,  1185,  1190,  1194,  1202,  1208,  1216,
    1218,  1220,  1222,  1224,  1226,  1228,  1230,  1232,  1237,  1239,
    1246,  1253,  1260,  1266,  1270,  1278,  1284,  1288,  1296,  1302,
    1306,  1314,  1316,  1320,  1326,  1330,  1337,  1342,  1348,  1352,
    1360,  1362,  1364,  1366,  1368,  1372,  1378,  1382,  1390,  1395,
    1400,  1402,  1404,  1408,  1414,  1419,  1425,  1433,  1438,  1442,
    1448,  1454,  1462,  1468,  1473,  1475,  1479,  1481,  1483,  1485,
    1487,  1491,  1493,  1495,  1499,  1501,  1508,  1513,  1521,  1527,
    1533,  1541,  1549,  1555,  1559,  1561,  1570,  1572,  1577,  1579,
    1583,  1588,  1592,  1600,  1602,  1606,  1612,  1616,  1624,  1630,
    1636,  1641,  1645,  1651,  1656,  1662,  1666,  1668,  1675,  1680,
    1688,  1698,  1704,  1708,  1716,  1722,  1735,  1741,  1744,  1751,
    1757,  1764,  1766,  1769,  1779,  1781,  1786,  1791,  1804,  1810,
    1814,  1820
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

#define YYPACT_NINF (-480)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-340)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -480,    59,   407,  -480,  -480,  -480,    12,   -38,  -480,  -480,
    -480,    29,    42,   -17,    34,    63,   165,   119,   119,   -38,
     119,    78,   119,    81,    80,   170,   200,    34,  -480,  -480,
     154,  -480,  -480,  -480,  -480,  -480,  -480,   516,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,   206,  -480,  -480,   143,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,    35,  -480,  -480,  -480,  -480,  -480,  -480,   227,   -17,
     -17,   213,   244,    34,  -480,  -480,  -480,   245,  -480,  -480,
     189,   203,   256,   220,   204,  -480,   284,  -480,   301,   119,
     301,   240,   238,   119,  -480,  -480,   251,   257,   258,  -480,
     275,  -480,  -480,  -480,  -480,  -480,   255,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
     119,   261,  -480,  -480,   108,   259,  -480,   307,   300,  -480,
    -480,  -480,   260,   271,   272,    25,   187,   249,  -480,    40,
    -480,  -480,   313,  -480,  -480,  -480,   217,  -480,  -480,  -480,
     156,   157,  -480,  -480,   309,  -480,  -480,   282,   285,   119,
    -480,  -480,    79,  -480,   281,   287,   354,   288,   288,   119,
     204,   119,   204,   328,  -480,    10,    68,  -480,   292,  -480,
    -480,  -480,   119,   119,  -480,  -480,    15,   295,    90,   323,
      15,   366,  -480,  -480,   446,   368,   238,   214,  -480,  -480,
    -480,    24,  -480,   351,  -480,  -480,   286,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,   142,   302,  -480,  -480,   290,   289,   -38,
    -480,   142,   304,   291,   142,  -480,  -480,   225,    28,  -480,
      86,  -480,  -480,   369,   375,  -480,  -480,  -480,  -480,   377,
      34,  -480,   379,  -480,  -480,   314,   370,   518,   315,    95,
     144,   317,   204,   119,  -480,  -480,  -480,   316,  -480,  -480,
     318,   119,   119,   322,    50,  -480,  -480,   204,   324,   388,
     388,   327,  -480,   238,   119,   329,   331,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,   119,  -480,  -480,  -480,   372,
     373,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,   225,  -480,   259,  -480,
     378,  -480,   232,  -480,  -480,   259,  -480,   119,  -480,   330,
    -480,  -480,  -480,    15,   399,   115,  -480,  -480,  -480,   400,
     336,   334,  -480,  -480,  -480,   253,   204,   341,  -480,   477,
     204,  -480,   412,   350,   404,   361,   204,  -480,  -480,    44,
    -480,   135,  -480,  -480,  -480,  -480,   119,  -480,   363,  -480,
     119,   292,  -480,  -480,  -480,  -480,  -480,   204,  -480,  -480,
    -480,  -480,  -480,  -480,   -38,   344,  -480,  -480,   137,  -480,
     367,  -480,   371,   352,  -480,   374,  -480,  -480,   375,  -480,
     119,  -480,   418,   204,  -480,  -480,  -480,   434,   204,   376,
    -480,   204,  -480,   301,   238,   301,   301,  -480,  -480,   230,
    -480,  -480,  -480,   391,   392,  -480,   422,  -480,   304,  -480,
    -480,  -480,   393,   105,  -480,   380,   396,  -480,  -480,  -480,
     204,  -480,   292,  -480,   292,  -480,  -480,   218,  -480,   163,
    -480,  -480,   167,  -480,  -480,   397,   204,   204,  -480,  -480,
    -480,   316,   388,   238,   388,   388,  -480,   233,  -480,   145,
    -480,  -480,  -480,  -480,  -480,   292,  -480,   292,  -480,   441,
    -480,  -480,  -480,  -480,  -480,  -480,   391,   129,   278,  -480,
    -480,  -480,   441,   401,  -480,  -480,   441,  -480
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
     259,   268,   285,    90,     0,   282,   281,     0,     0,     0,
     273,    90,    87,     0,   315,   311,   259,   266,   259,   302,
     215,   307,   121,   138,     0,   129,   126,   144,   131,     0,
       0,   141,     0,   156,   174,     0,   175,   215,     0,   215,
     172,     0,   215,   215,   189,    91,    44,    55,   203,    81,
      57,   215,   215,     0,   327,    10,   325,   215,    40,     0,
      39,     0,    23,    82,   215,     0,     0,     6,    61,    60,
      80,    78,    77,    76,    89,   215,   208,   211,   226,     0,
     228,   221,   222,   223,   224,   225,   219,   220,   259,   232,
     235,   238,   243,   246,   247,   255,   265,   334,    92,   286,
       0,   269,   215,   270,   313,    92,   318,   215,   272,    92,
     310,   316,   263,   215,     0,   215,   267,   305,   308,     0,
       0,    92,   149,   146,   153,   172,   215,     0,   196,   215,
     215,   190,   191,     0,   182,     0,   215,   185,   186,    53,
      43,    52,    42,   329,   330,   321,   215,   326,    92,   320,
     215,    92,    37,    38,    22,    37,    20,   215,     9,   198,
     227,   229,   217,   287,   259,     0,   319,   312,   215,   317,
       0,   290,   294,     0,   293,     0,   139,   130,    91,   142,
     215,   170,   177,   215,   195,   197,   180,     0,   215,     0,
     179,   215,   183,     0,    82,     0,    49,    56,   328,   215,
     323,    41,    27,    30,    35,    19,     0,   271,     0,   314,
     288,   289,    92,   215,   143,     0,     0,   176,   192,   171,
     215,   184,    92,    46,    92,    47,   324,    28,    26,    33,
      25,   215,   215,   291,   296,   299,   215,   215,   181,    54,
      51,    55,     0,    82,     0,    39,    34,   335,   292,   215,
     295,   298,   173,   178,    50,    92,    36,    92,    37,   215,
     333,   331,   332,   300,    29,    32,    30,     0,   336,   202,
     201,    31,   215,     0,   337,   206,   215,   205
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -480,  -480,  -480,   417,  -480,  -480,  -183,  -480,  -480,  -480,
    -480,    19,  -480,  -480,  -480,  -480,   -35,  -480,  -480,  -366,
      -8,  -200,   -33,   -90,  -199,    36,  -480,    -2,  -480,  -249,
       8,  -480,  -480,   267,  -480,  -480,  -480,  -480,  -480,  -197,
    -480,   280,  -154,  -105,  -156,  -480,  -480,  -480,  -480,  -480,
    -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,  -480,
    -480,   234,  -480,    74,   228,   236,  -480,  -480,  -480,    20,
    -480,  -480,  -480,   406,  -480,  -480,  -480,  -480,  -480,   138,
    -480,  -480,   501,  -480,  -480,  -480,   502,  -480,   226,   231,
    -480,  -166,  -480,   -11,  -479,  -480,  -480,  -142,  -480,   293,
    -480,   297,  -480,  -480,  -480,  -480,    -5,   -13,  -480,   283,
    -480,   296,  -480,   310,  -480,  -480,   306,  -480,    92,  -480,
    -480,   -14,  -480,  -480,  -480,  -480,   274,   353,  -480,   356,
     346,  -480,  -480,  -480,    61,    88,  -480,  -480,   -16,   294,
    -480,    -1,  -480,   202,   140,  -480,  -480,  -480,   519,  -480,
    -480,  -480,   112,    45,     4,  -480,  -480,   -96,  -480
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     1,     2,    29,   211,   212,   293,    30,    31,   122,
     123,    32,   305,   209,   301,   302,   468,   486,   470,   443,
     392,   393,   111,   112,   287,   201,   437,   380,   382,    33,
     194,   126,   215,    35,    36,   218,   311,   141,   142,   204,
     143,    37,    38,   145,   222,   144,    39,    40,    41,    42,
      43,    44,    84,    45,    46,    87,    47,    48,    49,    91,
     266,    92,    93,   267,    95,   268,   361,    96,   185,    97,
     184,    50,    51,   187,    52,    53,    54,    70,    55,   374,
     365,    56,    57,    58,   430,   280,    59,   196,   105,   281,
     371,   195,   369,    60,   508,    61,   509,    62,   147,    63,
     148,    64,    65,   150,   226,   328,    66,    74,   152,    75,
     153,    76,   154,    77,   232,   155,    78,   156,    79,   240,
     157,    80,    81,   172,   173,   174,   257,   175,   244,   176,
     245,   356,   413,   452,   414,   415,   490,   491,    82,    83,
     177,    86,   178,   253,   254,   349,   350,   255,    67,   207,
     295,   388,   296,   500,   501,   340,   502,    68,   115
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      85,    88,    73,   102,   223,   290,   100,   101,   303,   103,
      34,   106,   243,    85,    73,   119,   243,   251,   198,   310,
     200,   259,   261,   114,   274,    69,   276,   306,   368,   444,
    -215,   -91,  -117,   515,    19,    28,   278,   517,   279,    22,
      94,   158,   286,    89,    23,  -122,   158,   118,   220,   124,
     107,   -91,   151,    23,  -215,   337,    26,  -215,    23,     3,
      90,   291,  -215,  -215,  -215,  -215,  -215,   314,   159,    98,
     246,    23,  -335,   160,   161,   162,   163,   164,   160,   161,
     162,   163,   164,  -339,  -215,   263,   -11,   107,   292,   -91,
     433,   230,   231,   113,  -215,   165,   298,    28,   199,   391,
     165,    28,   205,   -91,  -117,   166,   395,  -215,  -215,    23,
     166,  -215,  -215,   183,  -215,    23,   377,  -122,   167,   168,
     425,   313,   169,   170,    23,   171,   386,   108,   170,   216,
     171,   389,   506,    85,    23,   107,   299,    23,   338,   213,
     282,   107,   283,   219,    23,    24,   345,   337,    23,   264,
     104,  -339,   265,   109,   110,  -339,  -339,   -91,   -91,   120,
     252,   -91,   -91,   300,  -335,   373,    23,  -193,   262,   298,
     410,    99,   279,   149,    23,   108,   116,  -297,   273,  -297,
      85,   435,   403,   249,   284,    23,    23,  -297,   251,   406,
     275,   288,   289,   409,  -297,   294,    23,    25,    26,   294,
     422,   512,   110,   249,   426,   419,   117,   193,   436,   484,
     432,     7,     8,     9,    10,    11,    12,    13,    14,  -301,
      15,    16,    17,    27,   298,   146,   335,   182,   -91,    28,
      28,   445,   440,    23,  -301,   442,   485,   463,   337,  -297,
     179,    24,   352,    23,   344,   247,    23,   339,   250,   358,
    -136,    24,   499,    73,    24,   346,   -91,   457,   351,    23,
     186,    23,   459,   189,   482,   461,   481,   483,   372,   483,
     233,   234,   106,   420,   373,   190,   291,    28,   249,   191,
     383,   384,   495,   337,   497,    34,   496,    28,  -283,   434,
      28,   434,   192,   396,   478,   353,   473,   499,   387,   197,
    -335,   -91,   354,   292,   399,    28,   479,   107,   480,   318,
     492,   493,   202,   355,   203,   402,   319,   235,   236,    26,
     320,   206,   237,   180,   181,   333,   334,   208,   210,   487,
     214,   252,   225,   221,   238,   239,   407,   217,   224,   504,
     227,   505,   294,   462,   412,   464,   200,   321,   322,   323,
     324,   325,   228,   162,   229,   256,   258,   510,   269,   260,
     271,   270,   272,   277,   326,   327,   285,   297,   304,   307,
     510,   309,   315,   341,   510,   438,   347,    34,   343,   441,
     342,   263,   348,   362,   359,   364,   366,   370,   446,   376,
     379,   367,   381,   385,   298,   400,   390,   448,   394,    73,
     404,   397,   398,   401,   408,   411,   416,   417,   418,   455,
       4,     5,     6,   423,     7,     8,     9,    10,    11,    12,
      13,    14,   428,    15,    16,    17,    18,   427,   294,    19,
     429,    20,    21,   431,    22,   447,    23,   439,   450,   456,
     458,   451,   474,  -296,    24,   471,   453,   121,   460,   -63,
      25,    26,   476,     7,     8,     9,    10,    11,    12,    13,
      14,   412,    15,    16,    17,   467,   469,   472,   477,   489,
     507,   511,   465,   516,   513,    23,    27,   498,   503,   494,
      28,   308,     6,    24,     7,     8,     9,    10,    11,    12,
      13,    14,   454,    15,    16,    17,    18,   312,   363,    19,
     360,    20,    21,   421,    22,   188,    23,    71,    72,   378,
     329,   375,   241,   424,    24,   336,   248,   316,   242,    28,
      25,    26,   317,     6,   330,     7,     8,     9,    10,    11,
      12,    13,    14,   488,    15,    16,    17,    18,   332,   331,
      19,   475,    20,    21,   405,    22,    27,    23,   449,   125,
      28,   466,   357,   514,     0,    24,     0,     0,     0,     0,
       0,    25,    26,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    27,   140,     0,
       0,    28
};

static const yytype_int16 yycheck[] =
{
      11,    12,     7,    19,   146,   204,    17,    18,   208,    20,
       2,    22,   166,    24,    19,    28,   170,   171,   108,   216,
     110,   177,   178,    24,   190,     6,   192,   210,   277,   395,
       6,     3,     3,   512,    22,    73,    26,   516,    28,    27,
       6,     6,   198,    60,    29,     3,     6,    27,   144,    30,
       6,    23,    65,    29,    30,     5,    44,    33,    29,     0,
      77,    46,    38,    39,    40,    41,    42,   221,    33,     6,
     166,    29,    22,    38,    39,    40,    41,    42,    38,    39,
      40,    41,    42,     3,    60,     6,    71,     6,    73,     3,
      46,    66,    67,    13,    70,    60,     6,    73,   109,   299,
      60,    73,   113,    75,    75,    70,   303,    83,    84,    29,
      70,    87,    88,    93,    90,    29,   282,    75,    83,    84,
     369,   217,    87,    88,    29,    90,    76,    46,    88,   140,
      90,   297,   498,   144,    29,     6,    46,    29,   243,   120,
      72,     6,    74,   144,    29,    37,   251,     5,    29,    70,
      72,    71,    73,    72,    73,    75,    76,    71,    72,     5,
     171,    75,    76,    73,    22,    21,    29,    72,   179,     6,
     353,     6,    28,    30,    29,    46,     6,    72,   189,    74,
     191,    46,   338,    46,   197,    29,    29,    72,   342,   345,
     191,   202,   203,   349,    89,   206,    29,    43,    44,   210,
     366,    72,    73,    46,   370,   361,     6,     3,    73,    46,
     376,     7,     8,     9,    10,    11,    12,    13,    14,    74,
      16,    17,    18,    69,     6,    19,   240,    14,    91,    73,
      73,   397,   388,    29,    89,   391,    73,   434,     5,    72,
      13,    37,   256,    29,   249,    89,    29,   243,    91,   260,
       6,    37,    19,   258,    37,   251,    89,   423,   254,    29,
      15,    29,   428,    74,    46,   431,   465,   467,   279,   469,
      83,    84,   283,    20,    21,    72,    46,    73,    46,    23,
     291,   292,   482,     5,   484,   277,   483,    73,    71,   379,
      73,   381,    72,   304,   460,    70,   452,    19,   294,    15,
      22,    71,    77,    73,   315,    73,   462,     6,   464,    23,
     476,   477,    72,    88,    76,   328,    30,    68,    69,    44,
      34,    70,    73,    89,    90,   233,   234,    70,    70,   471,
      75,   342,    32,    74,    85,    86,   347,    76,    31,   495,
      80,   497,   353,   433,   355,   435,   436,    61,    62,    63,
      64,    65,    81,    40,    82,    46,    74,   499,    77,    74,
       6,    74,    74,    35,    78,    79,    74,    72,    45,     3,
     512,     3,    21,    71,   516,   386,    72,   369,    89,   390,
      90,     6,    91,     6,    15,     6,    72,    72,   404,    72,
      74,    21,    74,    71,     6,    23,    72,   408,    71,   404,
      22,    72,    71,    30,    74,     6,     6,    71,    74,   420,
       3,     4,     5,    72,     7,     8,     9,    10,    11,    12,
      13,    14,    72,    16,    17,    18,    19,    15,   439,    22,
      26,    24,    25,    72,    27,    91,    29,    74,    71,    21,
       6,    89,   453,    72,    37,    23,    72,    30,    72,     3,
      43,    44,    72,     7,     8,     9,    10,    11,    12,    13,
      14,   472,    16,    17,    18,    74,    74,    74,    72,    72,
      29,   506,   436,    72,   507,    29,    69,   485,   489,   481,
      73,   214,     5,    37,     7,     8,     9,    10,    11,    12,
      13,    14,   418,    16,    17,    18,    19,   217,   270,    22,
     264,    24,    25,   365,    27,    99,    29,     6,     6,   283,
     227,   280,   159,    36,    37,   241,   170,   224,   162,    73,
      43,    44,   225,     5,   228,     7,     8,     9,    10,    11,
      12,    13,    14,   472,    16,    17,    18,    19,   232,   229,
      22,   453,    24,    25,   342,    27,    69,    29,   408,    30,
      73,   439,   258,   508,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    43,    44,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    72,    -1,
      -1,    73
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
     247,    71,    90,    89,   198,   135,   246,    72,    91,   237,
     238,   246,   213,    70,    77,    88,   223,   231,   185,    15,
     157,   158,     6,   156,     6,   172,    72,    21,   121,   184,
      72,   182,   185,    21,   171,   181,    72,   183,   180,    74,
     119,    74,   120,   185,   185,    71,    76,   246,   243,   183,
      72,   113,   112,   113,    71,   131,   185,    72,    71,   185,
      23,    30,   199,   136,    22,   235,   136,   185,    74,   136,
      98,     6,   185,   224,   226,   227,     6,    71,    74,   136,
      20,   171,   183,    72,    36,   121,   183,    15,    72,    26,
     176,    72,   183,    46,   115,    46,    73,   118,   185,    74,
     136,   185,   136,   111,   111,   183,   230,    91,   185,   236,
      71,    89,   225,    72,   155,   185,    21,   183,     6,   183,
      72,   183,   115,   131,   115,   117,   244,    74,   108,    74,
     110,    23,    74,   136,   185,   227,    72,    72,   183,   136,
     136,   116,    46,   113,    46,    73,   109,   189,   226,    72,
     228,   229,   183,   183,   119,   113,   131,   113,   112,    19,
     245,   246,   248,   185,   136,   136,   111,    29,   186,   188,
     189,   108,    72,   114,   245,   186,    72,   186
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
       3,     5,     3,     2,     1,     1,     1,     1,     1,     1,
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
#line 108 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "file_input");
    cerr<<"nstatement - Parsing successful\n";
    cerr<<(yyvsp[0].val)<<" yoyoyoyo\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    ast.graphviz((yyval.ptr));
    return 0;
}
#line 1792 "parser.tab.cpp"
    break;

  case 3: /* nstatement: nstatement NEWLINE  */
#line 133 "parser.y"
                               {
    cerr<<"nstatement -> nstatement newline\n";
    (yyval.ptr) = new node("nt", "nstatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1804 "parser.tab.cpp"
    break;

  case 4: /* nstatement: nstatement stmt  */
#line 139 "parser.y"
                    {
    cerr<<"nstatement -> nstatement stmt\n";
    (yyval.ptr) = new node("nt", "nstatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1816 "parser.tab.cpp"
    break;

  case 5: /* nstatement: %empty  */
#line 145 "parser.y"
    {
    cerr << "Null rpodsdsdsfds\n";
    (yyval.ptr) = NULL;
}
#line 1825 "parser.tab.cpp"
    break;

  case 6: /* decorator: '@' dotted_name cond_brack_cond_arglist NEWLINE  */
#line 165 "parser.y"
                                                           {
    (yyval.ptr) = new node("nt", "decorator");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1838 "parser.tab.cpp"
    break;

  case 7: /* cond_brack_cond_arglist: brack_cond_arglist  */
#line 173 "parser.y"
                                            {
    (yyval.ptr) = (yyvsp[0].ptr);    
}
#line 1846 "parser.tab.cpp"
    break;

  case 8: /* cond_brack_cond_arglist: %empty  */
#line 176 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1854 "parser.tab.cpp"
    break;

  case 9: /* brack_cond_arglist: '(' cond_arglist ')'  */
#line 179 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "enclosed arg list");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1866 "parser.tab.cpp"
    break;

  case 10: /* cond_arglist: arglist  */
#line 186 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1874 "parser.tab.cpp"
    break;

  case 11: /* cond_arglist: %empty  */
#line 189 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1882 "parser.tab.cpp"
    break;

  case 12: /* decorators: decorator  */
#line 192 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1890 "parser.tab.cpp"
    break;

  case 13: /* decorators: decorators decorator  */
#line 195 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "decorators");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1901 "parser.tab.cpp"
    break;

  case 14: /* decorated: decorators defob  */
#line 202 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "decorated");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1912 "parser.tab.cpp"
    break;

  case 15: /* defob: classdef  */
#line 208 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1920 "parser.tab.cpp"
    break;

  case 16: /* defob: funcdef  */
#line 211 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);

}
#line 1929 "parser.tab.cpp"
    break;

  case 17: /* defob: async_funcdef  */
#line 215 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);

     }
#line 1938 "parser.tab.cpp"
    break;

  case 18: /* async_funcdef: ASYNC funcdef  */
#line 219 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Async Function Def");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1949 "parser.tab.cpp"
    break;

  case 19: /* funcdef: DEF NAME parameters cond_arrowtest ':' suite  */
#line 225 "parser.y"
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
#line 1965 "parser.tab.cpp"
    break;

  case 20: /* cond_arrowtest: ARROWOP test  */
#line 236 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "cond_arrowtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1976 "parser.tab.cpp"
    break;

  case 21: /* cond_arrowtest: %empty  */
#line 242 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1984 "parser.tab.cpp"
    break;

  case 22: /* parameters: '(' cond_typedargslist ')'  */
#line 245 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "parameters");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1996 "parser.tab.cpp"
    break;

  case 23: /* cond_typedargslist: typedargslist  */
#line 252 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2004 "parser.tab.cpp"
    break;

  case 24: /* cond_typedargslist: %empty  */
#line 254 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 2012 "parser.tab.cpp"
    break;

  case 25: /* typedargslist: tfpdef cond_eqtest close_comma_tfpdef_condeqtest cond_comma_or_condstarorstartstar  */
#line 258 "parser.y"
                                                                                                 {
    (yyval.ptr) = new node("nt", "typedargslist");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2025 "parser.tab.cpp"
    break;

  case 26: /* typedargslist: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma  */
#line 266 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "typedargslist");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2038 "parser.tab.cpp"
    break;

  case 27: /* typedargslist: POW tfpdef cond_comma  */
#line 274 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "typedargslist");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2050 "parser.tab.cpp"
    break;

  case 28: /* conds_comma_startfpdefcondcomma: ','  */
#line 281 "parser.y"
                                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2058 "parser.tab.cpp"
    break;

  case 29: /* conds_comma_startfpdefcondcomma: ',' POW tfpdef cond_comma  */
#line 284 "parser.y"
                                {
        (yyval.ptr) = new node("nt", "conds_comma_startfpdefcondcomma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2071 "parser.tab.cpp"
    break;

  case 30: /* conds_comma_startfpdefcondcomma: %empty  */
#line 292 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2079 "parser.tab.cpp"
    break;

  case 31: /* cond_star_or_startstar: '*' cond_tfpdef close_comma_tfpdef_condeqtest conds_comma_startfpdefcondcomma  */
#line 295 "parser.y"
                                                                                                      {
            (yyval.ptr) = new node("nt", "cond_start_or_starstar");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2092 "parser.tab.cpp"
    break;

  case 32: /* cond_star_or_startstar: POW tfpdef cond_comma  */
#line 303 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "cond_star_or_startstar");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2104 "parser.tab.cpp"
    break;

  case 33: /* cond_star_or_startstar: %empty  */
#line 310 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2112 "parser.tab.cpp"
    break;

  case 34: /* cond_comma_or_condstarorstartstar: ',' cond_star_or_startstar  */
#line 313 "parser.y"
                                                              {
        (yyval.ptr) = new node("nt", "cond_comma_or_constartortarstar");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2123 "parser.tab.cpp"
    break;

  case 35: /* cond_comma_or_condstarorstartstar: %empty  */
#line 319 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2131 "parser.tab.cpp"
    break;

  case 36: /* close_comma_tfpdef_condeqtest: close_comma_tfpdef_condeqtest ',' tfpdef cond_eqtest  */
#line 322 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close_comma_tfpdef_condeqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 2143 "parser.tab.cpp"
    break;

  case 37: /* close_comma_tfpdef_condeqtest: %empty  */
#line 329 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2151 "parser.tab.cpp"
    break;

  case 38: /* cond_tfpdef: tfpdef  */
#line 332 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2159 "parser.tab.cpp"
    break;

  case 39: /* cond_tfpdef: %empty  */
#line 335 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2167 "parser.tab.cpp"
    break;

  case 40: /* tfpdef: NAME  */
#line 338 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2175 "parser.tab.cpp"
    break;

  case 41: /* tfpdef: NAME ':' test  */
#line 341 "parser.y"
                {
    (yyval.ptr) = new node("nt", "tfpdef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2187 "parser.tab.cpp"
    break;

  case 42: /* varargslist: vfpdef cond_eqtest close_comma_vfpdef_condeqtest cond_comma_or_condstarorstartstarvf  */
#line 349 "parser.y"
                                                                                                  {
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2200 "parser.tab.cpp"
    break;

  case 43: /* varargslist: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma  */
#line 357 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2213 "parser.tab.cpp"
    break;

  case 44: /* varargslist: POW vfpdef cond_comma  */
#line 365 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2225 "parser.tab.cpp"
    break;

  case 45: /* vfpdef: NAME  */
#line 372 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2233 "parser.tab.cpp"
    break;

  case 46: /* close_comma_vfpdef_condeqtest: close_comma_vfpdef_condeqtest ',' vfpdef cond_eqtest  */
#line 375 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close_comma_vfpdef_condeqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2246 "parser.tab.cpp"
    break;

  case 47: /* close_comma_vfpdef_condeqtest: %empty  */
#line 383 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2254 "parser.tab.cpp"
    break;

  case 48: /* cond_vfpdef: vfpdef  */
#line 386 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2262 "parser.tab.cpp"
    break;

  case 49: /* cond_vfpdef: %empty  */
#line 389 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2270 "parser.tab.cpp"
    break;

  case 50: /* cond_star_or_startstar_vf: '*' cond_vfpdef close_comma_vfpdef_condeqtest conds_comma_starvfpdefcondcomma  */
#line 393 "parser.y"
        {
            (yyval.ptr) = new node("nt", "cond_star_or_startstar_vf");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2283 "parser.tab.cpp"
    break;

  case 51: /* cond_star_or_startstar_vf: POW vfpdef cond_comma  */
#line 401 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "cond_star_or_startstar_vf");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2295 "parser.tab.cpp"
    break;

  case 52: /* cond_star_or_startstar_vf: %empty  */
#line 408 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2303 "parser.tab.cpp"
    break;

  case 53: /* conds_comma_starvfpdefcondcomma: ','  */
#line 411 "parser.y"
                                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2311 "parser.tab.cpp"
    break;

  case 54: /* conds_comma_starvfpdefcondcomma: ',' POW vfpdef cond_comma  */
#line 414 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "conds_comma_starvfpdefcondcomma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2324 "parser.tab.cpp"
    break;

  case 55: /* conds_comma_starvfpdefcondcomma: %empty  */
#line 422 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2332 "parser.tab.cpp"
    break;

  case 56: /* cond_comma_or_condstarorstartstarvf: ',' cond_star_or_startstar_vf  */
#line 425 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "comma or starstar");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2343 "parser.tab.cpp"
    break;

  case 57: /* cond_comma_or_condstarorstartstarvf: %empty  */
#line 431 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2351 "parser.tab.cpp"
    break;

  case 58: /* stmt: simple_stmt  */
#line 435 "parser.y"
                  {
    cerr<<"stmt reached\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2360 "parser.tab.cpp"
    break;

  case 59: /* stmt: compound_stmt  */
#line 438 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2368 "parser.tab.cpp"
    break;

  case 60: /* simple_stmt: small_stmt close_small_stmt cond_semi_colon NEWLINE  */
#line 441 "parser.y"
                                                                 {
        cerr << "simple statement\n";
        (yyval.ptr) = new node("nt", "simple_stmt");
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2381 "parser.tab.cpp"
    break;

  case 61: /* close_small_stmt: close_small_stmt ';' small_stmt  */
#line 449 "parser.y"
                                                  {
        (yyval.ptr) = new node("nt", "close_small_stmt");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2393 "parser.tab.cpp"
    break;

  case 62: /* close_small_stmt: %empty  */
#line 456 "parser.y"
          {
            (yyval.ptr) = NULL;
        }
#line 2401 "parser.tab.cpp"
    break;

  case 63: /* cond_semi_colon: ';'  */
#line 459 "parser.y"
                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2409 "parser.tab.cpp"
    break;

  case 64: /* cond_semi_colon: %empty  */
#line 462 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2417 "parser.tab.cpp"
    break;

  case 65: /* small_stmt: expr_stmt  */
#line 465 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2425 "parser.tab.cpp"
    break;

  case 66: /* small_stmt: del_stmt  */
#line 467 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2433 "parser.tab.cpp"
    break;

  case 67: /* small_stmt: pass_stmt  */
#line 470 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2441 "parser.tab.cpp"
    break;

  case 68: /* small_stmt: flow_stmt  */
#line 473 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2449 "parser.tab.cpp"
    break;

  case 69: /* small_stmt: import_stmt  */
#line 476 "parser.y"
              {
    cerr<<" import stmt \n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2458 "parser.tab.cpp"
    break;

  case 70: /* small_stmt: global_stmt  */
#line 480 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2466 "parser.tab.cpp"
    break;

  case 71: /* small_stmt: nonlocal_stmt  */
#line 483 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2474 "parser.tab.cpp"
    break;

  case 72: /* small_stmt: assert_stmt  */
#line 486 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
  }
#line 2482 "parser.tab.cpp"
    break;

  case 73: /* expr_stmt: testlist_star_expr anna_or_auga_or_closeyield  */
#line 489 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "expr_statement");
    cerr << "here expr_stmt\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2494 "parser.tab.cpp"
    break;

  case 74: /* yield_or_test: yield_expr  */
#line 496 "parser.y"
                          {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2502 "parser.tab.cpp"
    break;

  case 75: /* yield_or_test: testlist  */
#line 500 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2510 "parser.tab.cpp"
    break;

  case 76: /* yield_or_test_star: yield_expr  */
#line 503 "parser.y"
                               {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2518 "parser.tab.cpp"
    break;

  case 77: /* yield_or_test_star: testlist_star_expr  */
#line 507 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2526 "parser.tab.cpp"
    break;

  case 78: /* close_yield_or_test_star: close_yield_or_test_star '=' yield_or_test_star  */
#line 510 "parser.y"
                                                                          {
                    (yyval.ptr) = new node("nt", "close_yield_or_test_star");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
            }
#line 2538 "parser.tab.cpp"
    break;

  case 79: /* close_yield_or_test_star: %empty  */
#line 517 "parser.y"
                          {
                            (yyval.ptr) = NULL;
                        }
#line 2546 "parser.tab.cpp"
    break;

  case 80: /* annassign: ':' test cond_eqtest  */
#line 520 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "annasign");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2558 "parser.tab.cpp"
    break;

  case 81: /* cond_eqtest: '=' test  */
#line 527 "parser.y"
                      {
        (yyval.ptr) = new node("nt", "cond_eqtest");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2569 "parser.tab.cpp"
    break;

  case 82: /* cond_eqtest: %empty  */
#line 533 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2577 "parser.tab.cpp"
    break;

  case 83: /* anna_or_auga_or_closeyield: annassign  */
#line 536 "parser.y"
                                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2585 "parser.tab.cpp"
    break;

  case 84: /* anna_or_auga_or_closeyield: augassign yield_or_test  */
#line 538 "parser.y"
                            {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 2593 "parser.tab.cpp"
    break;

  case 85: /* anna_or_auga_or_closeyield: close_yield_or_test_star  */
#line 540 "parser.y"
                             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2601 "parser.tab.cpp"
    break;

  case 86: /* testlist_star_expr: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 544 "parser.y"
                                                                          {
    (yyval.ptr) = new node("nt", "testlist star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2613 "parser.tab.cpp"
    break;

  case 87: /* test_or_starexp: test  */
#line 551 "parser.y"
                      {
    cerr<<"yo1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2622 "parser.tab.cpp"
    break;

  case 88: /* test_or_starexp: star_expr  */
#line 555 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2630 "parser.tab.cpp"
    break;

  case 89: /* close_commatest_or_starexp: close_commatest_or_starexp ',' test_or_starexp  */
#line 558 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "close_commatest_or_starexp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2642 "parser.tab.cpp"
    break;

  case 90: /* close_commatest_or_starexp: %empty  */
#line 565 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2650 "parser.tab.cpp"
    break;

  case 91: /* cond_comma: ','  */
#line 568 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2658 "parser.tab.cpp"
    break;

  case 92: /* cond_comma: %empty  */
#line 571 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2666 "parser.tab.cpp"
    break;

  case 93: /* augassign: ADDASSIGN  */
#line 574 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2674 "parser.tab.cpp"
    break;

  case 94: /* augassign: SUBASSIGN  */
#line 577 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2682 "parser.tab.cpp"
    break;

  case 95: /* augassign: MULASSIGN  */
#line 580 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2690 "parser.tab.cpp"
    break;

  case 96: /* augassign: ATASSIGN  */
#line 583 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2698 "parser.tab.cpp"
    break;

  case 97: /* augassign: DIVASSIGN  */
#line 586 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2706 "parser.tab.cpp"
    break;

  case 98: /* augassign: MODASSIGN  */
#line 589 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2714 "parser.tab.cpp"
    break;

  case 99: /* augassign: ANDASSIGN  */
#line 592 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2722 "parser.tab.cpp"
    break;

  case 100: /* augassign: ORASSIGN  */
#line 595 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2730 "parser.tab.cpp"
    break;

  case 101: /* augassign: XORASSIGN  */
#line 598 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2738 "parser.tab.cpp"
    break;

  case 102: /* augassign: LSASSIGN  */
#line 601 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2746 "parser.tab.cpp"
    break;

  case 103: /* augassign: RSASSIGN  */
#line 604 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2754 "parser.tab.cpp"
    break;

  case 104: /* augassign: POWASSIGN  */
#line 607 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2762 "parser.tab.cpp"
    break;

  case 105: /* augassign: IDIVASSIGN  */
#line 610 "parser.y"
                         {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2770 "parser.tab.cpp"
    break;

  case 106: /* del_stmt: DEL exprlist  */
#line 614 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "DelStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2781 "parser.tab.cpp"
    break;

  case 107: /* pass_stmt: PASS  */
#line 620 "parser.y"
               {
    (yyval.ptr) = new node("nt", "PassStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2791 "parser.tab.cpp"
    break;

  case 108: /* flow_stmt: break_stmt  */
#line 625 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2799 "parser.tab.cpp"
    break;

  case 109: /* flow_stmt: continue_stmt  */
#line 628 "parser.y"
                        {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2807 "parser.tab.cpp"
    break;

  case 110: /* flow_stmt: return_stmt  */
#line 631 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2815 "parser.tab.cpp"
    break;

  case 111: /* flow_stmt: raise_stmt  */
#line 634 "parser.y"
                     {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2823 "parser.tab.cpp"
    break;

  case 112: /* flow_stmt: yield_stmt  */
#line 637 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2831 "parser.tab.cpp"
    break;

  case 113: /* break_stmt: BREAK  */
#line 641 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "BreakStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2841 "parser.tab.cpp"
    break;

  case 114: /* continue_stmt: CONTINUE  */
#line 647 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "ContinueStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2851 "parser.tab.cpp"
    break;

  case 115: /* return_stmt: RETURN cond_testlist  */
#line 653 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "ReturnStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2862 "parser.tab.cpp"
    break;

  case 116: /* cond_testlist: testlist  */
#line 660 "parser.y"
                       {
      (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2870 "parser.tab.cpp"
    break;

  case 117: /* cond_testlist: %empty  */
#line 662 "parser.y"
    {
      (yyval.ptr) = nullptr;
}
#line 2878 "parser.tab.cpp"
    break;

  case 118: /* yield_stmt: yield_expr  */
#line 665 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2886 "parser.tab.cpp"
    break;

  case 119: /* raise_stmt: RAISE cond_from_test  */
#line 668 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "RaiseStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2897 "parser.tab.cpp"
    break;

  case 120: /* cond_from_test: test  */
#line 674 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2905 "parser.tab.cpp"
    break;

  case 121: /* cond_from_test: test FROM test  */
#line 676 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "cond_from_test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2917 "parser.tab.cpp"
    break;

  case 122: /* cond_from_test: %empty  */
#line 682 "parser.y"
   {    
    (yyval.ptr) = nullptr;
}
#line 2925 "parser.tab.cpp"
    break;

  case 123: /* import_stmt: import_name  */
#line 686 "parser.y"
                         {
    cerr << "import name\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2934 "parser.tab.cpp"
    break;

  case 124: /* import_stmt: import_from  */
#line 690 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2942 "parser.tab.cpp"
    break;

  case 125: /* import_name: IMPORT dotted_as_names  */
#line 693 "parser.y"
                                   {
    cerr<<"import\n";
    (yyval.ptr) = new node("nt", "ImportStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2954 "parser.tab.cpp"
    break;

  case 126: /* import_from: FROM closeplusdotorellipsisname_or_plusdotellip IMPORT star_or_import_parentheses_or_import  */
#line 701 "parser.y"
                                                                                                         {
                    (yyval.ptr) = new node("nt", "import_from");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
            }
#line 2967 "parser.tab.cpp"
    break;

  case 127: /* closeplusdotorellipsisname_or_plusdotellip: close_dot_or_ellipsis dotted_name  */
#line 710 "parser.y"
                                                                             {
    (yyval.ptr) = new node("nt", "closeplusdotorellipsisname_or_plusdotellip");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2978 "parser.tab.cpp"
    break;

  case 128: /* closeplusdotorellipsisname_or_plusdotellip: plus_dot_or_ellipsis  */
#line 715 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2986 "parser.tab.cpp"
    break;

  case 129: /* star_or_import_parentheses_or_import: '*'  */
#line 719 "parser.y"
                                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2994 "parser.tab.cpp"
    break;

  case 130: /* star_or_import_parentheses_or_import: '(' import_as_names ')'  */
#line 721 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "star_or_import_parentheses_or_import");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3006 "parser.tab.cpp"
    break;

  case 131: /* star_or_import_parentheses_or_import: import_as_names  */
#line 727 "parser.y"
                   {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3014 "parser.tab.cpp"
    break;

  case 132: /* plus_dot_or_ellipsis: '.' plus_dot_or_ellipsis  */
#line 731 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "plus_dot_or_ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3025 "parser.tab.cpp"
    break;

  case 133: /* plus_dot_or_ellipsis: ELLIPSIS plus_dot_or_ellipsis  */
#line 736 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "plus_dot_or_ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3036 "parser.tab.cpp"
    break;

  case 134: /* plus_dot_or_ellipsis: '.'  */
#line 741 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3044 "parser.tab.cpp"
    break;

  case 135: /* plus_dot_or_ellipsis: ELLIPSIS  */
#line 743 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3052 "parser.tab.cpp"
    break;

  case 136: /* close_dot_or_ellipsis: plus_dot_or_ellipsis  */
#line 747 "parser.y"
                                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3060 "parser.tab.cpp"
    break;

  case 137: /* close_dot_or_ellipsis: %empty  */
#line 749 "parser.y"
    {
    (yyval.ptr) = nullptr;
}
#line 3068 "parser.tab.cpp"
    break;

  case 138: /* import_as_name: NAME  */
#line 753 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3076 "parser.tab.cpp"
    break;

  case 139: /* import_as_name: NAME AS NAME  */
#line 755 "parser.y"
                {
    (yyval.ptr) = new node("nt", "ImportAsName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3088 "parser.tab.cpp"
    break;

  case 140: /* dotted_as_name: dotted_name  */
#line 763 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3096 "parser.tab.cpp"
    break;

  case 141: /* dotted_as_name: dotted_name AS NAME  */
#line 765 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "DottedAsName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3108 "parser.tab.cpp"
    break;

  case 142: /* import_as_names: import_as_name close_commaimportasname cond_comma  */
#line 773 "parser.y"
                                                                  {
    (yyval.ptr) = new node("nt", "ImportAsNames");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr)); 
}
#line 3120 "parser.tab.cpp"
    break;

  case 143: /* close_commaimportasname: close_commaimportasname ',' import_as_name  */
#line 781 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaImportAsName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3132 "parser.tab.cpp"
    break;

  case 144: /* close_commaimportasname: %empty  */
#line 787 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3140 "parser.tab.cpp"
    break;

  case 145: /* dotted_as_names: dotted_as_name close_commadottedasname  */
#line 791 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "DottedAsNames");
    cerr<<"dotted_as_name reached\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3152 "parser.tab.cpp"
    break;

  case 146: /* close_commadottedasname: close_commadottedasname ',' dotted_as_name  */
#line 799 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaDottedAsName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3164 "parser.tab.cpp"
    break;

  case 147: /* close_commadottedasname: %empty  */
#line 805 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3172 "parser.tab.cpp"
    break;

  case 148: /* dotted_name: NAME close_dotted_name  */
#line 809 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "DottedName");
    cerr << "Dotted name reached\n";
    cerr << (yyvsp[-1].val) << '\n';
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3185 "parser.tab.cpp"
    break;

  case 149: /* close_dotted_name: close_dotted_name '.' NAME  */
#line 818 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "CloseDottedName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3197 "parser.tab.cpp"
    break;

  case 150: /* close_dotted_name: %empty  */
#line 824 "parser.y"
    {
    cerr << "Null production\n";
    (yyval.ptr) = NULL;
}
#line 3206 "parser.tab.cpp"
    break;

  case 151: /* global_stmt: GLOBAL NAME close_comma_name  */
#line 829 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "GlobalStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3218 "parser.tab.cpp"
    break;

  case 152: /* nonlocal_stmt: NONLOCAL NAME close_comma_name  */
#line 836 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "NonlocalStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 3229 "parser.tab.cpp"
    break;

  case 153: /* close_comma_name: close_comma_name ',' NAME  */
#line 842 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "CloseCommaName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3241 "parser.tab.cpp"
    break;

  case 154: /* close_comma_name: %empty  */
#line 848 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3249 "parser.tab.cpp"
    break;

  case 155: /* assert_stmt: ASSERT test  */
#line 852 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "AssertStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3260 "parser.tab.cpp"
    break;

  case 156: /* assert_stmt: ASSERT test ',' test  */
#line 857 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "AssertStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3273 "parser.tab.cpp"
    break;

  case 157: /* compound_stmt: if_stmt  */
#line 866 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3281 "parser.tab.cpp"
    break;

  case 158: /* compound_stmt: while_stmt  */
#line 868 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3289 "parser.tab.cpp"
    break;

  case 159: /* compound_stmt: for_stmt  */
#line 870 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3297 "parser.tab.cpp"
    break;

  case 160: /* compound_stmt: try_stmt  */
#line 872 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3305 "parser.tab.cpp"
    break;

  case 161: /* compound_stmt: with_stmt  */
#line 874 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3313 "parser.tab.cpp"
    break;

  case 162: /* compound_stmt: funcdef  */
#line 876 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3321 "parser.tab.cpp"
    break;

  case 163: /* compound_stmt: classdef  */
#line 878 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3329 "parser.tab.cpp"
    break;

  case 164: /* compound_stmt: decorated  */
#line 880 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3337 "parser.tab.cpp"
    break;

  case 165: /* compound_stmt: async_stmt  */
#line 882 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3345 "parser.tab.cpp"
    break;

  case 166: /* async_stmt: ASYNC funcdef_or_withstmt_or_forstmt  */
#line 886 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "AsyncStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3356 "parser.tab.cpp"
    break;

  case 167: /* funcdef_or_withstmt_or_forstmt: funcdef  */
#line 893 "parser.y"
                                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3364 "parser.tab.cpp"
    break;

  case 168: /* funcdef_or_withstmt_or_forstmt: with_stmt  */
#line 895 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3372 "parser.tab.cpp"
    break;

  case 169: /* funcdef_or_withstmt_or_forstmt: for_stmt  */
#line 897 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3380 "parser.tab.cpp"
    break;

  case 170: /* if_stmt: IF test ':' suite close_eliftestsuite cond_else_colon_suite  */
#line 901 "parser.y"
                                                                    {
    cerr<<"if stmt reached\n";
    (yyval.ptr) = new node("nt", "IfStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3396 "parser.tab.cpp"
    break;

  case 171: /* cond_else_colon_suite: ELSE ':' suite  */
#line 913 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "ElseColonSuite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3408 "parser.tab.cpp"
    break;

  case 172: /* cond_else_colon_suite: %empty  */
#line 919 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3416 "parser.tab.cpp"
    break;

  case 173: /* close_eliftestsuite: close_eliftestsuite ELIF test ':' suite  */
#line 923 "parser.y"
                                                            {
    (yyval.ptr) = new node("nt", "CloseElifTestSuite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3430 "parser.tab.cpp"
    break;

  case 174: /* close_eliftestsuite: %empty  */
#line 931 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3438 "parser.tab.cpp"
    break;

  case 175: /* while_stmt: WHILE test ':' suite  */
#line 935 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "WhileStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3451 "parser.tab.cpp"
    break;

  case 176: /* while_stmt: WHILE test ':' suite ELSE ':' suite  */
#line 942 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "WhileStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-6].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3467 "parser.tab.cpp"
    break;

  case 177: /* for_stmt: FOR exprlist IN testlist ':' suite  */
#line 953 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "ForStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3482 "parser.tab.cpp"
    break;

  case 178: /* for_stmt: FOR exprlist IN testlist ':' suite ELSE ':' suite  */
#line 962 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "ForStatement");
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
#line 3500 "parser.tab.cpp"
    break;

  case 179: /* try_stmt: TRY ':' suite plus_except_colsuite cond_else_colon_suite cond_finallycolsuite  */
#line 975 "parser.y"
                                                                                       {
    (yyval.ptr) = new node("nt", "TryStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3515 "parser.tab.cpp"
    break;

  case 180: /* try_stmt: TRY ':' suite FINALLY ':' suite  */
#line 984 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "TryStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3530 "parser.tab.cpp"
    break;

  case 181: /* cond_finallycolsuite: FINALLY ':' suite  */
#line 995 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "FinallyColonSuite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3542 "parser.tab.cpp"
    break;

  case 182: /* cond_finallycolsuite: %empty  */
#line 1001 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3550 "parser.tab.cpp"
    break;

  case 183: /* plus_except_colsuite: except_clause ':' suite  */
#line 1005 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "PlusExceptColonSuite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3562 "parser.tab.cpp"
    break;

  case 184: /* plus_except_colsuite: plus_except_colsuite except_clause ':' suite  */
#line 1011 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "PlusExceptColonSuite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3575 "parser.tab.cpp"
    break;

  case 185: /* with_stmt: WITH with_item close_commawithitem ':' suite  */
#line 1020 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "WithStatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3589 "parser.tab.cpp"
    break;

  case 186: /* close_commawithitem: close_commawithitem ',' with_item  */
#line 1030 "parser.y"
                                                      {
    (yyval.ptr) = new node("nt", "CloseCommaWithItem");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3601 "parser.tab.cpp"
    break;

  case 187: /* close_commawithitem: %empty  */
#line 1036 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3609 "parser.tab.cpp"
    break;

  case 188: /* with_item: test  */
#line 1040 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3617 "parser.tab.cpp"
    break;

  case 189: /* with_item: test AS expr  */
#line 1042 "parser.y"
                {
    (yyval.ptr) = new node("nt", "WithItem");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3629 "parser.tab.cpp"
    break;

  case 190: /* except_clause: EXCEPT cond_testasname  */
#line 1051 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "ExceptClause");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3640 "parser.tab.cpp"
    break;

  case 191: /* cond_testasname: test  */
#line 1058 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3648 "parser.tab.cpp"
    break;

  case 192: /* cond_testasname: test AS NAME  */
#line 1060 "parser.y"
                {
    (yyval.ptr) = new node("nt", "CondTestAsName");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3660 "parser.tab.cpp"
    break;

  case 193: /* cond_testasname: %empty  */
#line 1066 "parser.y"
   {
    (yyval.ptr) = NULL;
}
#line 3668 "parser.tab.cpp"
    break;

  case 194: /* suite: simple_stmt  */
#line 1070 "parser.y"
                  {
    cerr<<" yo yo yo 1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3677 "parser.tab.cpp"
    break;

  case 195: /* suite: NEWLINE INDENT plus_stmt DEDENT  */
#line 1073 "parser.y"
                                   {
    cerr<<" yo yo yo 2\n";
    (yyval.ptr) = new node("nt", "Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3691 "parser.tab.cpp"
    break;

  case 196: /* plus_stmt: stmt  */
#line 1082 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3699 "parser.tab.cpp"
    break;

  case 197: /* plus_stmt: plus_stmt stmt  */
#line 1084 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "PlusStmt");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3710 "parser.tab.cpp"
    break;

  case 198: /* test: or_test IF or_test ELSE test  */
#line 1090 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3724 "parser.tab.cpp"
    break;

  case 199: /* test: lambdef  */
#line 1098 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3732 "parser.tab.cpp"
    break;

  case 200: /* test: or_test  */
#line 1100 "parser.y"
           {
    cerr << "debug statement " << 1 <<"\n";
    cerr<<"test->or_test\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3742 "parser.tab.cpp"
    break;

  case 201: /* test_nocond: or_test  */
#line 1105 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3750 "parser.tab.cpp"
    break;

  case 202: /* test_nocond: lambdef_nocond  */
#line 1107 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3758 "parser.tab.cpp"
    break;

  case 203: /* lambdef: LAMBDA varargslist ':' test  */
#line 1111 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "LambDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3771 "parser.tab.cpp"
    break;

  case 204: /* lambdef: LAMBDA ':' test  */
#line 1118 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "LambDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3783 "parser.tab.cpp"
    break;

  case 205: /* lambdef_nocond: LAMBDA varargslist ':' test_nocond  */
#line 1126 "parser.y"
                                                  {
    (yyval.ptr) = new node("nt", "LambDefNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3796 "parser.tab.cpp"
    break;

  case 206: /* lambdef_nocond: LAMBDA ':' test_nocond  */
#line 1133 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "LambDefNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3808 "parser.tab.cpp"
    break;

  case 207: /* or_test: and_test close_or_and_test  */
#line 1141 "parser.y"
                                   {
    cerr << "debug statement " << 2 <<" "<<((yyvsp[-1].ptr))->name<<"\n";
    (yyval.ptr) = new node("nt", "OrTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3820 "parser.tab.cpp"
    break;

  case 208: /* close_or_and_test: close_or_and_test OR and_test  */
#line 1149 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CloseOrAndTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3832 "parser.tab.cpp"
    break;

  case 209: /* close_or_and_test: %empty  */
#line 1155 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3840 "parser.tab.cpp"
    break;

  case 210: /* and_test: not_test close_and_not_test  */
#line 1159 "parser.y"
                                     {
    cerr << "debug statement " << 3 <<"\n";
    (yyval.ptr) = new node("nt", "AndTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3852 "parser.tab.cpp"
    break;

  case 211: /* close_and_not_test: close_and_not_test AND not_test  */
#line 1167 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "CloseAndNotTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3864 "parser.tab.cpp"
    break;

  case 212: /* close_and_not_test: %empty  */
#line 1173 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3872 "parser.tab.cpp"
    break;

  case 213: /* not_test: close_not comparison  */
#line 1177 "parser.y"
                              {
    cerr << "debug statement " << 4 << "\n";
    (yyval.ptr) = new node("nt", "NotTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3884 "parser.tab.cpp"
    break;

  case 214: /* close_not: close_not NOT  */
#line 1185 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "CloseNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3895 "parser.tab.cpp"
    break;

  case 215: /* close_not: %empty  */
#line 1190 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3903 "parser.tab.cpp"
    break;

  case 216: /* comparison: expr close_compopexpr  */
#line 1194 "parser.y"
                                 {
    cerr << "debug statement " << 5 <<"\n";
    (yyval.ptr) = new node("nt", "Comparison");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3915 "parser.tab.cpp"
    break;

  case 217: /* close_compopexpr: close_compopexpr comp_op expr  */
#line 1202 "parser.y"
                                               {
    (yyval.ptr) = new node("nt", "CloseCompOpExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3927 "parser.tab.cpp"
    break;

  case 218: /* close_compopexpr: %empty  */
#line 1208 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3935 "parser.tab.cpp"
    break;

  case 219: /* comp_op: '<'  */
#line 1216 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3943 "parser.tab.cpp"
    break;

  case 220: /* comp_op: '>'  */
#line 1218 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3951 "parser.tab.cpp"
    break;

  case 221: /* comp_op: EQUAL  */
#line 1220 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3959 "parser.tab.cpp"
    break;

  case 222: /* comp_op: GEQ  */
#line 1222 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3967 "parser.tab.cpp"
    break;

  case 223: /* comp_op: LEQ  */
#line 1224 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3975 "parser.tab.cpp"
    break;

  case 224: /* comp_op: LTORGT  */
#line 1226 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3983 "parser.tab.cpp"
    break;

  case 225: /* comp_op: NEQ  */
#line 1228 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3991 "parser.tab.cpp"
    break;

  case 226: /* comp_op: IN  */
#line 1230 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3999 "parser.tab.cpp"
    break;

  case 227: /* comp_op: NOT IN  */
#line 1232 "parser.y"
          {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4010 "parser.tab.cpp"
    break;

  case 228: /* comp_op: IS  */
#line 1237 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4018 "parser.tab.cpp"
    break;

  case 229: /* comp_op: IS NOT  */
#line 1239 "parser.y"
          {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4029 "parser.tab.cpp"
    break;

  case 230: /* star_expr: '*' expr  */
#line 1246 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "StarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4040 "parser.tab.cpp"
    break;

  case 231: /* expr: xor_expr close_orxorexp  */
#line 1253 "parser.y"
                             {
    cerr << "debug statement " << 6 <<"\n";
    (yyval.ptr) = new node("nt", "Expr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4052 "parser.tab.cpp"
    break;

  case 232: /* close_orxorexp: close_orxorexp '|' xor_expr  */
#line 1260 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "CloseOrXorExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4064 "parser.tab.cpp"
    break;

  case 233: /* close_orxorexp: %empty  */
#line 1266 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4072 "parser.tab.cpp"
    break;

  case 234: /* xor_expr: and_expr close_xor_and_expr  */
#line 1270 "parser.y"
                                     {
    cerr << "debug statement " << 7 <<"\n";
    (yyval.ptr) = new node("nt", "XorExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4084 "parser.tab.cpp"
    break;

  case 235: /* close_xor_and_expr: close_xor_and_expr '^' and_expr  */
#line 1278 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "CloseXorAndExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4096 "parser.tab.cpp"
    break;

  case 236: /* close_xor_and_expr: %empty  */
#line 1284 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4104 "parser.tab.cpp"
    break;

  case 237: /* and_expr: shift_expr close_andshiftexpr  */
#line 1288 "parser.y"
                                       {
    cerr << "debug statement " << 8 <<"\n";
    (yyval.ptr) = new node("nt", "AndExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4116 "parser.tab.cpp"
    break;

  case 238: /* close_andshiftexpr: close_andshiftexpr '&' shift_expr  */
#line 1296 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "CloseAndShiftExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4128 "parser.tab.cpp"
    break;

  case 239: /* close_andshiftexpr: %empty  */
#line 1302 "parser.y"
     {
(yyval.ptr) = NULL;
}
#line 4136 "parser.tab.cpp"
    break;

  case 240: /* shift_expr: arith_expr close_lrs_arith_expr  */
#line 1306 "parser.y"
                                           {
    cerr << "debug statement " << 9 <<"\n";
    (yyval.ptr) = new node("nt", "ShiftExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4148 "parser.tab.cpp"
    break;

  case 241: /* left_right_shift: LEFTSHIFT  */
#line 1314 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4156 "parser.tab.cpp"
    break;

  case 242: /* left_right_shift: RIGHTSHIFT  */
#line 1316 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4164 "parser.tab.cpp"
    break;

  case 243: /* close_lrs_arith_expr: close_lrs_arith_expr left_right_shift arith_expr  */
#line 1320 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "CloseLrsArithExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4176 "parser.tab.cpp"
    break;

  case 244: /* close_lrs_arith_expr: %empty  */
#line 1326 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4184 "parser.tab.cpp"
    break;

  case 245: /* arith_expr: term close_plusminusterm  */
#line 1330 "parser.y"
                                    {
    cerr << "debug statement " << 10 <<"\n";
    (yyval.ptr) = new node("nt", "ArithExpr");
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4195 "parser.tab.cpp"
    break;

  case 246: /* close_plusminusterm: close_plusminusterm '+' term  */
#line 1337 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "ClosePlusMinusTerm");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4206 "parser.tab.cpp"
    break;

  case 247: /* close_plusminusterm: close_plusminusterm '-' term  */
#line 1342 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "ClosePlusMinusTerm");
    // $<ptr>$ = $<ptr>2;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4218 "parser.tab.cpp"
    break;

  case 248: /* close_plusminusterm: %empty  */
#line 1348 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4226 "parser.tab.cpp"
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
#line 4238 "parser.tab.cpp"
    break;

  case 250: /* group_muldivremops: '*'  */
#line 1360 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4246 "parser.tab.cpp"
    break;

  case 251: /* group_muldivremops: '@'  */
#line 1362 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4254 "parser.tab.cpp"
    break;

  case 252: /* group_muldivremops: '/'  */
#line 1364 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4262 "parser.tab.cpp"
    break;

  case 253: /* group_muldivremops: '%'  */
#line 1366 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4270 "parser.tab.cpp"
    break;

  case 254: /* group_muldivremops: IDIV  */
#line 1368 "parser.y"
        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4278 "parser.tab.cpp"
    break;

  case 255: /* close_muldivopsfactor: close_muldivopsfactor group_muldivremops factor  */
#line 1372 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "CloseMulDivOpsFactor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4290 "parser.tab.cpp"
    break;

  case 256: /* close_muldivopsfactor: %empty  */
#line 1378 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4298 "parser.tab.cpp"
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
#line 4310 "parser.tab.cpp"
    break;

  case 258: /* close_plus_or_minus_or_not: close_plus_or_minus_or_not plus_or_minus_or_not  */
#line 1390 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "ClosePlusOrMinusOrNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4321 "parser.tab.cpp"
    break;

  case 259: /* close_plus_or_minus_or_not: %empty  */
#line 1395 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4329 "parser.tab.cpp"
    break;

  case 260: /* plus_or_minus_or_not: '+'  */
#line 1400 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4337 "parser.tab.cpp"
    break;

  case 261: /* plus_or_minus_or_not: '-'  */
#line 1402 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4345 "parser.tab.cpp"
    break;

  case 262: /* plus_or_minus_or_not: '~'  */
#line 1404 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4353 "parser.tab.cpp"
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
#line 4365 "parser.tab.cpp"
    break;

  case 264: /* power: atom_expr  */
#line 1414 "parser.y"
             {
    cerr << "debug statement " << 13 <<"\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4374 "parser.tab.cpp"
    break;

  case 265: /* atom_expr: AWAIT atom close_trailer  */
#line 1419 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "AtomExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4386 "parser.tab.cpp"
    break;

  case 266: /* atom_expr: atom close_trailer  */
#line 1425 "parser.y"
                      {
    cerr << "debug statement " << 14 <<"\n";
    (yyval.ptr) = new node("nt", "AtomExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4398 "parser.tab.cpp"
    break;

  case 267: /* close_trailer: close_trailer trailer  */
#line 1433 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "CloseTrailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4409 "parser.tab.cpp"
    break;

  case 268: /* close_trailer: %empty  */
#line 1438 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4417 "parser.tab.cpp"
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
#line 4429 "parser.tab.cpp"
    break;

  case 270: /* atom: '[' testlist_comp ']'  */
#line 1448 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4441 "parser.tab.cpp"
    break;

  case 271: /* atom: '[' ']' '{' dictorsetmaker '}'  */
#line 1454 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4455 "parser.tab.cpp"
    break;

  case 272: /* atom: '{' dictorsetmaker '}'  */
#line 1462 "parser.y"
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
#line 1468 "parser.y"
            {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4478 "parser.tab.cpp"
    break;

  case 274: /* atom: NAME  */
#line 1473 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4486 "parser.tab.cpp"
    break;

  case 275: /* atom: NUMBER  */
#line 1475 "parser.y"
           {
    cerr << "debug statement " << 15 <<"\n";
    cerr << "number reached " << (yyvsp[0].val) << '\n';
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4496 "parser.tab.cpp"
    break;

  case 276: /* atom: multi_str  */
#line 1479 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4504 "parser.tab.cpp"
    break;

  case 277: /* atom: ELLIPSIS  */
#line 1481 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4512 "parser.tab.cpp"
    break;

  case 278: /* atom: NONE  */
#line 1483 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4520 "parser.tab.cpp"
    break;

  case 279: /* atom: TRUE  */
#line 1485 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4528 "parser.tab.cpp"
    break;

  case 280: /* atom: FALSE  */
#line 1487 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4536 "parser.tab.cpp"
    break;

  case 281: /* cond_yield_or_testlist: yield_expr  */
#line 1491 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4544 "parser.tab.cpp"
    break;

  case 282: /* cond_yield_or_testlist: testlist_comp  */
#line 1493 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4552 "parser.tab.cpp"
    break;

  case 283: /* cond_yield_or_testlist: %empty  */
#line 1495 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4560 "parser.tab.cpp"
    break;

  case 284: /* multi_str: STRING  */
#line 1499 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4568 "parser.tab.cpp"
    break;

  case 285: /* multi_str: STRING multi_str  */
#line 1501 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "MultiStr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4579 "parser.tab.cpp"
    break;

  case 286: /* testlist_comp: test_or_starexp comp_for  */
#line 1508 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "TestListComp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4590 "parser.tab.cpp"
    break;

  case 287: /* testlist_comp: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 1513 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "TestListComp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4602 "parser.tab.cpp"
    break;

  case 288: /* trailer: '(' cond_arglist ')'  */
#line 1521 "parser.y"
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
#line 1527 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4626 "parser.tab.cpp"
    break;

  case 290: /* trailer: '.' NAME  */
#line 1533 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 4638 "parser.tab.cpp"
    break;

  case 291: /* subscriptlist: subscript close_commasubscript cond_comma  */
#line 1541 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "SubscriptList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4650 "parser.tab.cpp"
    break;

  case 292: /* close_commasubscript: close_commasubscript ',' subscript  */
#line 1549 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "CloseCommaSubscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4662 "parser.tab.cpp"
    break;

  case 293: /* close_commasubscript: %empty  */
#line 1555 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4670 "parser.tab.cpp"
    break;

  case 294: /* subscript: test  */
#line 1559 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4678 "parser.tab.cpp"
    break;

  case 295: /* subscript: cond_test ':' cond_test cond_sliceop  */
#line 1561 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4691 "parser.tab.cpp"
    break;

  case 296: /* cond_test: test  */
#line 1570 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4699 "parser.tab.cpp"
    break;

  case 297: /* cond_test: %empty  */
#line 1572 "parser.y"
    {
    (yyval.ptr) = NULL;

}
#line 4708 "parser.tab.cpp"
    break;

  case 298: /* cond_sliceop: sliceop  */
#line 1577 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4716 "parser.tab.cpp"
    break;

  case 299: /* cond_sliceop: %empty  */
#line 1579 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4724 "parser.tab.cpp"
    break;

  case 300: /* sliceop: ':' test  */
#line 1583 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "SliceOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4735 "parser.tab.cpp"
    break;

  case 301: /* sliceop: ':'  */
#line 1588 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4743 "parser.tab.cpp"
    break;

  case 302: /* exprlist: expr_or_star_expr close_comma_expr_or_star_expr cond_comma  */
#line 1592 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "ExprList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4755 "parser.tab.cpp"
    break;

  case 303: /* expr_or_star_expr: expr  */
#line 1600 "parser.y"
                        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4763 "parser.tab.cpp"
    break;

  case 304: /* expr_or_star_expr: star_expr  */
#line 1602 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4771 "parser.tab.cpp"
    break;

  case 305: /* close_comma_expr_or_star_expr: close_comma_expr_or_star_expr ',' expr_or_star_expr  */
#line 1606 "parser.y"
                                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaExprOrStarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4783 "parser.tab.cpp"
    break;

  case 306: /* close_comma_expr_or_star_expr: %empty  */
#line 1612 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4791 "parser.tab.cpp"
    break;

  case 307: /* testlist: test close_comma_test cond_comma  */
#line 1616 "parser.y"
                                          {
    (yyval.ptr) = new node("nt", "TestList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4803 "parser.tab.cpp"
    break;

  case 308: /* close_comma_test: close_comma_test ',' test  */
#line 1624 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "CloseCommaTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4815 "parser.tab.cpp"
    break;

  case 309: /* close_comma_test: %empty  */
#line 1630 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4823 "parser.tab.cpp"
    break;

  case 310: /* dictorsetmaker: testcoltest_or_starrexpr compfor_or_close_commatestcoltestorstarexpr_condcomma  */
#line 1636 "parser.y"
                                                                                                {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4834 "parser.tab.cpp"
    break;

  case 311: /* dictorsetmaker: some_non_terminal  */
#line 1641 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4842 "parser.tab.cpp"
    break;

  case 312: /* testcoltest_or_starrexpr: test ':' test  */
#line 1645 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "TestColTestOrStarRexpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4854 "parser.tab.cpp"
    break;

  case 313: /* testcoltest_or_starrexpr: POW star_expr  */
#line 1651 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 4862 "parser.tab.cpp"
    break;

  case 314: /* close_commatestcoltestorstarrexpr: close_commatestcoltestorstarrexpr ',' testcoltest_or_starrexpr  */
#line 1656 "parser.y"
                                                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaTestColTestOrStarRexpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4874 "parser.tab.cpp"
    break;

  case 315: /* close_commatestcoltestorstarrexpr: %empty  */
#line 1662 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4882 "parser.tab.cpp"
    break;

  case 316: /* compfor_or_close_commatestcoltestorstarexpr_condcomma: comp_for  */
#line 1666 "parser.y"
                                                                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4890 "parser.tab.cpp"
    break;

  case 317: /* compfor_or_close_commatestcoltestorstarexpr_condcomma: close_commatestcoltestorstarrexpr cond_comma  */
#line 1668 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4901 "parser.tab.cpp"
    break;

  case 318: /* some_non_terminal: test_or_starexp comp_for  */
#line 1675 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "SomeNonTerminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4912 "parser.tab.cpp"
    break;

  case 319: /* some_non_terminal: test_or_starexp close_commatest_or_starexp cond_comma  */
#line 1680 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "SomeNonTerminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4924 "parser.tab.cpp"
    break;

  case 320: /* classdef: CLASS NAME cond_parentheses_arglist ':' suite  */
#line 1688 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "ClassDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4938 "parser.tab.cpp"
    break;

  case 321: /* cond_parentheses_arglist: '(' cond_arglist ')'  */
#line 1698 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "CondParenthesesArgList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4950 "parser.tab.cpp"
    break;

  case 322: /* cond_parentheses_arglist: %empty  */
#line 1704 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4958 "parser.tab.cpp"
    break;

  case 323: /* arglist: argument close_comma_argument cond_comma  */
#line 1708 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "ArgList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4970 "parser.tab.cpp"
    break;

  case 324: /* close_comma_argument: close_comma_argument ',' argument  */
#line 1716 "parser.y"
                                                        {
        (yyval.ptr) = new node("nt", "CloseCommaArgument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 4982 "parser.tab.cpp"
    break;

  case 325: /* close_comma_argument: %empty  */
#line 1722 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 4990 "parser.tab.cpp"
    break;

  case 326: /* argument: test comp_for  */
#line 1735 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5001 "parser.tab.cpp"
    break;

  case 327: /* argument: test  */
#line 1741 "parser.y"
         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5009 "parser.tab.cpp"
    break;

  case 328: /* argument: test '=' test  */
#line 1744 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr)); 
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5021 "parser.tab.cpp"
    break;

  case 329: /* argument: POW test  */
#line 1751 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5032 "parser.tab.cpp"
    break;

  case 330: /* argument: '*' test  */
#line 1757 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5043 "parser.tab.cpp"
    break;

  case 331: /* comp_iter: comp_for  */
#line 1764 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);    
    }
#line 5051 "parser.tab.cpp"
    break;

  case 332: /* comp_iter: comp_if  */
#line 1766 "parser.y"
                {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5059 "parser.tab.cpp"
    break;

  case 333: /* comp_for: cond_async FOR exprlist IN or_test comp_iter  */
#line 1769 "parser.y"
                                                       {
        (yyval.ptr) = new node("nt", "comp_for");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5074 "parser.tab.cpp"
    break;

  case 334: /* cond_async: ASYNC  */
#line 1779 "parser.y"
                  {  
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5082 "parser.tab.cpp"
    break;

  case 335: /* cond_async: %empty  */
#line 1781 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5090 "parser.tab.cpp"
    break;

  case 336: /* comp_if: IF test_nocond  */
#line 1786 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "comp_if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5101 "parser.tab.cpp"
    break;

  case 337: /* comp_if: IF test_nocond comp_iter  */
#line 1791 "parser.y"
                                 {
        (yyval.ptr) = new node("nt", "comp_if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5113 "parser.tab.cpp"
    break;

  case 338: /* yield_expr: YIELD yield_arg  */
#line 1804 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "YieldExpression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5124 "parser.tab.cpp"
    break;

  case 339: /* yield_expr: YIELD  */
#line 1810 "parser.y"
            {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5132 "parser.tab.cpp"
    break;

  case 340: /* yield_arg: FROM test  */
#line 1814 "parser.y"
                     {
        (yyval.ptr) = new node("nt", "YieldArguments");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5143 "parser.tab.cpp"
    break;

  case 341: /* yield_arg: testlist  */
#line 1820 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5151 "parser.tab.cpp"
    break;


#line 5155 "parser.tab.cpp"

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

#line 1824 "parser.y"



int main(int argc, char *argv[]){
    /* yydebug = 1  */
    indents.push(0);
    yyparse();
}
