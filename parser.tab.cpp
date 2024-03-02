/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 28 "parser.y"

    #include "node.hpp"
    AST ast;
    #define PARSER

#line 73 "parser.tab.cpp"



/* First part of user prologue.  */
#line 11 "parser.y"

      extern int yylex();
      extern int yylineno;
      void yyerror(char * s){
        printf("Error! Line Number %d, message: %s\n", yylineno, s);
      }
      void yyerror(string s){
        printf("Error! Line Number %d, message: %s\n", yylineno, s.c_str());
      }

#line 89 "parser.tab.cpp"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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
#line 22 "parser.y"

    #ifndef PARSER
    #include "node.hpp"
    #endif

#line 138 "parser.tab.cpp"

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
typedef data YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */



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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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

#define YYUNDEFTOK  2
#define YYMAXUTOK   323


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
       0,   103,   103,   124,   128,   133,   152,   160,   163,   166,
     173,   176,   179,   182,   189,   195,   198,   202,   206,   212,
     223,   229,   232,   243,   245,   249,   257,   267,   276,   280,
     292,   295,   305,   314,   317,   325,   328,   337,   340,   343,
     346,   351,   363,   371,   381,   390,   394,   404,   407,   410,
     413,   424,   433,   436,   440,   452,   455,   463,   467,   469,
     472,   481,   490,   493,   500,   503,   505,   508,   511,   514,
     517,   520,   523,   526,   532,   536,   539,   543,   546,   555,
     558,   567,   575,   578,   580,   582,   586,   593,   596,   599,
     608,   611,   616,   619,   628,   637,   646,   655,   664,   673,
     682,   691,   700,   709,   718,   727,   737,   747,   756,   759,
     762,   765,   768,   772,   782,   792,   803,   805,   808,   811,
     821,   825,   831,   835,   838,   841,   853,   862,   868,   875,
     883,   896,   903,   912,   921,   929,   939,   942,   946,   955,
     973,   978,   993,  1001,  1012,  1016,  1024,  1034,  1038,  1049,
    1062,  1066,  1079,  1094,  1109,  1113,  1123,  1141,  1143,  1145,
    1147,  1149,  1151,  1153,  1155,  1157,  1161,  1173,  1175,  1177,
    1181,  1201,  1216,  1220,  1237,  1241,  1257,  1285,  1307,  1342,
    1352,  1364,  1371,  1375,  1382,  1392,  1403,  1410,  1414,  1419,
    1429,  1437,  1442,  1449,  1453,  1457,  1465,  1469,  1475,  1483,
    1487,  1492,  1496,  1502,  1509,  1517,  1524,  1532,  1539,  1545,
    1549,  1556,  1562,  1566,  1573,  1578,  1582,  1589,  1595,  1603,
    1607,  1611,  1615,  1619,  1623,  1627,  1631,  1635,  1640,  1644,
    1651,  1658,  1664,  1670,  1674,  1681,  1687,  1691,  1698,  1704,
    1708,  1715,  1719,  1725,  1731,  1735,  1742,  1748,  1754,  1758,
    1765,  1769,  1773,  1777,  1781,  1787,  1793,  1797,  1804,  1809,
    1814,  1818,  1822,  1828,  1834,  1840,  1846,  1853,  1858,  1867,
    1873,  1879,  1887,  1893,  1898,  1902,  1906,  1910,  1914,  1918,
    1922,  1928,  1932,  1936,  1940,  1944,  1951,  1956,  1964,  1970,
    1976,  1984,  1992,  1998,  2002,  2006,  2015,  2019,  2024,  2028,
    2032,  2037,  2043,  2051,  2055,  2061,  2067,  2071,  2079,  2085,
    2091,  2096,  2102,  2108,  2115,  2121,  2125,  2129,  2136,  2141,
    2149,  2159,  2165,  2169,  2177,  2183,  2196,  2202,  2207,  2216,
    2224,  2233,  2236,  2240,  2250,  2254,  2259,  2264,  2279,  2285,
    2291,  2297
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NEWLINE", "ENDMARKER", "ASYNC", "NAME",
  "DEL", "PASS", "BREAK", "CONTINUE", "RETURN", "RAISE", "FROM", "IMPORT",
  "AS", "GLOBAL", "NONLOCAL", "ASSERT", "IF", "ELIF", "ELSE", "FOR", "IN",
  "WHILE", "TRY", "FINALLY", "WITH", "EXCEPT", "LAMBDA", "NOT", "OR",
  "AND", "AWAIT", "IS", "INDENT", "DEDENT", "YIELD", "TRUE", "NUMBER",
  "STRING", "FALSE", "NONE", "CLASS", "DEF", "ARROWOP", "POW", "ADDASSIGN",
  "SUBASSIGN", "MULASSIGN", "ATASSIGN", "DIVASSIGN", "MODASSIGN",
  "ANDASSIGN", "ORASSIGN", "XORASSIGN", "LSASSIGN", "RSASSIGN",
  "POWASSIGN", "IDIVASSIGN", "ELLIPSIS", "EQUAL", "GEQ", "LEQ", "LTORGT",
  "NEQ", "LEFTSHIFT", "RIGHTSHIFT", "IDIV", "'@'", "'('", "')'", "':'",
  "'*'", "','", "';'", "'='", "'.'", "'<'", "'>'", "'|'", "'^'", "'&'",
  "'+'", "'-'", "'/'", "'%'", "'~'", "'['", "']'", "'{'", "'}'", "$accept",
  "file_input", "nstatement", "decorator", "cond_brack_cond_arglist",
  "brack_cond_arglist", "cond_arglist", "decorators", "decorated", "defob",
  "async_funcdef", "funcdef", "cond_arrowtest", "parameters",
  "cond_typedargslist", "typedargslist", "conds_comma_startfpdefcondcomma",
  "cond_star_or_startstar", "cond_comma_or_condstarorstartstar",
  "close_comma_tfpdef_condeqtest", "cond_tfpdef", "tfpdef", "varargslist",
  "vfpdef", "close_comma_vfpdef_condeqtest", "cond_vfpdef",
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
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    64,
      40,    41,    58,    42,    44,    59,    61,    46,    60,    62,
     124,    94,    38,    43,    45,    47,    37,   126,    91,    93,
     123,   125
};
# endif

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
      -1,     1,     2,    29,   211,   212,   293,    30,    31,   122,
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

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
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

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
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

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
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


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 103 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "file_input");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1855 "parser.tab.cpp"
    break;

  case 3:
