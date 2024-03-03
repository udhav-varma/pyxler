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
#line 33 "parser.y"

    #include "node.hpp"
    AST ast;
    #define PARSER

#line 73 "parser.tab.cpp"



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
#line 27 "parser.y"

    #ifndef PARSER
    #include "node.hpp"
    #endif

#line 142 "parser.tab.cpp"

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
#line 1863 "parser.tab.cpp"
    break;

  case 3:
#line 134 "parser.y"
                               {
    cerr<<"nstatement -> nstatement newline\n";
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1875 "parser.tab.cpp"
    break;

  case 4:
#line 140 "parser.y"
                    {
    cerr<<"nstatement -> nstatement stmt\n";
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1887 "parser.tab.cpp"
    break;

  case 5:
#line 146 "parser.y"
    {
    cerr << "Null rpodsdsdsfds\n";
    (yyval.ptr) = NULL;
}
#line 1896 "parser.tab.cpp"
    break;

  case 6:
#line 166 "parser.y"
                                                           {
    (yyval.ptr) = new node("nt", "decorator");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1909 "parser.tab.cpp"
    break;

  case 7:
#line 174 "parser.y"
                                            {
    (yyval.ptr) = (yyvsp[0].ptr);    
}
#line 1917 "parser.tab.cpp"
    break;

  case 8:
#line 177 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1925 "parser.tab.cpp"
    break;

  case 9:
#line 180 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "enclosed argument list");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1937 "parser.tab.cpp"
    break;

  case 10:
#line 187 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1945 "parser.tab.cpp"
    break;

  case 11:
#line 190 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1953 "parser.tab.cpp"
    break;

  case 12:
#line 193 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1961 "parser.tab.cpp"
    break;

  case 13:
#line 196 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "decorators");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1972 "parser.tab.cpp"
    break;

  case 14:
#line 203 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "decorated");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1983 "parser.tab.cpp"
    break;

  case 15:
#line 209 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1991 "parser.tab.cpp"
    break;

  case 16:
#line 212 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);

}
#line 2000 "parser.tab.cpp"
    break;

  case 17:
#line 216 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);

     }
#line 2009 "parser.tab.cpp"
    break;

  case 18:
#line 220 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Async Function Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2020 "parser.tab.cpp"
    break;

  case 19:
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
#line 2036 "parser.tab.cpp"
    break;

  case 20:
#line 237 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "condition arrowtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2047 "parser.tab.cpp"
    break;

  case 21:
#line 243 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2055 "parser.tab.cpp"
    break;

  case 22:
#line 246 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "parameters");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2067 "parser.tab.cpp"
    break;

  case 23:
#line 253 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2075 "parser.tab.cpp"
    break;

  case 24:
#line 255 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 2083 "parser.tab.cpp"
    break;

  case 25:
#line 259 "parser.y"
                                                                                                 {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2096 "parser.tab.cpp"
    break;

  case 26:
#line 267 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2109 "parser.tab.cpp"
    break;

  case 27:
#line 275 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2121 "parser.tab.cpp"
    break;

  case 28:
#line 282 "parser.y"
                                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2129 "parser.tab.cpp"
    break;

  case 29:
#line 285 "parser.y"
                                {
        (yyval.ptr) = new node("nt", "condition comma start condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2142 "parser.tab.cpp"
    break;

  case 30:
#line 293 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2150 "parser.tab.cpp"
    break;

  case 31:
#line 296 "parser.y"
                                                                                                      {
            (yyval.ptr) = new node("nt", "condition star or star star");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2163 "parser.tab.cpp"
    break;

  case 32:
#line 304 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2175 "parser.tab.cpp"
    break;

  case 33:
#line 311 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2183 "parser.tab.cpp"
    break;

  case 34:
#line 314 "parser.y"
                                                              {
        (yyval.ptr) = new node("nt", "condition comma or condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2194 "parser.tab.cpp"
    break;

  case 35:
#line 320 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2202 "parser.tab.cpp"
    break;

  case 36:
#line 323 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma condition eqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 2214 "parser.tab.cpp"
    break;

  case 37:
#line 330 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2222 "parser.tab.cpp"
    break;

  case 38:
#line 333 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2230 "parser.tab.cpp"
    break;

  case 39:
#line 336 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2238 "parser.tab.cpp"
    break;

  case 40:
#line 339 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2246 "parser.tab.cpp"
    break;

  case 41:
#line 342 "parser.y"
                {
    (yyval.ptr) = new node("nt", "name colon test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2258 "parser.tab.cpp"
    break;

  case 42:
#line 350 "parser.y"
                                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2271 "parser.tab.cpp"
    break;

  case 43:
#line 358 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2284 "parser.tab.cpp"
    break;

  case 44:
#line 366 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2296 "parser.tab.cpp"
    break;

  case 45:
#line 373 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2304 "parser.tab.cpp"
    break;

  case 46:
#line 376 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma vfpdef condeqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2317 "parser.tab.cpp"
    break;

  case 47:
#line 384 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2325 "parser.tab.cpp"
    break;

  case 48:
#line 387 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2333 "parser.tab.cpp"
    break;

  case 49:
#line 390 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2341 "parser.tab.cpp"
    break;

  case 50:
#line 394 "parser.y"
        {
            (yyval.ptr) = new node("nt", "condition star or start star vf");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2354 "parser.tab.cpp"
    break;

  case 51:
#line 402 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or start star vf");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2366 "parser.tab.cpp"
    break;

  case 52:
#line 409 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2374 "parser.tab.cpp"
    break;

  case 53:
#line 412 "parser.y"
                                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2382 "parser.tab.cpp"
    break;

  case 54:
#line 415 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "condition comma star vfpdef condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2395 "parser.tab.cpp"
    break;

  case 55:
#line 423 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2403 "parser.tab.cpp"
    break;

  case 56:
#line 426 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "comma or star star");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2414 "parser.tab.cpp"
    break;

  case 57:
#line 432 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2422 "parser.tab.cpp"
    break;

  case 58:
#line 436 "parser.y"
                  {
    cerr<<"stmt reached\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2431 "parser.tab.cpp"
    break;

  case 59:
#line 439 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2439 "parser.tab.cpp"
    break;

  case 60:
#line 442 "parser.y"
                                                                 {
        cerr << "simple statement\n";
        (yyval.ptr) = new node("nt", "simple statement");
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2452 "parser.tab.cpp"
    break;

  case 61:
#line 450 "parser.y"
                                                  {
        (yyval.ptr) = new node("nt", "close small statement");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2464 "parser.tab.cpp"
    break;

  case 62:
#line 457 "parser.y"
          {
            (yyval.ptr) = NULL;
        }
#line 2472 "parser.tab.cpp"
    break;

  case 63:
#line 460 "parser.y"
                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2480 "parser.tab.cpp"
    break;

  case 64:
#line 463 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2488 "parser.tab.cpp"
    break;

  case 65:
#line 466 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2496 "parser.tab.cpp"
    break;

  case 66:
#line 468 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2504 "parser.tab.cpp"
    break;

  case 67:
#line 471 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2512 "parser.tab.cpp"
    break;

  case 68:
#line 474 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2520 "parser.tab.cpp"
    break;

  case 69:
#line 477 "parser.y"
              {
    cerr<<" import statement \n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2529 "parser.tab.cpp"
    break;

  case 70:
#line 481 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2537 "parser.tab.cpp"
    break;

  case 71:
#line 484 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2545 "parser.tab.cpp"
    break;

  case 72:
#line 487 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
  }
#line 2553 "parser.tab.cpp"
    break;

  case 73:
#line 490 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "expression statement");
    cerr << "here expr_stmt\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2565 "parser.tab.cpp"
    break;

  case 74:
#line 497 "parser.y"
                          {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2573 "parser.tab.cpp"
    break;

  case 75:
#line 501 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2581 "parser.tab.cpp"
    break;

  case 76:
#line 504 "parser.y"
                               {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2589 "parser.tab.cpp"
    break;

  case 77:
#line 508 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2597 "parser.tab.cpp"
    break;

  case 78:
#line 511 "parser.y"
                                                                          {
                    (yyval.ptr) = new node("nt", "close yield or test star");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
            }
#line 2609 "parser.tab.cpp"
    break;

  case 79:
#line 518 "parser.y"
                          {
                            (yyval.ptr) = NULL;
                        }
#line 2617 "parser.tab.cpp"
    break;

  case 80:
#line 521 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Annotated Assignment");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2629 "parser.tab.cpp"
    break;

  case 81:
#line 528 "parser.y"
                      {
        (yyval.ptr) = new node("nt", "condition equal test");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2640 "parser.tab.cpp"
    break;

  case 82:
#line 534 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2648 "parser.tab.cpp"
    break;

  case 83:
#line 537 "parser.y"
                                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2656 "parser.tab.cpp"
    break;

  case 84:
#line 539 "parser.y"
                            {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 2664 "parser.tab.cpp"
    break;

  case 85:
#line 541 "parser.y"
                             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2672 "parser.tab.cpp"
    break;

  case 86:
#line 545 "parser.y"
                                                                          {
    (yyval.ptr) = new node("nt", "testlist star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2684 "parser.tab.cpp"
    break;

  case 87:
#line 552 "parser.y"
                      {
    cerr<<"yo1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2693 "parser.tab.cpp"
    break;

  case 88:
#line 556 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2701 "parser.tab.cpp"
    break;

  case 89:
#line 559 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "close commatest or star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2713 "parser.tab.cpp"
    break;

  case 90:
#line 566 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2721 "parser.tab.cpp"
    break;

  case 91:
#line 569 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2729 "parser.tab.cpp"
    break;

  case 92:
#line 572 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2737 "parser.tab.cpp"
    break;

  case 93:
#line 575 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2745 "parser.tab.cpp"
    break;

  case 94:
#line 578 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2753 "parser.tab.cpp"
    break;

  case 95:
#line 581 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2761 "parser.tab.cpp"
    break;

  case 96:
#line 584 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2769 "parser.tab.cpp"
    break;

  case 97:
#line 587 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2777 "parser.tab.cpp"
    break;

  case 98:
#line 590 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2785 "parser.tab.cpp"
    break;

  case 99:
#line 593 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2793 "parser.tab.cpp"
    break;

  case 100:
#line 596 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2801 "parser.tab.cpp"
    break;

  case 101:
#line 599 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2809 "parser.tab.cpp"
    break;

  case 102:
#line 602 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2817 "parser.tab.cpp"
    break;

  case 103:
#line 605 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2825 "parser.tab.cpp"
    break;

  case 104:
#line 608 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2833 "parser.tab.cpp"
    break;

  case 105:
#line 611 "parser.y"
                         {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2841 "parser.tab.cpp"
    break;

  case 106:
#line 615 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Delete Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2852 "parser.tab.cpp"
    break;

  case 107:
#line 621 "parser.y"
               {
    (yyval.ptr) = new node("nt", "Pass Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2862 "parser.tab.cpp"
    break;

  case 108:
#line 626 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2870 "parser.tab.cpp"
    break;

  case 109:
#line 629 "parser.y"
                        {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2878 "parser.tab.cpp"
    break;

  case 110:
#line 632 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2886 "parser.tab.cpp"
    break;

  case 111:
#line 635 "parser.y"
                     {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2894 "parser.tab.cpp"
    break;

  case 112:
#line 638 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2902 "parser.tab.cpp"
    break;

  case 113:
#line 642 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Break Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2912 "parser.tab.cpp"
    break;

  case 114:
#line 648 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Continue Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2922 "parser.tab.cpp"
    break;

  case 115:
#line 654 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "Return Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2933 "parser.tab.cpp"
    break;

  case 116:
#line 661 "parser.y"
                       {
      (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2941 "parser.tab.cpp"
    break;

  case 117:
#line 663 "parser.y"
    {
      (yyval.ptr) = nullptr;
}
#line 2949 "parser.tab.cpp"
    break;

  case 118:
#line 666 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2957 "parser.tab.cpp"
    break;

  case 119:
#line 669 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Raise Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2968 "parser.tab.cpp"
    break;

  case 120:
#line 675 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2976 "parser.tab.cpp"
    break;

  case 121:
#line 677 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "condition from test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2988 "parser.tab.cpp"
    break;

  case 122:
#line 683 "parser.y"
   {    
    (yyval.ptr) = nullptr;
}
#line 2996 "parser.tab.cpp"
    break;

  case 123:
#line 687 "parser.y"
                         {
    cerr << "Import name\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3005 "parser.tab.cpp"
    break;

  case 124:
#line 691 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3013 "parser.tab.cpp"
    break;

  case 125:
#line 694 "parser.y"
                                   {
    cerr<<"import\n";
    (yyval.ptr) = new node("nt", "Import Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3025 "parser.tab.cpp"
    break;

  case 126:
#line 702 "parser.y"
                                                                                                         {
                    (yyval.ptr) = new node("nt", "Import from");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
            }
#line 3038 "parser.tab.cpp"
    break;

  case 127:
#line 711 "parser.y"
                                                                             {
    (yyval.ptr) = new node("nt", "close plus dot or ellipsis name or plus dot ellip");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3049 "parser.tab.cpp"
    break;

  case 128:
#line 716 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3057 "parser.tab.cpp"
    break;

  case 129:
#line 720 "parser.y"
                                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3065 "parser.tab.cpp"
    break;

  case 130:
#line 722 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "star or import parentheses or import");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3077 "parser.tab.cpp"
    break;

  case 131:
#line 728 "parser.y"
                   {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3085 "parser.tab.cpp"
    break;

  case 132:
#line 732 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3096 "parser.tab.cpp"
    break;

  case 133:
#line 737 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3107 "parser.tab.cpp"
    break;

  case 134:
#line 742 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3115 "parser.tab.cpp"
    break;

  case 135:
#line 744 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3123 "parser.tab.cpp"
    break;

  case 136:
#line 748 "parser.y"
                                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3131 "parser.tab.cpp"
    break;

  case 137:
#line 750 "parser.y"
    {
    (yyval.ptr) = nullptr;
}
#line 3139 "parser.tab.cpp"
    break;

  case 138:
#line 754 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3147 "parser.tab.cpp"
    break;

  case 139:
#line 756 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3159 "parser.tab.cpp"
    break;

  case 140:
#line 764 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3167 "parser.tab.cpp"
    break;

  case 141:
#line 766 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3179 "parser.tab.cpp"
    break;

  case 142:
#line 774 "parser.y"
                                                                  {
    (yyval.ptr) = new node("nt", "Import As Names");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr)); 
}
#line 3191 "parser.tab.cpp"
    break;

  case 143:
#line 782 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3203 "parser.tab.cpp"
    break;

  case 144:
#line 788 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3211 "parser.tab.cpp"
    break;

  case 145:
#line 792 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Dotted As Names");
    cerr<<"dotted_as_name reached\n";
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3223 "parser.tab.cpp"
    break;

  case 146:
#line 800 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3235 "parser.tab.cpp"
    break;

  case 147:
#line 806 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3243 "parser.tab.cpp"
    break;

  case 148:
#line 810 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Dotted Name");
    cerr << "Dotted name reached\n";
    cerr << (yyvsp[-1].val) << '\n';
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3256 "parser.tab.cpp"
    break;

  case 149:
#line 819 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Close Dotted Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3268 "parser.tab.cpp"
    break;

  case 150:
#line 825 "parser.y"
    {
    cerr << "Null production\n";
    (yyval.ptr) = NULL;
}
#line 3277 "parser.tab.cpp"
    break;

  case 151:
#line 830 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "Global Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3289 "parser.tab.cpp"
    break;

  case 152:
#line 837 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Nonlocal Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 3300 "parser.tab.cpp"
    break;

  case 153:
#line 843 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Comma Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3312 "parser.tab.cpp"
    break;

  case 154:
#line 849 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3320 "parser.tab.cpp"
    break;

  case 155:
#line 853 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3331 "parser.tab.cpp"
    break;

  case 156:
#line 858 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3344 "parser.tab.cpp"
    break;

  case 157:
#line 867 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3352 "parser.tab.cpp"
    break;

  case 158:
#line 869 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3360 "parser.tab.cpp"
    break;

  case 159:
#line 871 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3368 "parser.tab.cpp"
    break;

  case 160:
#line 873 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3376 "parser.tab.cpp"
    break;

  case 161:
#line 875 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3384 "parser.tab.cpp"
    break;

  case 162:
#line 877 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3392 "parser.tab.cpp"
    break;

  case 163:
#line 879 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3400 "parser.tab.cpp"
    break;

  case 164:
#line 881 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3408 "parser.tab.cpp"
    break;

  case 165:
#line 883 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3416 "parser.tab.cpp"
    break;

  case 166:
#line 887 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Async Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3427 "parser.tab.cpp"
    break;

  case 167:
#line 894 "parser.y"
                                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3435 "parser.tab.cpp"
    break;

  case 168:
#line 896 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3443 "parser.tab.cpp"
    break;

  case 169:
#line 898 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3451 "parser.tab.cpp"
    break;

  case 170:
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
#line 3467 "parser.tab.cpp"
    break;

  case 171:
#line 914 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Else Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3479 "parser.tab.cpp"
    break;

  case 172:
#line 920 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3487 "parser.tab.cpp"
    break;

  case 173:
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
#line 3501 "parser.tab.cpp"
    break;

  case 174:
#line 932 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3509 "parser.tab.cpp"
    break;

  case 175:
#line 936 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "While Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3522 "parser.tab.cpp"
    break;

  case 176:
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
#line 3538 "parser.tab.cpp"
    break;

  case 177:
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
#line 3553 "parser.tab.cpp"
    break;

  case 178:
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
#line 3571 "parser.tab.cpp"
    break;

  case 179:
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
#line 3586 "parser.tab.cpp"
    break;

  case 180:
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
#line 3601 "parser.tab.cpp"
    break;

  case 181:
#line 996 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Finally Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3613 "parser.tab.cpp"
    break;

  case 182:
#line 1002 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3621 "parser.tab.cpp"
    break;

  case 183:
#line 1006 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3633 "parser.tab.cpp"
    break;

  case 184:
#line 1012 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3646 "parser.tab.cpp"
    break;

  case 185:
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
#line 3660 "parser.tab.cpp"
    break;

  case 186:
#line 1031 "parser.y"
                                                      {
    (yyval.ptr) = new node("nt", "Close Comma With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3672 "parser.tab.cpp"
    break;

  case 187:
#line 1037 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3680 "parser.tab.cpp"
    break;

  case 188:
#line 1041 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3688 "parser.tab.cpp"
    break;

  case 189:
#line 1043 "parser.y"
                {
    (yyval.ptr) = new node("nt", "With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3700 "parser.tab.cpp"
    break;

  case 190:
#line 1052 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Except Clause");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3711 "parser.tab.cpp"
    break;

  case 191:
#line 1059 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3719 "parser.tab.cpp"
    break;

  case 192:
#line 1061 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Condition Test As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3731 "parser.tab.cpp"
    break;

  case 193:
#line 1067 "parser.y"
   {
    (yyval.ptr) = NULL;
}
#line 3739 "parser.tab.cpp"
    break;

  case 194:
#line 1071 "parser.y"
                  {
    cerr<<" yo yo yo 1\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3748 "parser.tab.cpp"
    break;

  case 195:
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
#line 3762 "parser.tab.cpp"
    break;

  case 196:
#line 1083 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3770 "parser.tab.cpp"
    break;

  case 197:
#line 1085 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Plus Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3781 "parser.tab.cpp"
    break;

  case 198:
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
#line 3795 "parser.tab.cpp"
    break;

  case 199:
#line 1099 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3803 "parser.tab.cpp"
    break;

  case 200:
#line 1101 "parser.y"
           {
    cerr << "debug statement " << 1 <<"\n";
    cerr<<"test->or_test\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3813 "parser.tab.cpp"
    break;

  case 201:
#line 1106 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3821 "parser.tab.cpp"
    break;

  case 202:
#line 1108 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3829 "parser.tab.cpp"
    break;

  case 203:
#line 1112 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3842 "parser.tab.cpp"
    break;

  case 204:
#line 1119 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3854 "parser.tab.cpp"
    break;

  case 205:
#line 1127 "parser.y"
                                                  {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3867 "parser.tab.cpp"
    break;

  case 206:
#line 1134 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3879 "parser.tab.cpp"
    break;

  case 207:
#line 1142 "parser.y"
                                   {
    cerr << "debug statement " << 2 <<" "<<((yyvsp[-1].ptr))->name<<"\n";
    (yyval.ptr) = new node("nt", "Or Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3891 "parser.tab.cpp"
    break;

  case 208:
#line 1150 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Close Or And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3903 "parser.tab.cpp"
    break;

  case 209:
#line 1156 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3911 "parser.tab.cpp"
    break;

  case 210:
#line 1160 "parser.y"
                                     {
    cerr << "debug statement " << 3 <<"\n";
    (yyval.ptr) = new node("nt", "And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3923 "parser.tab.cpp"
    break;

  case 211:
#line 1168 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close And Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3935 "parser.tab.cpp"
    break;

  case 212:
#line 1174 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3943 "parser.tab.cpp"
    break;

  case 213:
#line 1178 "parser.y"
                              {
    cerr << "debug statement " << 4 << "\n";
    (yyval.ptr) = new node("nt", "Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3955 "parser.tab.cpp"
    break;

  case 214:
#line 1186 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Close Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3966 "parser.tab.cpp"
    break;

  case 215:
#line 1191 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3974 "parser.tab.cpp"
    break;

  case 216:
#line 1195 "parser.y"
                                 {
    cerr << "debug statement " << 5 <<"\n";
    (yyval.ptr) = new node("nt", "Comparison");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3986 "parser.tab.cpp"
    break;

  case 217:
#line 1203 "parser.y"
                                               {
    (yyval.ptr) = new node("nt", "Close Comparison Operator Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3998 "parser.tab.cpp"
    break;

  case 218:
#line 1209 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4006 "parser.tab.cpp"
    break;

  case 219:
#line 1217 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4014 "parser.tab.cpp"
    break;

  case 220:
#line 1219 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4022 "parser.tab.cpp"
    break;

  case 221:
#line 1221 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4030 "parser.tab.cpp"
    break;

  case 222:
#line 1223 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4038 "parser.tab.cpp"
    break;

  case 223:
#line 1225 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4046 "parser.tab.cpp"
    break;

  case 224:
#line 1227 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4054 "parser.tab.cpp"
    break;

  case 225:
#line 1229 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4062 "parser.tab.cpp"
    break;

  case 226:
#line 1231 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4070 "parser.tab.cpp"
    break;

  case 227:
#line 1233 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Not in");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4081 "parser.tab.cpp"
    break;

  case 228:
#line 1238 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4089 "parser.tab.cpp"
    break;

  case 229:
#line 1240 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Is Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4100 "parser.tab.cpp"
    break;

  case 230:
#line 1247 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4111 "parser.tab.cpp"
    break;

  case 231:
#line 1254 "parser.y"
                             {
    cerr << "debug statement " << 6 <<"\n";
    (yyval.ptr) = new node("nt", "Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4123 "parser.tab.cpp"
    break;

  case 232:
#line 1261 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Or Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4135 "parser.tab.cpp"
    break;

  case 233:
#line 1267 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4143 "parser.tab.cpp"
    break;

  case 234:
#line 1271 "parser.y"
                                     {
    cerr << "debug statement " << 7 <<"\n";
    (yyval.ptr) = new node("nt", "Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4155 "parser.tab.cpp"
    break;

  case 235:
#line 1279 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close Xor And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4167 "parser.tab.cpp"
    break;

  case 236:
#line 1285 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4175 "parser.tab.cpp"
    break;

  case 237:
#line 1289 "parser.y"
                                       {
    cerr << "debug statement " << 8 <<"\n";
    (yyval.ptr) = new node("nt", "And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4187 "parser.tab.cpp"
    break;

  case 238:
#line 1297 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "Close And Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4199 "parser.tab.cpp"
    break;

  case 239:
#line 1303 "parser.y"
     {
(yyval.ptr) = NULL;
}
#line 4207 "parser.tab.cpp"
    break;

  case 240:
#line 1307 "parser.y"
                                           {
    cerr << "debug statement " << 9 <<"\n";
    (yyval.ptr) = new node("nt", "Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4219 "parser.tab.cpp"
    break;

  case 241:
#line 1315 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4227 "parser.tab.cpp"
    break;

  case 242:
#line 1317 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4235 "parser.tab.cpp"
    break;

  case 243:
#line 1321 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Leftright shift Arithmatic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4247 "parser.tab.cpp"
    break;

  case 244:
#line 1327 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4255 "parser.tab.cpp"
    break;

  case 245:
#line 1331 "parser.y"
                                    {
    cerr << "debug statement " << 10 <<"\n";
    (yyval.ptr) = new node("nt", "Arithmatic Expression");
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4266 "parser.tab.cpp"
    break;

  case 246:
#line 1338 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4277 "parser.tab.cpp"
    break;

  case 247:
#line 1343 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4288 "parser.tab.cpp"
    break;

  case 248:
#line 1348 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4296 "parser.tab.cpp"
    break;

  case 249:
#line 1352 "parser.y"
                                  {
    cerr << "debug statement " << 11 <<"\n";
    (yyval.ptr) = new node("nt", "Term");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4308 "parser.tab.cpp"
    break;

  case 250:
#line 1360 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4316 "parser.tab.cpp"
    break;

  case 251:
#line 1362 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4324 "parser.tab.cpp"
    break;

  case 252:
#line 1364 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4332 "parser.tab.cpp"
    break;

  case 253:
#line 1366 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4340 "parser.tab.cpp"
    break;

  case 254:
#line 1368 "parser.y"
        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4348 "parser.tab.cpp"
    break;

  case 255:
#line 1372 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Mul Div Ops Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4360 "parser.tab.cpp"
    break;

  case 256:
#line 1378 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4368 "parser.tab.cpp"
    break;

  case 257:
#line 1382 "parser.y"
                                        {
    cerr << "debug statement " << 12 <<"\n";
    (yyval.ptr) = new node("nt", "Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4380 "parser.tab.cpp"
    break;

  case 258:
#line 1390 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "Close Plus Or Minus Or Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4391 "parser.tab.cpp"
    break;

  case 259:
#line 1395 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4399 "parser.tab.cpp"
    break;

  case 260:
#line 1400 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4407 "parser.tab.cpp"
    break;

  case 261:
#line 1402 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4415 "parser.tab.cpp"
    break;

  case 262:
#line 1404 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4423 "parser.tab.cpp"
    break;

  case 263:
#line 1408 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Power");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4435 "parser.tab.cpp"
    break;

  case 264:
#line 1414 "parser.y"
             {
    cerr << "debug statement " << 13 <<"\n";
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4444 "parser.tab.cpp"
    break;

  case 265:
#line 1419 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4456 "parser.tab.cpp"
    break;

  case 266:
#line 1425 "parser.y"
                      {
    cerr << "debug statement " << 14 <<"\n";
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4468 "parser.tab.cpp"
    break;

  case 267:
#line 1433 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Close Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4479 "parser.tab.cpp"
    break;

  case 268:
#line 1438 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4487 "parser.tab.cpp"
    break;

  case 269:
#line 1442 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4499 "parser.tab.cpp"
    break;

  case 270:
#line 1448 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4511 "parser.tab.cpp"
    break;

  case 271:
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
#line 4525 "parser.tab.cpp"
    break;

  case 272:
#line 1462 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4537 "parser.tab.cpp"
    break;

  case 273:
#line 1468 "parser.y"
            {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4548 "parser.tab.cpp"
    break;

  case 274:
#line 1473 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4556 "parser.tab.cpp"
    break;

  case 275:
#line 1475 "parser.y"
           {
    cerr << "debug statement " << 15 <<"\n";
    cerr << "number reached " << (yyvsp[0].val) << '\n';
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4566 "parser.tab.cpp"
    break;

  case 276:
#line 1479 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4574 "parser.tab.cpp"
    break;

  case 277:
#line 1481 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4582 "parser.tab.cpp"
    break;

  case 278:
#line 1483 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4590 "parser.tab.cpp"
    break;

  case 279:
#line 1485 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4598 "parser.tab.cpp"
    break;

  case 280:
#line 1487 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4606 "parser.tab.cpp"
    break;

  case 281:
#line 1491 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4614 "parser.tab.cpp"
    break;

  case 282:
#line 1493 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4622 "parser.tab.cpp"
    break;

  case 283:
#line 1495 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4630 "parser.tab.cpp"
    break;

  case 284:
#line 1499 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4638 "parser.tab.cpp"
    break;

  case 285:
#line 1501 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "Multiple String");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4649 "parser.tab.cpp"
    break;

  case 286:
#line 1508 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4660 "parser.tab.cpp"
    break;

  case 287:
#line 1513 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4672 "parser.tab.cpp"
    break;

  case 288:
#line 1521 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4684 "parser.tab.cpp"
    break;

  case 289:
#line 1527 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4696 "parser.tab.cpp"
    break;

  case 290:
#line 1533 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 4708 "parser.tab.cpp"
    break;

  case 291:
#line 1541 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Subscript List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4720 "parser.tab.cpp"
    break;

  case 292:
#line 1549 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Close Comma Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4732 "parser.tab.cpp"
    break;

  case 293:
#line 1555 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4740 "parser.tab.cpp"
    break;

  case 294:
#line 1559 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4748 "parser.tab.cpp"
    break;

  case 295:
#line 1561 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4761 "parser.tab.cpp"
    break;

  case 296:
#line 1570 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4769 "parser.tab.cpp"
    break;

  case 297:
#line 1572 "parser.y"
    {
    (yyval.ptr) = NULL;

}
#line 4778 "parser.tab.cpp"
    break;

  case 298:
#line 1577 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4786 "parser.tab.cpp"
    break;

  case 299:
#line 1579 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4794 "parser.tab.cpp"
    break;

  case 300:
#line 1583 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Slice Operation");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4805 "parser.tab.cpp"
    break;

  case 301:
#line 1588 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4813 "parser.tab.cpp"
    break;

  case 302:
#line 1592 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "Expression List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4825 "parser.tab.cpp"
    break;

  case 303:
#line 1600 "parser.y"
                        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4833 "parser.tab.cpp"
    break;

  case 304:
#line 1602 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4841 "parser.tab.cpp"
    break;

  case 305:
#line 1606 "parser.y"
                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Expression Or Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4853 "parser.tab.cpp"
    break;

  case 306:
#line 1612 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4861 "parser.tab.cpp"
    break;

  case 307:
#line 1616 "parser.y"
                                          {
    (yyval.ptr) = new node("nt", "Test List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4873 "parser.tab.cpp"
    break;

  case 308:
#line 1624 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "Close Comma Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4885 "parser.tab.cpp"
    break;

  case 309:
#line 1630 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4893 "parser.tab.cpp"
    break;

  case 310:
#line 1636 "parser.y"
                                                                                                {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4904 "parser.tab.cpp"
    break;

  case 311:
#line 1641 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4912 "parser.tab.cpp"
    break;

  case 312:
#line 1645 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4924 "parser.tab.cpp"
    break;

  case 313:
#line 1651 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 4932 "parser.tab.cpp"
    break;

  case 314:
#line 1656 "parser.y"
                                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4944 "parser.tab.cpp"
    break;

  case 315:
#line 1662 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4952 "parser.tab.cpp"
    break;

  case 316:
#line 1666 "parser.y"
                                                                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4960 "parser.tab.cpp"
    break;

  case 317:
#line 1668 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4971 "parser.tab.cpp"
    break;

  case 318:
#line 1675 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4982 "parser.tab.cpp"
    break;

  case 319:
#line 1680 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4994 "parser.tab.cpp"
    break;

  case 320:
#line 1688 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Class Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5008 "parser.tab.cpp"
    break;

  case 321:
#line 1698 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "Condition Parentheses Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5020 "parser.tab.cpp"
    break;

  case 322:
#line 1704 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 5028 "parser.tab.cpp"
    break;

  case 323:
#line 1708 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5040 "parser.tab.cpp"
    break;

  case 324:
#line 1716 "parser.y"
                                                        {
        (yyval.ptr) = new node("nt", "Close Comma Argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5052 "parser.tab.cpp"
    break;

  case 325:
#line 1722 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5060 "parser.tab.cpp"
    break;

  case 326:
#line 1735 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5071 "parser.tab.cpp"
    break;

  case 327:
#line 1741 "parser.y"
         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5079 "parser.tab.cpp"
    break;

  case 328:
#line 1744 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr)); 
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5091 "parser.tab.cpp"
    break;

  case 329:
#line 1751 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5102 "parser.tab.cpp"
    break;

  case 330:
#line 1757 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5113 "parser.tab.cpp"
    break;

  case 331:
#line 1764 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);    
    }
#line 5121 "parser.tab.cpp"
    break;

  case 332:
#line 1766 "parser.y"
                {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5129 "parser.tab.cpp"
    break;

  case 333:
#line 1769 "parser.y"
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
#line 5144 "parser.tab.cpp"
    break;

  case 334:
#line 1779 "parser.y"
                  {  
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5152 "parser.tab.cpp"
    break;

  case 335:
#line 1781 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5160 "parser.tab.cpp"
    break;

  case 336:
#line 1786 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5171 "parser.tab.cpp"
    break;

  case 337:
#line 1791 "parser.y"
                                 {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5183 "parser.tab.cpp"
    break;

  case 338:
#line 1804 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "Yield Expression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5194 "parser.tab.cpp"
    break;

  case 339:
#line 1810 "parser.y"
            {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5202 "parser.tab.cpp"
    break;

  case 340:
#line 1814 "parser.y"
                     {
        (yyval.ptr) = new node("nt", "Yield Arguments");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5213 "parser.tab.cpp"
    break;

  case 341:
#line 1820 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5221 "parser.tab.cpp"
    break;


#line 5225 "parser.tab.cpp"

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
#line 1824 "parser.y"



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