#line 124 "parser.y"
                               {
    (yyval.ptr) = new node("nt", "nstatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 1865 "parser.tab.cpp"
    break;

  case 4:
#line 128 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "nstatement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1876 "parser.tab.cpp"
    break;

  case 5:
#line 133 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 1884 "parser.tab.cpp"
    break;

  case 6:
#line 152 "parser.y"
                                                           {
    (yyval.ptr) = new node("nt", "decorator");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1897 "parser.tab.cpp"
    break;

  case 7:
#line 160 "parser.y"
                                            {
    (yyval.ptr) = (yyvsp[0].ptr);    
}
#line 1905 "parser.tab.cpp"
    break;

  case 8:
#line 163 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1913 "parser.tab.cpp"
    break;

  case 9:
#line 166 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "enclosed arg list");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1925 "parser.tab.cpp"
    break;

  case 10:
#line 173 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1933 "parser.tab.cpp"
    break;

  case 11:
#line 176 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1941 "parser.tab.cpp"
    break;

  case 12:
#line 179 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1949 "parser.tab.cpp"
    break;

  case 13:
#line 182 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "decorators");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1960 "parser.tab.cpp"
    break;

  case 14:
#line 189 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "decorated");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1971 "parser.tab.cpp"
    break;

  case 15:
#line 195 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1979 "parser.tab.cpp"
    break;

  case 16:
#line 198 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);

}
#line 1988 "parser.tab.cpp"
    break;

  case 17:
#line 202 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);

     }
#line 1997 "parser.tab.cpp"
    break;

  case 18:
#line 206 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Async Function Def");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2008 "parser.tab.cpp"
    break;

  case 19:
#line 212 "parser.y"
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
#line 2024 "parser.tab.cpp"
    break;

  case 20:
#line 223 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "cond_arrowtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2035 "parser.tab.cpp"
    break;

  case 21:
#line 229 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2043 "parser.tab.cpp"
    break;

  case 22:
#line 232 "parser.y"
                                       {
    // $<ptr>1 = new node("DELIMITER", "(");
    // $<ptr>3 = new node("DELIMITER", ")");
    (yyval.ptr) = new node("nt", "parameters");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    // ast.add_node($<ptr>3);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2059 "parser.tab.cpp"
    break;

  case 23:
#line 243 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2067 "parser.tab.cpp"
    break;

  case 24:
#line 245 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 2075 "parser.tab.cpp"
    break;

  case 25:
#line 249 "parser.y"
                                                                                                 {
    (yyval.ptr) = new node("nt", "typedargslist");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2088 "parser.tab.cpp"
    break;

  case 26:
#line 257 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "typedargslist");
    // $<ptr>1 = new node("DELIMITER", "*");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2103 "parser.tab.cpp"
    break;

  case 27:
#line 267 "parser.y"
                          {
    // $<ptr>1 = new node("DELIMITER", "**");
    (yyval.ptr) = new node("nt", "typedargslist");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2117 "parser.tab.cpp"
    break;

  case 28:
#line 276 "parser.y"
                                     {
        // $<ptr>1 = new node("DELIMITER", ",");
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2126 "parser.tab.cpp"
    break;

  case 29:
#line 280 "parser.y"
                                {
        (yyval.ptr) = new node("nt", "conds_comma_startfpdefcondcomma");
        // $<ptr>1 = new node("DELIMITER", ",");
        // $<ptr>2 = new node("DELIMTIER", "**");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        // ast.add_node($<ptr>2);
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2143 "parser.tab.cpp"
    break;

  case 30:
#line 292 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2151 "parser.tab.cpp"
    break;

  case 31:
#line 295 "parser.y"
                                                                                                      {
            // $<ptr>1 = new node("DELIMITER", "*");
            (yyval.ptr) = new node("nt", "cond_start_or_starstar");
            // ast.add_node($<ptr>1);
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2166 "parser.tab.cpp"
    break;

  case 32:
#line 305 "parser.y"
                              {
        // $<ptr>1 = new node("OPERATOR", "**");
        (yyval.ptr) = new node("nt", "cond_star_or_startstar");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2180 "parser.tab.cpp"
    break;

  case 33:
#line 314 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2188 "parser.tab.cpp"
    break;

  case 34:
#line 317 "parser.y"
                                                              {
        // $<ptr>1 = new node("DELIMITER", ",");
        (yyval.ptr) = new node("nt", "cond_comma_or_constartortarstar");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2201 "parser.tab.cpp"
    break;

  case 35:
#line 325 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2209 "parser.tab.cpp"
    break;

  case 36:
#line 328 "parser.y"
                                                                                    {
    // $<ptr>2 = new node("DELIMITER", ",");
    (yyval.ptr) = new node("nt", "close_comma_tfpdef_condeqtest");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>2);
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 2223 "parser.tab.cpp"
    break;

  case 37:
#line 337 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2231 "parser.tab.cpp"
    break;

  case 38:
#line 340 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2239 "parser.tab.cpp"
    break;

  case 39:
#line 343 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2247 "parser.tab.cpp"
    break;

  case 40:
#line 346 "parser.y"
             {
    // $<ptr>1 = new node("IDENTIFIER", $<val>1);
    ast.add_node((yyvsp[0].ptr));
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2257 "parser.tab.cpp"
    break;

  case 41:
#line 351 "parser.y"
                {
    // $<ptr>1 = new node("IDENTIFIER", $<val>1);
    // $<ptr>2 = new node("DELIMITER", ":");
    (yyval.ptr) = new node("nt", "tfpdef");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    // ast.add_node($<ptr>2);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2273 "parser.tab.cpp"
    break;

  case 42:
#line 363 "parser.y"
                                                                                                  {
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2286 "parser.tab.cpp"
    break;

  case 43:
#line 371 "parser.y"
                                                                                  {
    // $<ptr>1 = new node("DELIMITER", "*");
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2301 "parser.tab.cpp"
    break;

  case 44:
#line 381 "parser.y"
                          {
    // $<ptr>1 = new node("OPERATOR", "**");
    (yyval.ptr) = new node("nt", "VarArgs");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2315 "parser.tab.cpp"
    break;

  case 45:
#line 390 "parser.y"
             {
    // $<ptr>1 = new node("IDENTIFIER", $<val>1);
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2324 "parser.tab.cpp"
    break;

  case 46:
#line 394 "parser.y"
                                                                                    {
    // $<ptr>2 = new node("DELIMITER", ",");
    (yyval.ptr) = new node("nt", "close_comma_vfpdef_condeqtest");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>2);
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2339 "parser.tab.cpp"
    break;

  case 47:
#line 404 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2347 "parser.tab.cpp"
    break;

  case 48:
#line 407 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2355 "parser.tab.cpp"
    break;

  case 49:
#line 410 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2363 "parser.tab.cpp"
    break;

  case 50:
#line 414 "parser.y"
        {
            (yyval.ptr) = new node("nt", "cond_star_or_startstar_vf");
            // $<ptr>1 = new node("DELIMITER", "*");
            ast.add_node((yyval.ptr));
            // ast.add_node($<ptr>1);
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2378 "parser.tab.cpp"
    break;

  case 51:
#line 424 "parser.y"
                              {
        // $<ptr>1 = new node("OPERATOR", "**");
        (yyval.ptr) = new node("nt", "cond_star_or_startstar_vf");
        // ast.add_node($<ptr>1);
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2392 "parser.tab.cpp"
    break;

  case 52:
#line 433 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2400 "parser.tab.cpp"
    break;

  case 53:
#line 436 "parser.y"
                                     {
    // $<ptr>1 = new node("DELIMITER", ",");
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2409 "parser.tab.cpp"
    break;

  case 54:
#line 440 "parser.y"
                            {
        // $<ptr>1 = new node("DELIMITER", ",");
        // $<ptr>2 = new node("OPERATOR", "**");
        (yyval.ptr) = new node("nt", "conds_comma_starvfpdefcondcomma");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        // ast.add_node($<ptr>2);
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2426 "parser.tab.cpp"
    break;

  case 55:
#line 452 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2434 "parser.tab.cpp"
    break;

  case 56:
#line 455 "parser.y"
                                                                   {
    // $<ptr>1 = new node("DELIMITER", ",");
    (yyval.ptr) = new node("nt", "comma or starstar");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2447 "parser.tab.cpp"
    break;

  case 57:
#line 463 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2455 "parser.tab.cpp"
    break;

  case 58:
#line 467 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2463 "parser.tab.cpp"
    break;

  case 59:
#line 469 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2471 "parser.tab.cpp"
    break;

  case 60:
#line 472 "parser.y"
                                                                 {
        // $<ptr>4 = new node("NEWLINE", "NEWLINE");
        // ast.add_node($<ptr>4);
        (yyval.ptr) = new node("nt", "simple_stmt");
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2485 "parser.tab.cpp"
    break;

  case 61:
#line 481 "parser.y"
                                                  {
        // $<ptr>2 = new node("DELIMITER", ";");
        (yyval.ptr) = new node("nt", "close_small_stmt");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>2);
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2499 "parser.tab.cpp"
    break;

  case 62:
#line 490 "parser.y"
          {
            (yyval.ptr) = NULL;
        }
#line 2507 "parser.tab.cpp"
    break;

  case 63:
#line 493 "parser.y"
                     {
        // $<ptr>1 = new node("DELIMITER", ";");
        (yyval.ptr) = new node("nt", "Cond_semicolon");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyval.ptr));
    }
#line 2519 "parser.tab.cpp"
    break;

  case 64:
#line 500 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2527 "parser.tab.cpp"
    break;

  case 65:
#line 503 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2535 "parser.tab.cpp"
    break;

  case 66:
#line 505 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2543 "parser.tab.cpp"
    break;

  case 67:
#line 508 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2551 "parser.tab.cpp"
    break;

  case 68:
#line 511 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2559 "parser.tab.cpp"
    break;

  case 69:
#line 514 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2567 "parser.tab.cpp"
    break;

  case 70:
#line 517 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2575 "parser.tab.cpp"
    break;

  case 71:
#line 520 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2583 "parser.tab.cpp"
    break;

  case 72:
#line 523 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
  }
#line 2591 "parser.tab.cpp"
    break;

  case 73:
#line 526 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "expr_statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2602 "parser.tab.cpp"
    break;

  case 74:
#line 532 "parser.y"
                          {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2610 "parser.tab.cpp"
    break;

  case 75:
#line 536 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2618 "parser.tab.cpp"
    break;

  case 76:
#line 539 "parser.y"
                               {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2626 "parser.tab.cpp"
    break;

  case 77:
#line 543 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2634 "parser.tab.cpp"
    break;

  case 78:
#line 546 "parser.y"
                                                                          {
                    (yyval.ptr) = new node("nt", "close_yield_or_test_star");
                    // $<ptr>2 = new node("DELIMITER", "=");
                    ast.add_node((yyval.ptr));
                    // ast.add_node($<ptr>2);
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
            }
#line 2648 "parser.tab.cpp"
    break;

  case 79:
#line 555 "parser.y"
                          {
                            (yyval.ptr) = NULL;
                        }
#line 2656 "parser.tab.cpp"
    break;

  case 80:
#line 558 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "annasign");
    // $<ptr>1 = new node("DELIMITER", ":");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>1);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2670 "parser.tab.cpp"
    break;

  case 81:
#line 567 "parser.y"
                      {
        (yyval.ptr) = new node("nt", "cond_eqtest");
        // $<ptr>1 = new node("OPERATOR", "=");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2683 "parser.tab.cpp"
    break;

  case 82:
#line 575 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2691 "parser.tab.cpp"
    break;

  case 83:
#line 578 "parser.y"
                                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2699 "parser.tab.cpp"
    break;

  case 84:
#line 580 "parser.y"
                            {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 2707 "parser.tab.cpp"
    break;

  case 85:
#line 582 "parser.y"
                             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2715 "parser.tab.cpp"
    break;

  case 86:
#line 586 "parser.y"
                                                                          {
    (yyval.ptr) = new node("nt", "testlist star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2727 "parser.tab.cpp"
    break;

  case 87:
#line 593 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2735 "parser.tab.cpp"
    break;

  case 88:
#line 596 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2743 "parser.tab.cpp"
    break;

  case 89:
#line 599 "parser.y"
                                                                           {
    // $<ptr>2 = new node("Delimiter", ",");
    (yyval.ptr) = new node("nt", "close_commatest_or_starexp");
    ast.add_node((yyval.ptr));
    // ast.add_node($<ptr>2);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2757 "parser.tab.cpp"
    break;

  case 90:
#line 608 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2765 "parser.tab.cpp"
    break;

  case 91:
#line 611 "parser.y"
               {
    // $<ptr>1 = new node("Delimiter", ",");
    // ast.add_node($<ptr>1);
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2775 "parser.tab.cpp"
    break;

  case 92:
#line 616 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2783 "parser.tab.cpp"
    break;

  case 93:
#line 619 "parser.y"
                    {
            auto p = new node("nt", "Operator");
            // auto anode = new node("OPERATOR", "+=");
            ast.add_node(p);
            // ast.add_node(anode);
            ast.add_edge(p, (yyvsp[0].ptr));
            (yyval.ptr) = p;
            // $<ptr>1 = anode;
        }
#line 2797 "parser.tab.cpp"
    break;

  case 94:
#line 628 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "-=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2811 "parser.tab.cpp"
    break;

  case 95:
#line 637 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "*=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2825 "parser.tab.cpp"
    break;

  case 96:
#line 646 "parser.y"
                       {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "@=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2839 "parser.tab.cpp"
    break;

  case 97:
#line 655 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "/=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2853 "parser.tab.cpp"
    break;

  case 98:
#line 664 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                auto anode = new node("OPERATOR", "%=");
                ast.add_node(p);
                ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                (yyvsp[0].ptr) = anode;
            }
#line 2867 "parser.tab.cpp"
    break;

  case 99:
#line 673 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                auto anode = new node("OPERATOR", "&=");
                ast.add_node(p);
                ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                (yyvsp[0].ptr) = anode;
            }
#line 2881 "parser.tab.cpp"
    break;

  case 100:
#line 682 "parser.y"
                       {
                auto p = new node("nt", "Operator");
                auto anode = new node("OPERATOR", "|=");
                ast.add_node(p);
                ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                (yyvsp[0].ptr) = anode;
            }
#line 2895 "parser.tab.cpp"
    break;

  case 101:
#line 691 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "^=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2909 "parser.tab.cpp"
    break;

  case 102:
#line 700 "parser.y"
                       {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "<<=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2923 "parser.tab.cpp"
    break;

  case 103:
#line 709 "parser.y"
                       {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", ">>=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2937 "parser.tab.cpp"
    break;

  case 104:
#line 718 "parser.y"
                        {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "**=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2951 "parser.tab.cpp"
    break;

  case 105:
#line 727 "parser.y"
                         {
                auto p = new node("nt", "Operator");
                // auto anode = new node("OPERATOR", "//=");
                ast.add_node(p);
                // ast.add_node(anode);
                ast.add_edge(p, (yyvsp[0].ptr));
                (yyval.ptr) = p;
                // $<ptr>1 = anode;
            }
#line 2965 "parser.tab.cpp"
    break;

  case 106:
#line 737 "parser.y"
                       {
    auto p = new node("nt", "DelStatement");
    // auto delnode = new node("KEYWORD", "DEL");
    ast.add_node(p);
    // ast.add_node(delnode);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = delnode;
}
#line 2980 "parser.tab.cpp"
    break;

  case 107:
#line 747 "parser.y"
               {
    auto p = new node("nt", "PassStatement");
    // auto pnode = new node("KEYWORD", "PASS");
    ast.add_node(p);
    // ast.add_node(pnode);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = pnode;
}
#line 2994 "parser.tab.cpp"
    break;

  case 108:
#line 756 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 3002 "parser.tab.cpp"
    break;

  case 109:
#line 759 "parser.y"
                        {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 3010 "parser.tab.cpp"
    break;

  case 110:
#line 762 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 3018 "parser.tab.cpp"
    break;

  case 111:
#line 765 "parser.y"
                     {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 3026 "parser.tab.cpp"
    break;

  case 112:
#line 768 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 3034 "parser.tab.cpp"
    break;

  case 113:
#line 772 "parser.y"
                  {
    auto p = new node("nt", "BreakStatement");
    ast.add_node(p);
    // auto p1 = new node("KEYWORD", "break");
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3048 "parser.tab.cpp"
    break;

  case 114:
#line 782 "parser.y"
                        {
    auto p = new node("nt", "ContinueStatement");
    ast.add_node(p);
    // auto p1 = new node("KEYWORD", "continue");
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3062 "parser.tab.cpp"
    break;

  case 115:
#line 792 "parser.y"
                                 {
    auto p = new node("nt", "ReturnStatement");
    // auto rnode = new node("KEYWORD", "continue");
    ast.add_node(p);
    // ast.add_node(rnode);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = rnode;
}
#line 3077 "parser.tab.cpp"
    break;

  case 116:
#line 803 "parser.y"
                       {
      (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3085 "parser.tab.cpp"
    break;

  case 117:
#line 805 "parser.y"
    {
      (yyval.ptr) = nullptr;
}
#line 3093 "parser.tab.cpp"
    break;

  case 118:
#line 808 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3101 "parser.tab.cpp"
    break;

  case 119:
#line 811 "parser.y"
                                {
    auto p = new node("nt", "RaiseStatement");
    // auto rnode = new node("KEYWORD", "raise");
    ast.add_node(p);
    // ast.add_node(rnode);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = rnode;
}
#line 3116 "parser.tab.cpp"
    break;

  case 120:
#line 821 "parser.y"
                     {
    (yyval.ptr) = new node("nt", "cond_from_test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3126 "parser.tab.cpp"
    break;

  case 121:
#line 825 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "cond_from_test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3138 "parser.tab.cpp"
    break;

  case 122:
#line 831 "parser.y"
   {    
    (yyval.ptr) = nullptr;
}
#line 3146 "parser.tab.cpp"
    break;

  case 123:
#line 835 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3154 "parser.tab.cpp"
    break;

  case 124:
#line 838 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3162 "parser.tab.cpp"
    break;

  case 125:
#line 841 "parser.y"
                                   {
    // 
    auto p = new node("nt", "ImportStatement");
    // auto inode = new node("KEYWORD", "import");
    ast.add_node(p);
    // ast.add_node(inode);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = inode;
}
#line 3178 "parser.tab.cpp"
    break;

  case 126:
#line 853 "parser.y"
                                                                                                         {
                    (yyval.ptr) = new node("nt", "import_from");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
            }
#line 3191 "parser.tab.cpp"
    break;

  case 127:
#line 862 "parser.y"
                                                                             {
    // 
    (yyval.ptr) = new node("nt", "closeplusdotorellipsisname_or_plusdotellip");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3203 "parser.tab.cpp"
    break;

  case 128:
#line 868 "parser.y"
                         {
    auto p = new node("nt", "ImportFromStatement");
    ast.add_node(p);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
}
#line 3214 "parser.tab.cpp"
    break;

  case 129:
#line 875 "parser.y"
                                         {
    auto p = new node("nt", "star_or_import_parentheses_or_import");
    // auto p1 = new node("KEYWORD", "*");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3228 "parser.tab.cpp"
    break;

  case 130:
#line 883 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "star_or_import_parentheses_or_import");
    // auto p1 = new node("KEYWORD", "(");
    // auto p3 = new node("KEYWORD", ")");
    ast.add_node((yyval.ptr));
    // ast.add_node(p1);
    // ast.add_node(p3);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
    // ast.add_edge($<ptr>$, $<ptr>3);
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
}
#line 3247 "parser.tab.cpp"
    break;

  case 131:
#line 896 "parser.y"
                   {
    auto p = new node("nt", "star_or_import_parentheses_or_import");
    ast.add_node(p);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
}
#line 3258 "parser.tab.cpp"
    break;

  case 132:
#line 903 "parser.y"
                                              {
    // 
    auto p = new node("nt", "plus_dot_or_ellipsis");
    // auto p1 = new node("KEYWORD", ".");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
}
#line 3273 "parser.tab.cpp"
    break;

  case 133:
#line 912 "parser.y"
                                 {
    auto p = new node("nt", "plus_dot_or_ellipsis");
    // auto p1 = new node("Delimiter", "...");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3288 "parser.tab.cpp"
    break;

  case 134:
#line 921 "parser.y"
       {
    auto p = new node("nt", "plus_dot_or_ellipsis");
    // auto p1 = new node("Delimiter", ".");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3302 "parser.tab.cpp"
    break;

  case 135:
#line 929 "parser.y"
            {
    auto p = new node("nt", "plus_dot_or_ellipsis");
    // auto p1 = new node("Delimiter", "...");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3316 "parser.tab.cpp"
    break;

  case 136:
#line 939 "parser.y"
                                           {
    // 
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3325 "parser.tab.cpp"
    break;

  case 137:
#line 942 "parser.y"
    {
    (yyval.ptr) = nullptr;
}
#line 3333 "parser.tab.cpp"
    break;

  case 138:
#line 946 "parser.y"
                    {
    // 
    auto p = new node("nt", "ImportAsName");
    // auto p1 = new node("IDENTIFIER", $<val>1);
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3348 "parser.tab.cpp"
    break;

  case 139:
#line 955 "parser.y"
                {
    (yyval.ptr) = new node("nt", "ImportAsName");
    // auto p1 = new node("IDENTIFIER", $<val>1);
    // auto p2 = new node("KEYWORD", "as");
    // auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node((yyval.ptr));
    // ast.add_node(p1);
    // ast.add_node(p2);
    // ast.add_node(p3);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
    // $<ptr>$ = p;
    // $<ptr>1 = p1;
    // $<ptr>2 = p2;
    // $<ptr>3 = p3;
}
#line 3370 "parser.tab.cpp"
    break;

  case 140:
#line 973 "parser.y"
                           {
    auto p = new node("nt", "DottedAsName");
    ast.add_node(p);
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
}
#line 3381 "parser.tab.cpp"
    break;

  case 141:
#line 978 "parser.y"
                       {
    auto p = new node("nt", "DottedAsName");
    // auto p1 = new node("KEYWORD", "as");
    // auto p2 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p2);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>2 = p2;
}
#line 3400 "parser.tab.cpp"
    break;

  case 142:
#line 993 "parser.y"
                                                                  {
    (yyval.ptr) = new node("nt", "ImportAsNames");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr)); 
}
#line 3412 "parser.tab.cpp"
    break;

  case 143:
#line 1001 "parser.y"
                                                                   {
    // 
    auto p = new node("nt", "CloseCommaImportAsName");
    // auto p2 = new node("Delimiter", ",");
    ast.add_node(p);
    // ast.add_node(p2);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>2 = p1;
}
#line 3429 "parser.tab.cpp"
    break;

  case 144:
#line 1012 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3437 "parser.tab.cpp"
    break;

  case 145:
#line 1016 "parser.y"
                                                       {
    auto p = new node("nt", "DottedAsNames");
    ast.add_node(p);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
}
#line 3449 "parser.tab.cpp"
    break;

  case 146:
#line 1024 "parser.y"
                                                                   {
    auto p = new node("nt", "CloseCommaDottedAsName");
    // auto p2 = new node("Delimiter", ",");
    ast.add_node(p);
    // ast.add_node(p2);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>2 = p1;
}
#line 3465 "parser.tab.cpp"
    break;

  case 147:
#line 1034 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3473 "parser.tab.cpp"
    break;

  case 148:
#line 1038 "parser.y"
                                   {
    auto p = new node("nt", "DottedName");
    // auto p1 = new node("IDENTIFIER", $<val>1);
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3488 "parser.tab.cpp"
    break;

  case 149:
#line 1049 "parser.y"
                                             {
    auto p = new node("nt", "CloseDottedName");
    // auto p2 = new node("Delimiter", ".");
    // auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    // ast.add_node(p2);
    // ast.add_node(p3);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>2 = p2;
    // $<ptr>3 = p3;
}
#line 3507 "parser.tab.cpp"
    break;

  case 150:
#line 1062 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3515 "parser.tab.cpp"
    break;

  case 151:
#line 1066 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "GlobalStatement");
    // auto p1 = new node("KEYWORD", "global");
    // auto p2 = new node("IDENTIFIER", $<val>2);
    ast.add_node((yyval.ptr));
    // ast.add_node(p1);
    // ast.add_node(p2);
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    // $<ptr>1 = p1;
    // $<ptr>2 = p2;
}
#line 3533 "parser.tab.cpp"
    break;

  case 152:
#line 1079 "parser.y"
                                             {
    auto p = new node("nt", "NonlocalStatement");
    // auto p1 = new node("KEYWORD", "nonlocal");
    // auto p2 = new node("IDENTIFIER", $<val>2);
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p2);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p2);
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>2 = p2;
}
#line 3553 "parser.tab.cpp"
    break;

  case 153:
#line 1094 "parser.y"
                                           {
    auto p = new node("nt", "CloseCommaName");
    // auto p2 = new node("Delimiter", ",");
    // auto p3 = new node("IDENTIFIER", $<val>3);
    ast.add_node(p);
    // ast.add_node(p2);
    // ast.add_node(p3);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    // ast.add_edge(p, p2);
    // ast.add_edge(p, p3);
    (yyval.ptr) = p;
    // $<ptr>2 = p2;
    // $<ptr>3 = p3;
}
#line 3574 "parser.tab.cpp"
    break;

  case 154:
#line 1109 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3582 "parser.tab.cpp"
    break;

  case 155:
#line 1113 "parser.y"
                        {
    auto p = new node("nt", "AssertStatement");
    // auto p1 = new node("KEYWORD", "assert");
    ast.add_node(p);
    // ast.add_node(p1);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    // ast.add_edge(p, p1);
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
}
#line 3598 "parser.tab.cpp"
    break;

  case 156:
#line 1123 "parser.y"
                        {
    auto p = new node("nt", "AssertStatement");
    // auto p1 = new node("KEYWORD", "assert");
    // auto p3 = new node("KEYWORD", ",");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
}
#line 3620 "parser.tab.cpp"
    break;

  case 157:
#line 1141 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3628 "parser.tab.cpp"
    break;

  case 158:
#line 1143 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3636 "parser.tab.cpp"
    break;

  case 159:
#line 1145 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3644 "parser.tab.cpp"
    break;

  case 160:
#line 1147 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3652 "parser.tab.cpp"
    break;

  case 161:
#line 1149 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3660 "parser.tab.cpp"
    break;

  case 162:
#line 1151 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3668 "parser.tab.cpp"
    break;

  case 163:
#line 1153 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3676 "parser.tab.cpp"
    break;

  case 164:
#line 1155 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3684 "parser.tab.cpp"
    break;

  case 165:
#line 1157 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3692 "parser.tab.cpp"
    break;

  case 166:
#line 1161 "parser.y"
                                                {
    auto p = new node("nt", "AsyncStatement");
    // auto p1 = new node("KEYWORD", "async");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_edge(p, p1);
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;    
}
#line 3708 "parser.tab.cpp"
    break;

  case 167:
#line 1173 "parser.y"
                                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3716 "parser.tab.cpp"
    break;

  case 168:
#line 1175 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3724 "parser.tab.cpp"
    break;

  case 169:
#line 1177 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3732 "parser.tab.cpp"
    break;

  case 170:
#line 1181 "parser.y"
                                                                    {
    auto p = new node("nt", "IfStatement");
    // auto p1 = new node("KEYWORD", "if");
    // auto p3 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    ast.add_edge(p, (yyvsp[-5].ptr));
    ast.add_edge(p, (yyvsp[-4].ptr));
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
}
#line 3756 "parser.tab.cpp"
    break;

  case 171:
#line 1201 "parser.y"
                                     {
    auto p = new node("nt", "ElseColonSuite");
    // auto p1 = new node("KEYWORD", "else");
    // auto p2 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p2);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p2);
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>2 = p2;
}
#line 3777 "parser.tab.cpp"
    break;

  case 172:
#line 1216 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3785 "parser.tab.cpp"
    break;

  case 173:
#line 1220 "parser.y"
                                                            {
    auto p = new node("nt", "CloseElifTestSuite");
    // auto p2 = new node("KEYWORD", "elif");
    // auto p4 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p2);
    // ast.add_node(p4);
    // ast.add_edge(p, p2);
    // ast.add_edge(p, p4);
    ast.add_edge(p, (yyvsp[-4].ptr));
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>2 = p2;
    // $<ptr>4 = p4;
}
#line 3808 "parser.tab.cpp"
    break;

  case 174:
#line 1237 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3816 "parser.tab.cpp"
    break;

  case 175:
#line 1241 "parser.y"
                                {
    auto p = new node("nt", "WhileStatement");
    // auto p1 = new node("KEYWORD", "while");
    // auto p3 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
}
#line 3838 "parser.tab.cpp"
    break;

  case 176:
#line 1257 "parser.y"
                                       {
    auto p = new node("nt", "WhileStatement");
    // auto p1 = new node("KEYWORD", "while");
    // auto p3 = new node("DELIMITER", ":");
    // auto p5 = new node("KEYWORD", "else");
    // auto p6 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_node(p5);
    // ast.add_node(p6);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    // ast.add_edge(p, p5);
    // ast.add_edge(p, p6);
    ast.add_edge(p, (yyvsp[-6].ptr));
    ast.add_edge(p, (yyvsp[-5].ptr));
    ast.add_edge(p, (yyvsp[-4].ptr));
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
    // $<ptr>5 = p5;
    // $<ptr>6 = p6;
}
#line 3871 "parser.tab.cpp"
    break;

  case 177:
#line 1285 "parser.y"
                                            {
    auto p = new node("nt", "ForStatement");
    // auto p1 = new node("KEYWORD", "for");
    // auto p3 = new node("KEYWORD", "in");
    // auto p5 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_node(p5);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    // ast.add_edge(p, p5);
    ast.add_edge(p, (yyvsp[-5].ptr));
    ast.add_edge(p, (yyvsp[-4].ptr));
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
    // $<ptr>5 = p5;
}
#line 3899 "parser.tab.cpp"
    break;

  case 178:
#line 1307 "parser.y"
                                                     {
    auto p = new node("nt", "ForStatement");
    // auto p1 = new node("KEYWORD", "for");
    // auto p3 = new node("KEYWORD", "in");
    // auto p5 = new node("DELIMITER", ":");
    // auto p7 = new node("KEYWORD", "else");
    // auto p8 = new node("DELIMITER", ":");
    ast.add_node(p);
    // ast.add_node(p1);
    // ast.add_node(p3);
    // ast.add_node(p5);
    // ast.add_node(p7);
    // ast.add_node(p8);
    // ast.add_edge(p, p1);
    // ast.add_edge(p, p3);
    // ast.add_edge(p, p5);
    // ast.add_edge(p, p7);
    // ast.add_edge(p, p8);
    ast.add_edge(p, (yyvsp[-8].ptr));
    ast.add_edge(p, (yyvsp[-7].ptr));
    ast.add_edge(p, (yyvsp[-6].ptr));
    ast.add_edge(p, (yyvsp[-5].ptr));
    ast.add_edge(p, (yyvsp[-4].ptr));
    ast.add_edge(p, (yyvsp[-3].ptr));
    ast.add_edge(p, (yyvsp[-2].ptr));
    ast.add_edge(p, (yyvsp[-1].ptr));
    ast.add_edge(p, (yyvsp[0].ptr));
    (yyval.ptr) = p;
    // $<ptr>1 = p1;
    // $<ptr>3 = p3;
    // $<ptr>5 = p5;
    // $<ptr>7 = p7;
    // $<ptr>8 = p8;

}
#line 3939 "parser.tab.cpp"
    break;

  case 179:
#line 1342 "parser.y"
                                                                                       {
    auto p = new node("nt", "TryStatement");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3955 "parser.tab.cpp"
    break;

  case 180:
#line 1352 "parser.y"
                                   {
    auto p = new node("nt", "TryStatement");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3971 "parser.tab.cpp"
    break;

  case 181:
#line 1364 "parser.y"
                                       {
    auto p = new node("nt", "FinallyColonSuite");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3984 "parser.tab.cpp"
    break;

  case 182:
#line 1371 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3992 "parser.tab.cpp"
    break;

  case 183:
#line 1375 "parser.y"
                                             {
    auto p = new node("nt", "PlusExceptColonSuite");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4005 "parser.tab.cpp"
    break;

  case 184:
#line 1382 "parser.y"
                                                {
    auto p = new node("nt", "PlusExceptColonSuite");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4019 "parser.tab.cpp"
    break;

  case 185:
#line 1392 "parser.y"
                                                        {
    auto p = new node("nt", "WithStatement");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4034 "parser.tab.cpp"
    break;

  case 186:
#line 1403 "parser.y"
                                                      {
    auto p = new node("nt", "CloseCommaWithItem");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4047 "parser.tab.cpp"
    break;

  case 187:
#line 1410 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4055 "parser.tab.cpp"
    break;

  case 188:
#line 1414 "parser.y"
               {
    auto p = new node("nt", "WithItem");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4066 "parser.tab.cpp"
    break;

  case 189:
#line 1419 "parser.y"
                {
    auto p = new node("nt", "WithItem");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4079 "parser.tab.cpp"
    break;

  case 190:
#line 1429 "parser.y"
                                     {
    auto p = new node("nt", "ExceptClause");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4091 "parser.tab.cpp"
    break;

  case 191:
#line 1437 "parser.y"
                     {
    auto p = new node("nt", "CondTestAsName");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4102 "parser.tab.cpp"
    break;

  case 192:
#line 1442 "parser.y"
                {
    auto p = new node("nt", "CondTestAsName");
    ast.add_node(p);
    (yyval.ptr) = p;
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4115 "parser.tab.cpp"
    break;

  case 193:
#line 1449 "parser.y"
   {
    (yyval.ptr) = NULL;
}
#line 4123 "parser.tab.cpp"
    break;

  case 194:
#line 1453 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4133 "parser.tab.cpp"
    break;

  case 195:
#line 1457 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4146 "parser.tab.cpp"
    break;

  case 196:
#line 1465 "parser.y"
               {
    (yyval.ptr) = new node("nt", "PlusStmt");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4156 "parser.tab.cpp"
    break;

  case 197:
#line 1469 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "PlusStmt");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4167 "parser.tab.cpp"
    break;

  case 198:
#line 1475 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4181 "parser.tab.cpp"
    break;

  case 199:
#line 1483 "parser.y"
           {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4191 "parser.tab.cpp"
    break;

  case 200:
#line 1487 "parser.y"
           {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4201 "parser.tab.cpp"
    break;

  case 201:
#line 1492 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "TestNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4211 "parser.tab.cpp"
    break;

  case 202:
#line 1496 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "TestNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4221 "parser.tab.cpp"
    break;

  case 203:
#line 1502 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "LambDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4234 "parser.tab.cpp"
    break;

  case 204:
#line 1509 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "LambDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4246 "parser.tab.cpp"
    break;

  case 205:
#line 1517 "parser.y"
                                                  {
    (yyval.ptr) = new node("nt", "LambDefNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4259 "parser.tab.cpp"
    break;

  case 206:
#line 1524 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "LambDefNoCond");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4271 "parser.tab.cpp"
    break;

  case 207:
#line 1532 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "OrTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4282 "parser.tab.cpp"
    break;

  case 208:
#line 1539 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CloseOrAndTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4294 "parser.tab.cpp"
    break;

  case 209:
#line 1545 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4302 "parser.tab.cpp"
    break;

  case 210:
#line 1549 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "AndTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4313 "parser.tab.cpp"
    break;

  case 211:
#line 1556 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "CloseAndNotTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4325 "parser.tab.cpp"
    break;

  case 212:
#line 1562 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4333 "parser.tab.cpp"
    break;

  case 213:
#line 1566 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "NotTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4344 "parser.tab.cpp"
    break;

  case 214:
#line 1573 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "CloseNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4355 "parser.tab.cpp"
    break;

  case 215:
#line 1578 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4363 "parser.tab.cpp"
    break;

  case 216:
#line 1582 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "Comparison");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4374 "parser.tab.cpp"
    break;

  case 217:
#line 1589 "parser.y"
                                               {
    (yyval.ptr) = new node("nt", "CloseCompOpExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4386 "parser.tab.cpp"
    break;

  case 218:
#line 1595 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4394 "parser.tab.cpp"
    break;

  case 219:
#line 1603 "parser.y"
            {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4404 "parser.tab.cpp"
    break;

  case 220:
#line 1607 "parser.y"
       {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4414 "parser.tab.cpp"
    break;

  case 221:
#line 1611 "parser.y"
         {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4424 "parser.tab.cpp"
    break;

  case 222:
#line 1615 "parser.y"
       {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4434 "parser.tab.cpp"
    break;

  case 223:
#line 1619 "parser.y"
       {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4444 "parser.tab.cpp"
    break;

  case 224:
#line 1623 "parser.y"
          {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4454 "parser.tab.cpp"
    break;

  case 225:
#line 1627 "parser.y"
       {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4464 "parser.tab.cpp"
    break;

  case 226:
#line 1631 "parser.y"
      {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4474 "parser.tab.cpp"
    break;

  case 227:
#line 1635 "parser.y"
          {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4485 "parser.tab.cpp"
    break;

  case 228:
#line 1640 "parser.y"
      {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4495 "parser.tab.cpp"
    break;

  case 229:
#line 1644 "parser.y"
          {
    (yyval.ptr) = new node("nt", "CompOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4506 "parser.tab.cpp"
    break;

  case 230:
#line 1651 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "StarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4517 "parser.tab.cpp"
    break;

  case 231:
#line 1658 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Expr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4528 "parser.tab.cpp"
    break;

  case 232:
#line 1664 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "CloseOrXorExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4540 "parser.tab.cpp"
    break;

  case 233:
#line 1670 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4548 "parser.tab.cpp"
    break;

  case 234:
#line 1674 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "XorExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4559 "parser.tab.cpp"
    break;

  case 235:
#line 1681 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "CloseXorAndExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4571 "parser.tab.cpp"
    break;

  case 236:
#line 1687 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4579 "parser.tab.cpp"
    break;

  case 237:
#line 1691 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "AndExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4590 "parser.tab.cpp"
    break;

  case 238:
#line 1698 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "CloseAndShiftExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4602 "parser.tab.cpp"
    break;

  case 239:
#line 1704 "parser.y"
     {
    (yyval.ptr) = NULL;
}
#line 4610 "parser.tab.cpp"
    break;

  case 240:
#line 1708 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "ShiftExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4621 "parser.tab.cpp"
    break;

  case 241:
#line 1715 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "LeftRightShift");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4631 "parser.tab.cpp"
    break;

  case 242:
#line 1719 "parser.y"
              {
    (yyval.ptr) = new node("nt", "LeftRightShift");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4641 "parser.tab.cpp"
    break;

  case 243:
#line 1725 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "CloseLrsArithExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4653 "parser.tab.cpp"
    break;

  case 244:
#line 1731 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4661 "parser.tab.cpp"
    break;

  case 245:
#line 1735 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "ArithExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4672 "parser.tab.cpp"
    break;

  case 246:
#line 1742 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "ClosePlusMinusTerm");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4684 "parser.tab.cpp"
    break;

  case 247:
#line 1748 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "ClosePlusMinusTerm");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4696 "parser.tab.cpp"
    break;

  case 248:
#line 1754 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4704 "parser.tab.cpp"
    break;

  case 249:
#line 1758 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Term");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4715 "parser.tab.cpp"
    break;

  case 250:
#line 1765 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "GroupMulDivRemOps");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4725 "parser.tab.cpp"
    break;

  case 251:
#line 1769 "parser.y"
       {
    (yyval.ptr) = new node("nt", "GroupMulDivRemOps");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4735 "parser.tab.cpp"
    break;

  case 252:
#line 1773 "parser.y"
       {
    (yyval.ptr) = new node("nt", "GroupMulDivRemOps");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4745 "parser.tab.cpp"
    break;

  case 253:
#line 1777 "parser.y"
       {
    (yyval.ptr) = new node("nt", "GroupMulDivRemOps");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4755 "parser.tab.cpp"
    break;

  case 254:
#line 1781 "parser.y"
        {
    (yyval.ptr) = new node("nt", "GroupMulDivRemOps");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4765 "parser.tab.cpp"
    break;

  case 255:
#line 1787 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "CloseMulDivOpsFactor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4777 "parser.tab.cpp"
    break;

  case 256:
#line 1793 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4785 "parser.tab.cpp"
    break;

  case 257:
#line 1797 "parser.y"
                                        {
    (yyval.ptr) = new node("nt", "Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4796 "parser.tab.cpp"
    break;

  case 258:
#line 1804 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "ClosePlusOrMinusOrNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4807 "parser.tab.cpp"
    break;

  case 259:
#line 1809 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4815 "parser.tab.cpp"
    break;

  case 260:
#line 1814 "parser.y"
                         {
    (yyval.ptr) = new node("nt", "PlusOrMinusOrNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4825 "parser.tab.cpp"
    break;

  case 261:
#line 1818 "parser.y"
       {
    (yyval.ptr) = new node("nt", "PlusOrMinusOrNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4835 "parser.tab.cpp"
    break;

  case 262:
#line 1822 "parser.y"
       {
    (yyval.ptr) = new node("nt", "PlusOrMinusOrNot");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4845 "parser.tab.cpp"
    break;

  case 263:
#line 1828 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Power");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4857 "parser.tab.cpp"
    break;

  case 264:
#line 1834 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Power");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4867 "parser.tab.cpp"
    break;

  case 265:
#line 1840 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "AtomExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4879 "parser.tab.cpp"
    break;

  case 266:
#line 1846 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "AtomExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4890 "parser.tab.cpp"
    break;

  case 267:
#line 1853 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "CloseTrailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4901 "parser.tab.cpp"
    break;

  case 268:
#line 1858 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4909 "parser.tab.cpp"
    break;

  case 269:
#line 1867 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4921 "parser.tab.cpp"
    break;

  case 270:
#line 1873 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4933 "parser.tab.cpp"
    break;

  case 271:
#line 1879 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4947 "parser.tab.cpp"
    break;

  case 272:
#line 1887 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4959 "parser.tab.cpp"
    break;

  case 273:
#line 1893 "parser.y"
            {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4970 "parser.tab.cpp"
    break;

  case 274:
#line 1898 "parser.y"
         {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4980 "parser.tab.cpp"
    break;

  case 275:
#line 1902 "parser.y"
           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4990 "parser.tab.cpp"
    break;

  case 276:
#line 1906 "parser.y"
              {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5000 "parser.tab.cpp"
    break;

  case 277:
#line 1910 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5010 "parser.tab.cpp"
    break;

  case 278:
#line 1914 "parser.y"
         {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5020 "parser.tab.cpp"
    break;

  case 279:
#line 1918 "parser.y"
         {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5030 "parser.tab.cpp"
    break;

  case 280:
#line 1922 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5040 "parser.tab.cpp"
    break;

  case 281:
#line 1928 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "CondYieldOrTestList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5050 "parser.tab.cpp"
    break;

  case 282:
#line 1932 "parser.y"
                 {
    (yyval.ptr) = new node("nt", "CondYieldOrTestList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5060 "parser.tab.cpp"
    break;

  case 283:
#line 1936 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5068 "parser.tab.cpp"
    break;

  case 284:
#line 1940 "parser.y"
                 {
    (yyval.ptr) = new node("nt", "MultiStr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5078 "parser.tab.cpp"
    break;

  case 285:
#line 1944 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "MultiStr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5089 "parser.tab.cpp"
    break;

  case 286:
#line 1951 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "TestListComp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5100 "parser.tab.cpp"
    break;

  case 287:
#line 1956 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "TestListComp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5112 "parser.tab.cpp"
    break;

  case 288:
#line 1964 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5124 "parser.tab.cpp"
    break;

  case 289:
#line 1970 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5136 "parser.tab.cpp"
    break;

  case 290:
#line 1976 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 5148 "parser.tab.cpp"
    break;

  case 291:
#line 1984 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "SubscriptList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5160 "parser.tab.cpp"
    break;

  case 292:
#line 1992 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "CloseCommaSubscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5172 "parser.tab.cpp"
    break;

  case 293:
#line 1998 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5180 "parser.tab.cpp"
    break;

  case 294:
#line 2002 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5190 "parser.tab.cpp"
    break;

  case 295:
#line 2006 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5203 "parser.tab.cpp"
    break;

  case 296:
#line 2015 "parser.y"
                {
    (yyval.ptr) = new node("nt", "CondTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5213 "parser.tab.cpp"
    break;

  case 297:
#line 2019 "parser.y"
    {
    (yyval.ptr) = NULL;

}
#line 5222 "parser.tab.cpp"
    break;

  case 298:
#line 2024 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "CondSliceOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5232 "parser.tab.cpp"
    break;

  case 299:
#line 2028 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5240 "parser.tab.cpp"
    break;

  case 300:
#line 2032 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "SliceOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5251 "parser.tab.cpp"
    break;

  case 301:
#line 2037 "parser.y"
      {
    (yyval.ptr) = new node("nt", "SliceOp");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5261 "parser.tab.cpp"
    break;

  case 302:
#line 2043 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "ExprList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5273 "parser.tab.cpp"
    break;

  case 303:
#line 2051 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "ExprOrStarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5283 "parser.tab.cpp"
    break;

  case 304:
#line 2055 "parser.y"
              {
    (yyval.ptr) = new node("nt", "ExprOrStarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5293 "parser.tab.cpp"
    break;

  case 305:
#line 2061 "parser.y"
                                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaExprOrStarExpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5305 "parser.tab.cpp"
    break;

  case 306:
#line 2067 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5313 "parser.tab.cpp"
    break;

  case 307:
#line 2071 "parser.y"
                                          {
    (yyval.ptr) = new node("nt", "TestList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5325 "parser.tab.cpp"
    break;

  case 308:
#line 2079 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "CloseCommaTest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5337 "parser.tab.cpp"
    break;

  case 309:
#line 2085 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5345 "parser.tab.cpp"
    break;

  case 310:
#line 2091 "parser.y"
                                                                                                {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5356 "parser.tab.cpp"
    break;

  case 311:
#line 2096 "parser.y"
                     {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5366 "parser.tab.cpp"
    break;

  case 312:
#line 2102 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "TestColTestOrStarRexpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5378 "parser.tab.cpp"
    break;

  case 313:
#line 2108 "parser.y"
                 {
    (yyval.ptr) = new node("nt", "TestColTestOrStarRexpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 5388 "parser.tab.cpp"
    break;

  case 314:
#line 2115 "parser.y"
                                                                                                   {
    (yyval.ptr) = new node("nt", "CloseCommaTestColTestOrStarRexpr");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5400 "parser.tab.cpp"
    break;

  case 315:
#line 2121 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5408 "parser.tab.cpp"
    break;

  case 316:
#line 2125 "parser.y"
                                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5418 "parser.tab.cpp"
    break;

  case 317:
#line 2129 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5429 "parser.tab.cpp"
    break;

  case 318:
#line 2136 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "SomeNonTerminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5440 "parser.tab.cpp"
    break;

  case 319:
#line 2141 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "SomeNonTerminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5452 "parser.tab.cpp"
    break;

  case 320:
#line 2149 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "ClassDef");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5466 "parser.tab.cpp"
    break;

  case 321:
#line 2159 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "CondParenthesesArgList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5478 "parser.tab.cpp"
    break;

  case 322:
#line 2165 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5486 "parser.tab.cpp"
    break;

  case 323:
#line 2169 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "ArgList");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5498 "parser.tab.cpp"
    break;

  case 324:
#line 2177 "parser.y"
                                                        {
        (yyval.ptr) = new node("nt", "CloseCommaArgument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5510 "parser.tab.cpp"
    break;

  case 325:
#line 2183 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5518 "parser.tab.cpp"
    break;

  case 326:
#line 2196 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5529 "parser.tab.cpp"
    break;

  case 327:
#line 2202 "parser.y"
         {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5539 "parser.tab.cpp"
    break;

  case 328:
#line 2207 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        (yyvsp[-1].ptr) = new node("DELIMITER", "=");
        ast.add_node((yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr)); 
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5553 "parser.tab.cpp"
    break;

  case 329:
#line 2216 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        // $<ptr>1 = new node("operator", "**");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5566 "parser.tab.cpp"
    break;

  case 330:
#line 2224 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        // $<ptr>1 = new node("operator", "*");
        ast.add_node((yyval.ptr));
        // ast.add_node($<ptr>1);
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5579 "parser.tab.cpp"
    break;

  case 331:
#line 2233 "parser.y"
                    {
        (yyval.ptr) = new node("nt", "comp_for");
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));       
    }
#line 5588 "parser.tab.cpp"
    break;

  case 332:
#line 2236 "parser.y"
                {
        (yyval.ptr) = new node("nt", "comp_for");
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5597 "parser.tab.cpp"
    break;

  case 333:
#line 2240 "parser.y"
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
#line 5612 "parser.tab.cpp"
    break;

  case 334:
#line 2250 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "cond_async");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5622 "parser.tab.cpp"
    break;

  case 335:
#line 2254 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5630 "parser.tab.cpp"
    break;

  case 336:
#line 2259 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "comp_if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5641 "parser.tab.cpp"
    break;

  case 337:
#line 2264 "parser.y"
                                 {
        (yyval.ptr) = new node("nt", "comp_if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5653 "parser.tab.cpp"
    break;

  case 338:
#line 2279 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "YieldExpression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5664 "parser.tab.cpp"
    break;

  case 339:
#line 2285 "parser.y"
            {
        (yyval.ptr) = new node("nt", "YieldExpression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5674 "parser.tab.cpp"
    break;

  case 340:
#line 2291 "parser.y"
                     {
        (yyval.ptr) = new node("nt", "YieldArguments");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5685 "parser.tab.cpp"
    break;

  case 341:
#line 2297 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5693 "parser.tab.cpp"
    break;


#line 5697 "parser.tab.cpp"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2301 "parser.y"



int main(int argc, char *argv[]){

}
