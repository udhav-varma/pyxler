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
#define YYLAST   607

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  159
/* YYNRULES -- Number of rules.  */
#define YYNRULES  341
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  515

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
       0,   109,   109,   132,   137,   142,   161,   169,   172,   175,
     182,   185,   188,   191,   198,   204,   207,   211,   215,   221,
     232,   238,   241,   248,   250,   254,   262,   270,   277,   280,
     288,   291,   299,   306,   309,   315,   318,   325,   328,   331,
     334,   337,   345,   353,   361,   368,   371,   379,   382,   385,
     388,   397,   404,   407,   410,   418,   421,   427,   431,   433,
     436,   443,   450,   453,   456,   459,   461,   464,   467,   470,
     473,   476,   479,   482,   488,   492,   495,   499,   502,   509,
     512,   519,   525,   528,   530,   532,   536,   543,   546,   549,
     556,   559,   562,   565,   568,   571,   574,   577,   580,   583,
     586,   589,   592,   595,   598,   601,   605,   611,   616,   619,
     622,   625,   628,   632,   638,   644,   651,   653,   656,   659,
     665,   667,   673,   677,   680,   683,   690,   699,   704,   708,
     710,   716,   720,   725,   730,   732,   736,   738,   742,   744,
     752,   754,   762,   770,   776,   780,   787,   793,   797,   804,
     810,   814,   821,   827,   833,   837,   842,   851,   853,   855,
     857,   859,   861,   863,   865,   867,   871,   878,   880,   882,
     886,   897,   903,   907,   915,   919,   926,   937,   946,   959,
     968,   979,   985,   989,   995,  1004,  1014,  1020,  1024,  1026,
    1035,  1042,  1044,  1050,  1054,  1056,  1064,  1066,  1072,  1080,
    1082,  1085,  1087,  1091,  1098,  1106,  1113,  1121,  1128,  1134,
    1138,  1145,  1151,  1155,  1162,  1167,  1171,  1178,  1184,  1192,
    1194,  1196,  1198,  1200,  1202,  1204,  1206,  1208,  1213,  1215,
    1222,  1229,  1235,  1241,  1245,  1252,  1258,  1262,  1269,  1275,
    1279,  1286,  1288,  1292,  1298,  1302,  1308,  1313,  1318,  1322,
    1329,  1331,  1333,  1335,  1337,  1341,  1347,  1351,  1358,  1363,
    1368,  1370,  1372,  1376,  1382,  1386,  1392,  1399,  1404,  1408,
    1414,  1420,  1425,  1431,  1436,  1438,  1440,  1442,  1444,  1446,
    1448,  1452,  1454,  1456,  1460,  1462,  1469,  1474,  1482,  1488,
    1494,  1502,  1510,  1516,  1520,  1522,  1531,  1533,  1538,  1540,
    1544,  1549,  1553,  1561,  1563,  1567,  1573,  1577,  1585,  1591,
    1597,  1602,  1606,  1612,  1617,  1623,  1627,  1629,  1636,  1641,
    1649,  1659,  1665,  1669,  1677,  1683,  1696,  1702,  1705,  1712,
    1718,  1725,  1727,  1730,  1740,  1742,  1747,  1752,  1765,  1771,
    1775,  1781
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
      -1,     1,     2,    29,   211,   212,   293,    30,    31,   122,
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
       3,     2,     3,     2,     1,     1,     1,     1,     1,     1,
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
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    ast.graphviz((yyval.ptr));
    return 0;
}
#line 1863 "parser.tab.cpp"
    break;

  case 3:
#line 132 "parser.y"
                               {
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1874 "parser.tab.cpp"
    break;

  case 4:
#line 137 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "new statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1885 "parser.tab.cpp"
    break;

  case 5:
#line 142 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 1893 "parser.tab.cpp"
    break;

  case 6:
#line 161 "parser.y"
                                                           {
    (yyval.ptr) = new node("nt", "decorator");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1906 "parser.tab.cpp"
    break;

  case 7:
#line 169 "parser.y"
                                            {
    (yyval.ptr) = (yyvsp[0].ptr);    
}
#line 1914 "parser.tab.cpp"
    break;

  case 8:
#line 172 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1922 "parser.tab.cpp"
    break;

  case 9:
#line 175 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "enclosed argument list");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1934 "parser.tab.cpp"
    break;

  case 10:
#line 182 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1942 "parser.tab.cpp"
    break;

  case 11:
#line 185 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 1950 "parser.tab.cpp"
    break;

  case 12:
#line 188 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1958 "parser.tab.cpp"
    break;

  case 13:
#line 191 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "decorators");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1969 "parser.tab.cpp"
    break;

  case 14:
#line 198 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "decorated");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 1980 "parser.tab.cpp"
    break;

  case 15:
#line 204 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 1988 "parser.tab.cpp"
    break;

  case 16:
#line 207 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);

}
#line 1997 "parser.tab.cpp"
    break;

  case 17:
#line 211 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);

     }
#line 2006 "parser.tab.cpp"
    break;

  case 18:
#line 215 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Async Function Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2017 "parser.tab.cpp"
    break;

  case 19:
#line 221 "parser.y"
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
#line 2033 "parser.tab.cpp"
    break;

  case 20:
#line 232 "parser.y"
                            {
    (yyval.ptr) = new node("nt", "condition arrowtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2044 "parser.tab.cpp"
    break;

  case 21:
#line 238 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2052 "parser.tab.cpp"
    break;

  case 22:
#line 241 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "parameters");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2064 "parser.tab.cpp"
    break;

  case 23:
#line 248 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2072 "parser.tab.cpp"
    break;

  case 24:
#line 250 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 2080 "parser.tab.cpp"
    break;

  case 25:
#line 254 "parser.y"
                                                                                                 {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2093 "parser.tab.cpp"
    break;

  case 26:
#line 262 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2106 "parser.tab.cpp"
    break;

  case 27:
#line 270 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Typed Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2118 "parser.tab.cpp"
    break;

  case 28:
#line 277 "parser.y"
                                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2126 "parser.tab.cpp"
    break;

  case 29:
#line 280 "parser.y"
                                {
        (yyval.ptr) = new node("nt", "condition comma start condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2139 "parser.tab.cpp"
    break;

  case 30:
#line 288 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2147 "parser.tab.cpp"
    break;

  case 31:
#line 291 "parser.y"
                                                                                                      {
            (yyval.ptr) = new node("nt", "condition star or star star");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2160 "parser.tab.cpp"
    break;

  case 32:
#line 299 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2172 "parser.tab.cpp"
    break;

  case 33:
#line 306 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2180 "parser.tab.cpp"
    break;

  case 34:
#line 309 "parser.y"
                                                              {
        (yyval.ptr) = new node("nt", "condition comma or condition star or star star");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2191 "parser.tab.cpp"
    break;

  case 35:
#line 315 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2199 "parser.tab.cpp"
    break;

  case 36:
#line 318 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma condition eqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 2211 "parser.tab.cpp"
    break;

  case 37:
#line 325 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2219 "parser.tab.cpp"
    break;

  case 38:
#line 328 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2227 "parser.tab.cpp"
    break;

  case 39:
#line 331 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2235 "parser.tab.cpp"
    break;

  case 40:
#line 334 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2243 "parser.tab.cpp"
    break;

  case 41:
#line 337 "parser.y"
                {
    (yyval.ptr) = new node("nt", "name colon test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2255 "parser.tab.cpp"
    break;

  case 42:
#line 345 "parser.y"
                                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2268 "parser.tab.cpp"
    break;

  case 43:
#line 353 "parser.y"
                                                                                  {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2281 "parser.tab.cpp"
    break;

  case 44:
#line 361 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Variable Arguments List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
  }
#line 2293 "parser.tab.cpp"
    break;

  case 45:
#line 368 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2301 "parser.tab.cpp"
    break;

  case 46:
#line 371 "parser.y"
                                                                                    {
    (yyval.ptr) = new node("nt", "close comma vfpdef condeqtest");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2314 "parser.tab.cpp"
    break;

  case 47:
#line 379 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2322 "parser.tab.cpp"
    break;

  case 48:
#line 382 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2330 "parser.tab.cpp"
    break;

  case 49:
#line 385 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2338 "parser.tab.cpp"
    break;

  case 50:
#line 389 "parser.y"
        {
            (yyval.ptr) = new node("nt", "condition star or start star vf");
            ast.add_node((yyval.ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
            ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
        }
#line 2351 "parser.tab.cpp"
    break;

  case 51:
#line 397 "parser.y"
                              {
        (yyval.ptr) = new node("nt", "condition star or start star vf");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
      }
#line 2363 "parser.tab.cpp"
    break;

  case 52:
#line 404 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2371 "parser.tab.cpp"
    break;

  case 53:
#line 407 "parser.y"
                                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2379 "parser.tab.cpp"
    break;

  case 54:
#line 410 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "condition comma star vfpdef condition comma");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2392 "parser.tab.cpp"
    break;

  case 55:
#line 418 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2400 "parser.tab.cpp"
    break;

  case 56:
#line 421 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "comma or star star");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2411 "parser.tab.cpp"
    break;

  case 57:
#line 427 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2419 "parser.tab.cpp"
    break;

  case 58:
#line 431 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2427 "parser.tab.cpp"
    break;

  case 59:
#line 433 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2435 "parser.tab.cpp"
    break;

  case 60:
#line 436 "parser.y"
                                                                 {
        (yyval.ptr) = new node("nt", "simple statement");
        ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2447 "parser.tab.cpp"
    break;

  case 61:
#line 443 "parser.y"
                                                  {
        (yyval.ptr) = new node("nt", "close small statement");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2459 "parser.tab.cpp"
    break;

  case 62:
#line 450 "parser.y"
          {
            (yyval.ptr) = NULL;
        }
#line 2467 "parser.tab.cpp"
    break;

  case 63:
#line 453 "parser.y"
                     {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2475 "parser.tab.cpp"
    break;

  case 64:
#line 456 "parser.y"
      {
        (yyval.ptr) = NULL;
    }
#line 2483 "parser.tab.cpp"
    break;

  case 65:
#line 459 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2491 "parser.tab.cpp"
    break;

  case 66:
#line 461 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2499 "parser.tab.cpp"
    break;

  case 67:
#line 464 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2507 "parser.tab.cpp"
    break;

  case 68:
#line 467 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2515 "parser.tab.cpp"
    break;

  case 69:
#line 470 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2523 "parser.tab.cpp"
    break;

  case 70:
#line 473 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2531 "parser.tab.cpp"
    break;

  case 71:
#line 476 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2539 "parser.tab.cpp"
    break;

  case 72:
#line 479 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
  }
#line 2547 "parser.tab.cpp"
    break;

  case 73:
#line 482 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "expression statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2558 "parser.tab.cpp"
    break;

  case 74:
#line 488 "parser.y"
                          {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2566 "parser.tab.cpp"
    break;

  case 75:
#line 492 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 2574 "parser.tab.cpp"
    break;

  case 76:
#line 495 "parser.y"
                               {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2582 "parser.tab.cpp"
    break;

  case 77:
#line 499 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2590 "parser.tab.cpp"
    break;

  case 78:
#line 502 "parser.y"
                                                                          {
                    (yyval.ptr) = new node("nt", "close yield or test star");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
            }
#line 2602 "parser.tab.cpp"
    break;

  case 79:
#line 509 "parser.y"
                          {
                            (yyval.ptr) = NULL;
                        }
#line 2610 "parser.tab.cpp"
    break;

  case 80:
#line 512 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Annotated Assignment");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2622 "parser.tab.cpp"
    break;

  case 81:
#line 519 "parser.y"
                      {
        (yyval.ptr) = new node("nt", "condition equal test");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 2633 "parser.tab.cpp"
    break;

  case 82:
#line 525 "parser.y"
        {
        (yyval.ptr) = NULL;
      }
#line 2641 "parser.tab.cpp"
    break;

  case 83:
#line 528 "parser.y"
                                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2649 "parser.tab.cpp"
    break;

  case 84:
#line 530 "parser.y"
                            {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 2657 "parser.tab.cpp"
    break;

  case 85:
#line 532 "parser.y"
                             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2665 "parser.tab.cpp"
    break;

  case 86:
#line 536 "parser.y"
                                                                          {
    (yyval.ptr) = new node("nt", "testlist star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2677 "parser.tab.cpp"
    break;

  case 87:
#line 543 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2685 "parser.tab.cpp"
    break;

  case 88:
#line 546 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
 }
#line 2693 "parser.tab.cpp"
    break;

  case 89:
#line 549 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "close commatest or star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2705 "parser.tab.cpp"
    break;

  case 90:
#line 556 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2713 "parser.tab.cpp"
    break;

  case 91:
#line 559 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2721 "parser.tab.cpp"
    break;

  case 92:
#line 562 "parser.y"
  {
    (yyval.ptr) = NULL;
}
#line 2729 "parser.tab.cpp"
    break;

  case 93:
#line 565 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2737 "parser.tab.cpp"
    break;

  case 94:
#line 568 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2745 "parser.tab.cpp"
    break;

  case 95:
#line 571 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2753 "parser.tab.cpp"
    break;

  case 96:
#line 574 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2761 "parser.tab.cpp"
    break;

  case 97:
#line 577 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2769 "parser.tab.cpp"
    break;

  case 98:
#line 580 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2777 "parser.tab.cpp"
    break;

  case 99:
#line 583 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2785 "parser.tab.cpp"
    break;

  case 100:
#line 586 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2793 "parser.tab.cpp"
    break;

  case 101:
#line 589 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2801 "parser.tab.cpp"
    break;

  case 102:
#line 592 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2809 "parser.tab.cpp"
    break;

  case 103:
#line 595 "parser.y"
                       {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2817 "parser.tab.cpp"
    break;

  case 104:
#line 598 "parser.y"
                        {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2825 "parser.tab.cpp"
    break;

  case 105:
#line 601 "parser.y"
                         {
                (yyval.ptr) = (yyvsp[0].ptr);
            }
#line 2833 "parser.tab.cpp"
    break;

  case 106:
#line 605 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Delete Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2844 "parser.tab.cpp"
    break;

  case 107:
#line 611 "parser.y"
               {
    (yyval.ptr) = new node("nt", "Pass Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2854 "parser.tab.cpp"
    break;

  case 108:
#line 616 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2862 "parser.tab.cpp"
    break;

  case 109:
#line 619 "parser.y"
                        {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2870 "parser.tab.cpp"
    break;

  case 110:
#line 622 "parser.y"
                      {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2878 "parser.tab.cpp"
    break;

  case 111:
#line 625 "parser.y"
                     {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2886 "parser.tab.cpp"
    break;

  case 112:
#line 628 "parser.y"
                    {
            (yyval.ptr) = (yyvsp[0].ptr);
        }
#line 2894 "parser.tab.cpp"
    break;

  case 113:
#line 632 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Break Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2904 "parser.tab.cpp"
    break;

  case 114:
#line 638 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Continue Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2914 "parser.tab.cpp"
    break;

  case 115:
#line 644 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "Return Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2925 "parser.tab.cpp"
    break;

  case 116:
#line 651 "parser.y"
                       {
      (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2933 "parser.tab.cpp"
    break;

  case 117:
#line 653 "parser.y"
    {
      (yyval.ptr) = nullptr;
}
#line 2941 "parser.tab.cpp"
    break;

  case 118:
#line 656 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2949 "parser.tab.cpp"
    break;

  case 119:
#line 659 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Raise Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2960 "parser.tab.cpp"
    break;

  case 120:
#line 665 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2968 "parser.tab.cpp"
    break;

  case 121:
#line 667 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "condition from test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 2980 "parser.tab.cpp"
    break;

  case 122:
#line 673 "parser.y"
   {    
    (yyval.ptr) = nullptr;
}
#line 2988 "parser.tab.cpp"
    break;

  case 123:
#line 677 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 2996 "parser.tab.cpp"
    break;

  case 124:
#line 680 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3004 "parser.tab.cpp"
    break;

  case 125:
#line 683 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Import Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3015 "parser.tab.cpp"
    break;

  case 126:
#line 690 "parser.y"
                                                                                                         {
                    (yyval.ptr) = new node("nt", "Import from");
                    ast.add_node((yyval.ptr));
                    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
                    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
            }
#line 3028 "parser.tab.cpp"
    break;

  case 127:
#line 699 "parser.y"
                                                                             {
    (yyval.ptr) = new node("nt", "close plus dot or ellipsis name or plus dot ellip");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3039 "parser.tab.cpp"
    break;

  case 128:
#line 704 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3047 "parser.tab.cpp"
    break;

  case 129:
#line 708 "parser.y"
                                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3055 "parser.tab.cpp"
    break;

  case 130:
#line 710 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "star or import parentheses or import");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3067 "parser.tab.cpp"
    break;

  case 131:
#line 716 "parser.y"
                   {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3075 "parser.tab.cpp"
    break;

  case 132:
#line 720 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3086 "parser.tab.cpp"
    break;

  case 133:
#line 725 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "plus dot or ellipsis");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3097 "parser.tab.cpp"
    break;

  case 134:
#line 730 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3105 "parser.tab.cpp"
    break;

  case 135:
#line 732 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3113 "parser.tab.cpp"
    break;

  case 136:
#line 736 "parser.y"
                                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3121 "parser.tab.cpp"
    break;

  case 137:
#line 738 "parser.y"
    {
    (yyval.ptr) = nullptr;
}
#line 3129 "parser.tab.cpp"
    break;

  case 138:
#line 742 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3137 "parser.tab.cpp"
    break;

  case 139:
#line 744 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));  
}
#line 3149 "parser.tab.cpp"
    break;

  case 140:
#line 752 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3157 "parser.tab.cpp"
    break;

  case 141:
#line 754 "parser.y"
                       {
    (yyval.ptr) = new node("nt", "Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3169 "parser.tab.cpp"
    break;

  case 142:
#line 762 "parser.y"
                                                                  {
    (yyval.ptr) = new node("nt", "Import As Names");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr)); 
}
#line 3181 "parser.tab.cpp"
    break;

  case 143:
#line 770 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Import As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3193 "parser.tab.cpp"
    break;

  case 144:
#line 776 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3201 "parser.tab.cpp"
    break;

  case 145:
#line 780 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Dotted As Names");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3212 "parser.tab.cpp"
    break;

  case 146:
#line 787 "parser.y"
                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Dotted As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3224 "parser.tab.cpp"
    break;

  case 147:
#line 793 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3232 "parser.tab.cpp"
    break;

  case 148:
#line 797 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Dotted Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3243 "parser.tab.cpp"
    break;

  case 149:
#line 804 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Close Dotted Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3255 "parser.tab.cpp"
    break;

  case 150:
#line 810 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3263 "parser.tab.cpp"
    break;

  case 151:
#line 814 "parser.y"
                                         {
    (yyval.ptr) = new node("nt", "Global Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3275 "parser.tab.cpp"
    break;

  case 152:
#line 821 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Nonlocal Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
}
#line 3286 "parser.tab.cpp"
    break;

  case 153:
#line 827 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Comma Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3298 "parser.tab.cpp"
    break;

  case 154:
#line 833 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3306 "parser.tab.cpp"
    break;

  case 155:
#line 837 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3317 "parser.tab.cpp"
    break;

  case 156:
#line 842 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Assert Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3330 "parser.tab.cpp"
    break;

  case 157:
#line 851 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3338 "parser.tab.cpp"
    break;

  case 158:
#line 853 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3346 "parser.tab.cpp"
    break;

  case 159:
#line 855 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3354 "parser.tab.cpp"
    break;

  case 160:
#line 857 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3362 "parser.tab.cpp"
    break;

  case 161:
#line 859 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3370 "parser.tab.cpp"
    break;

  case 162:
#line 861 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3378 "parser.tab.cpp"
    break;

  case 163:
#line 863 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3386 "parser.tab.cpp"
    break;

  case 164:
#line 865 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3394 "parser.tab.cpp"
    break;

  case 165:
#line 867 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3402 "parser.tab.cpp"
    break;

  case 166:
#line 871 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Async Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3413 "parser.tab.cpp"
    break;

  case 167:
#line 878 "parser.y"
                                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3421 "parser.tab.cpp"
    break;

  case 168:
#line 880 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3429 "parser.tab.cpp"
    break;

  case 169:
#line 882 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3437 "parser.tab.cpp"
    break;

  case 170:
#line 886 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "If Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-5].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3452 "parser.tab.cpp"
    break;

  case 171:
#line 897 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Else Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3464 "parser.tab.cpp"
    break;

  case 172:
#line 903 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3472 "parser.tab.cpp"
    break;

  case 173:
#line 907 "parser.y"
                                                            {
    (yyval.ptr) = new node("nt", "Close Elif Test Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3486 "parser.tab.cpp"
    break;

  case 174:
#line 915 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3494 "parser.tab.cpp"
    break;

  case 175:
#line 919 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "While Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3507 "parser.tab.cpp"
    break;

  case 176:
#line 926 "parser.y"
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
#line 3523 "parser.tab.cpp"
    break;

  case 177:
#line 937 "parser.y"
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
#line 3538 "parser.tab.cpp"
    break;

  case 178:
#line 946 "parser.y"
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
#line 3556 "parser.tab.cpp"
    break;

  case 179:
#line 959 "parser.y"
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
#line 3571 "parser.tab.cpp"
    break;

  case 180:
#line 968 "parser.y"
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

  case 181:
#line 979 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Finally Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3598 "parser.tab.cpp"
    break;

  case 182:
#line 985 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3606 "parser.tab.cpp"
    break;

  case 183:
#line 989 "parser.y"
                                             {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3618 "parser.tab.cpp"
    break;

  case 184:
#line 995 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Plus Except Colon Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3631 "parser.tab.cpp"
    break;

  case 185:
#line 1004 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "With Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3645 "parser.tab.cpp"
    break;

  case 186:
#line 1014 "parser.y"
                                                      {
    (yyval.ptr) = new node("nt", "Close Comma With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3657 "parser.tab.cpp"
    break;

  case 187:
#line 1020 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3665 "parser.tab.cpp"
    break;

  case 188:
#line 1024 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3673 "parser.tab.cpp"
    break;

  case 189:
#line 1026 "parser.y"
                {
    (yyval.ptr) = new node("nt", "With Item");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3685 "parser.tab.cpp"
    break;

  case 190:
#line 1035 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Except Clause");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3696 "parser.tab.cpp"
    break;

  case 191:
#line 1042 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3704 "parser.tab.cpp"
    break;

  case 192:
#line 1044 "parser.y"
                {
    (yyval.ptr) = new node("nt", "Condition Test As Name");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3716 "parser.tab.cpp"
    break;

  case 193:
#line 1050 "parser.y"
   {
    (yyval.ptr) = NULL;
}
#line 3724 "parser.tab.cpp"
    break;

  case 194:
#line 1054 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3732 "parser.tab.cpp"
    break;

  case 195:
#line 1056 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Suite");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3745 "parser.tab.cpp"
    break;

  case 196:
#line 1064 "parser.y"
               {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3753 "parser.tab.cpp"
    break;

  case 197:
#line 1066 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Plus Statement");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3764 "parser.tab.cpp"
    break;

  case 198:
#line 1072 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3778 "parser.tab.cpp"
    break;

  case 199:
#line 1080 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3786 "parser.tab.cpp"
    break;

  case 200:
#line 1082 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3794 "parser.tab.cpp"
    break;

  case 201:
#line 1085 "parser.y"
                    {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3802 "parser.tab.cpp"
    break;

  case 202:
#line 1087 "parser.y"
                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3810 "parser.tab.cpp"
    break;

  case 203:
#line 1091 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3823 "parser.tab.cpp"
    break;

  case 204:
#line 1098 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Lambda Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3835 "parser.tab.cpp"
    break;

  case 205:
#line 1106 "parser.y"
                                                  {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3848 "parser.tab.cpp"
    break;

  case 206:
#line 1113 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Lambda Definition NO Condition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3860 "parser.tab.cpp"
    break;

  case 207:
#line 1121 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Or Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3871 "parser.tab.cpp"
    break;

  case 208:
#line 1128 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "Close Or And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3883 "parser.tab.cpp"
    break;

  case 209:
#line 1134 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3891 "parser.tab.cpp"
    break;

  case 210:
#line 1138 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "And Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3902 "parser.tab.cpp"
    break;

  case 211:
#line 1145 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close And Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3914 "parser.tab.cpp"
    break;

  case 212:
#line 1151 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3922 "parser.tab.cpp"
    break;

  case 213:
#line 1155 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "Not Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3933 "parser.tab.cpp"
    break;

  case 214:
#line 1162 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Close Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3944 "parser.tab.cpp"
    break;

  case 215:
#line 1167 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3952 "parser.tab.cpp"
    break;

  case 216:
#line 1171 "parser.y"
                                 {
    (yyval.ptr) = new node("nt", "Comparison");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3963 "parser.tab.cpp"
    break;

  case 217:
#line 1178 "parser.y"
                                               {
    (yyval.ptr) = new node("nt", "Close Comparison Operator Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 3975 "parser.tab.cpp"
    break;

  case 218:
#line 1184 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 3983 "parser.tab.cpp"
    break;

  case 219:
#line 1192 "parser.y"
            {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3991 "parser.tab.cpp"
    break;

  case 220:
#line 1194 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 3999 "parser.tab.cpp"
    break;

  case 221:
#line 1196 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4007 "parser.tab.cpp"
    break;

  case 222:
#line 1198 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4015 "parser.tab.cpp"
    break;

  case 223:
#line 1200 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4023 "parser.tab.cpp"
    break;

  case 224:
#line 1202 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4031 "parser.tab.cpp"
    break;

  case 225:
#line 1204 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4039 "parser.tab.cpp"
    break;

  case 226:
#line 1206 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4047 "parser.tab.cpp"
    break;

  case 227:
#line 1208 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Not in");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4058 "parser.tab.cpp"
    break;

  case 228:
#line 1213 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4066 "parser.tab.cpp"
    break;

  case 229:
#line 1215 "parser.y"
          {
    (yyval.ptr) = new node("nt", "Is Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4077 "parser.tab.cpp"
    break;

  case 230:
#line 1222 "parser.y"
                   {
    (yyval.ptr) = new node("nt", "Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4088 "parser.tab.cpp"
    break;

  case 231:
#line 1229 "parser.y"
                             {
    (yyval.ptr) = new node("nt", "Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4099 "parser.tab.cpp"
    break;

  case 232:
#line 1235 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Close Or Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4111 "parser.tab.cpp"
    break;

  case 233:
#line 1241 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4119 "parser.tab.cpp"
    break;

  case 234:
#line 1245 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Xor Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4130 "parser.tab.cpp"
    break;

  case 235:
#line 1252 "parser.y"
                                                   {
    (yyval.ptr) = new node("nt", "Close Xor And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4142 "parser.tab.cpp"
    break;

  case 236:
#line 1258 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4150 "parser.tab.cpp"
    break;

  case 237:
#line 1262 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "And Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4161 "parser.tab.cpp"
    break;

  case 238:
#line 1269 "parser.y"
                                                     {
    (yyval.ptr) = new node("nt", "Close And Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4173 "parser.tab.cpp"
    break;

  case 239:
#line 1275 "parser.y"
     {
(yyval.ptr) = NULL;
}
#line 4181 "parser.tab.cpp"
    break;

  case 240:
#line 1279 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Shift Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4192 "parser.tab.cpp"
    break;

  case 241:
#line 1286 "parser.y"
                           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4200 "parser.tab.cpp"
    break;

  case 242:
#line 1288 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4208 "parser.tab.cpp"
    break;

  case 243:
#line 1292 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Leftright shift Arithmatic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4220 "parser.tab.cpp"
    break;

  case 244:
#line 1298 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4228 "parser.tab.cpp"
    break;

  case 245:
#line 1302 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Arithmatic Expression");
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4238 "parser.tab.cpp"
    break;

  case 246:
#line 1308 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4249 "parser.tab.cpp"
    break;

  case 247:
#line 1313 "parser.y"
                                {
    (yyval.ptr) = new node("nt", "Close Plus Minus Term");
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4260 "parser.tab.cpp"
    break;

  case 248:
#line 1318 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4268 "parser.tab.cpp"
    break;

  case 249:
#line 1322 "parser.y"
                                  {
    (yyval.ptr) = new node("nt", "Term");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4279 "parser.tab.cpp"
    break;

  case 250:
#line 1329 "parser.y"
                       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4287 "parser.tab.cpp"
    break;

  case 251:
#line 1331 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4295 "parser.tab.cpp"
    break;

  case 252:
#line 1333 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4303 "parser.tab.cpp"
    break;

  case 253:
#line 1335 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4311 "parser.tab.cpp"
    break;

  case 254:
#line 1337 "parser.y"
        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4319 "parser.tab.cpp"
    break;

  case 255:
#line 1341 "parser.y"
                                                                      {
    (yyval.ptr) = new node("nt", "Close Mul Div Ops Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4331 "parser.tab.cpp"
    break;

  case 256:
#line 1347 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4339 "parser.tab.cpp"
    break;

  case 257:
#line 1351 "parser.y"
                                        {
    (yyval.ptr) = new node("nt", "Factor");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4350 "parser.tab.cpp"
    break;

  case 258:
#line 1358 "parser.y"
                                                                           {
    (yyval.ptr) = new node("nt", "Close Plus Or Minus Or Not");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4361 "parser.tab.cpp"
    break;

  case 259:
#line 1363 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4369 "parser.tab.cpp"
    break;

  case 260:
#line 1368 "parser.y"
                         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4377 "parser.tab.cpp"
    break;

  case 261:
#line 1370 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4385 "parser.tab.cpp"
    break;

  case 262:
#line 1372 "parser.y"
       {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4393 "parser.tab.cpp"
    break;

  case 263:
#line 1376 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Power");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4405 "parser.tab.cpp"
    break;

  case 264:
#line 1382 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4413 "parser.tab.cpp"
    break;

  case 265:
#line 1386 "parser.y"
                                   {
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4425 "parser.tab.cpp"
    break;

  case 266:
#line 1392 "parser.y"
                      {
    (yyval.ptr) = new node("nt", "Atomic Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4436 "parser.tab.cpp"
    break;

  case 267:
#line 1399 "parser.y"
                                    {
    (yyval.ptr) = new node("nt", "Close Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4447 "parser.tab.cpp"
    break;

  case 268:
#line 1404 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4455 "parser.tab.cpp"
    break;

  case 269:
#line 1408 "parser.y"
                                     {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4467 "parser.tab.cpp"
    break;

  case 270:
#line 1414 "parser.y"
                        {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4479 "parser.tab.cpp"
    break;

  case 271:
#line 1420 "parser.y"
           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4490 "parser.tab.cpp"
    break;

  case 272:
#line 1425 "parser.y"
                           {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4502 "parser.tab.cpp"
    break;

  case 273:
#line 1431 "parser.y"
            {
    (yyval.ptr) = new node("nt", "Atom");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4513 "parser.tab.cpp"
    break;

  case 274:
#line 1436 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4521 "parser.tab.cpp"
    break;

  case 275:
#line 1438 "parser.y"
           {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4529 "parser.tab.cpp"
    break;

  case 276:
#line 1440 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4537 "parser.tab.cpp"
    break;

  case 277:
#line 1442 "parser.y"
             {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4545 "parser.tab.cpp"
    break;

  case 278:
#line 1444 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4553 "parser.tab.cpp"
    break;

  case 279:
#line 1446 "parser.y"
         {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4561 "parser.tab.cpp"
    break;

  case 280:
#line 1448 "parser.y"
          {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4569 "parser.tab.cpp"
    break;

  case 281:
#line 1452 "parser.y"
                                  {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4577 "parser.tab.cpp"
    break;

  case 282:
#line 1454 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4585 "parser.tab.cpp"
    break;

  case 283:
#line 1456 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4593 "parser.tab.cpp"
    break;

  case 284:
#line 1460 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4601 "parser.tab.cpp"
    break;

  case 285:
#line 1462 "parser.y"
                    {
    (yyval.ptr) = new node("nt", "Multiple String");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4612 "parser.tab.cpp"
    break;

  case 286:
#line 1469 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4623 "parser.tab.cpp"
    break;

  case 287:
#line 1474 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Test List Comparision");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4635 "parser.tab.cpp"
    break;

  case 288:
#line 1482 "parser.y"
                              {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4647 "parser.tab.cpp"
    break;

  case 289:
#line 1488 "parser.y"
                          {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4659 "parser.tab.cpp"
    break;

  case 290:
#line 1494 "parser.y"
             {
    (yyval.ptr) = new node("nt", "Trailer");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));

}
#line 4671 "parser.tab.cpp"
    break;

  case 291:
#line 1502 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Subscript List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4683 "parser.tab.cpp"
    break;

  case 292:
#line 1510 "parser.y"
                                                        {
    (yyval.ptr) = new node("nt", "Close Comma Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4695 "parser.tab.cpp"
    break;

  case 293:
#line 1516 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4703 "parser.tab.cpp"
    break;

  case 294:
#line 1520 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4711 "parser.tab.cpp"
    break;

  case 295:
#line 1522 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Subscript");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4724 "parser.tab.cpp"
    break;

  case 296:
#line 1531 "parser.y"
                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4732 "parser.tab.cpp"
    break;

  case 297:
#line 1533 "parser.y"
    {
    (yyval.ptr) = NULL;

}
#line 4741 "parser.tab.cpp"
    break;

  case 298:
#line 1538 "parser.y"
                      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4749 "parser.tab.cpp"
    break;

  case 299:
#line 1540 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4757 "parser.tab.cpp"
    break;

  case 300:
#line 1544 "parser.y"
                  {
    (yyval.ptr) = new node("nt", "Slice Operation");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4768 "parser.tab.cpp"
    break;

  case 301:
#line 1549 "parser.y"
      {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4776 "parser.tab.cpp"
    break;

  case 302:
#line 1553 "parser.y"
                                                                    {
    (yyval.ptr) = new node("nt", "Expression List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4788 "parser.tab.cpp"
    break;

  case 303:
#line 1561 "parser.y"
                        {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4796 "parser.tab.cpp"
    break;

  case 304:
#line 1563 "parser.y"
              {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4804 "parser.tab.cpp"
    break;

  case 305:
#line 1567 "parser.y"
                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Expression Or Star Expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4816 "parser.tab.cpp"
    break;

  case 306:
#line 1573 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4824 "parser.tab.cpp"
    break;

  case 307:
#line 1577 "parser.y"
                                          {
    (yyval.ptr) = new node("nt", "Test List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4836 "parser.tab.cpp"
    break;

  case 308:
#line 1585 "parser.y"
                                            {
    (yyval.ptr) = new node("nt", "Close Comma Test");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4848 "parser.tab.cpp"
    break;

  case 309:
#line 1591 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4856 "parser.tab.cpp"
    break;

  case 310:
#line 1597 "parser.y"
                                                                                                {
    (yyval.ptr) = new node("nt", "DictOrSetMaker");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4867 "parser.tab.cpp"
    break;

  case 311:
#line 1602 "parser.y"
                     {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4875 "parser.tab.cpp"
    break;

  case 312:
#line 1606 "parser.y"
                                       {
    (yyval.ptr) = new node("nt", "Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4887 "parser.tab.cpp"
    break;

  case 313:
#line 1612 "parser.y"
                 {
    (yyval.ptr) = (yyvsp[-1].ptr);
}
#line 4895 "parser.tab.cpp"
    break;

  case 314:
#line 1617 "parser.y"
                                                                                                   {
    (yyval.ptr) = new node("nt", "Close Comma Test Column Test Or Star expression");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4907 "parser.tab.cpp"
    break;

  case 315:
#line 1623 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4915 "parser.tab.cpp"
    break;

  case 316:
#line 1627 "parser.y"
                                                                {
    (yyval.ptr) = (yyvsp[0].ptr);
}
#line 4923 "parser.tab.cpp"
    break;

  case 317:
#line 1629 "parser.y"
                                                {
    (yyval.ptr) = new node("nt", "CompForOrCloseCommaTestColTestOrStarRexprCondComma");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4934 "parser.tab.cpp"
    break;

  case 318:
#line 1636 "parser.y"
                                           {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4945 "parser.tab.cpp"
    break;

  case 319:
#line 1641 "parser.y"
                                                         {
    (yyval.ptr) = new node("nt", "Some Non Terminal");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4957 "parser.tab.cpp"
    break;

  case 320:
#line 1649 "parser.y"
                                                       {
    (yyval.ptr) = new node("nt", "Class Definition");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-4].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-3].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4971 "parser.tab.cpp"
    break;

  case 321:
#line 1659 "parser.y"
                                              {
    (yyval.ptr) = new node("nt", "Condition Parentheses Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 4983 "parser.tab.cpp"
    break;

  case 322:
#line 1665 "parser.y"
    {
    (yyval.ptr) = NULL;
}
#line 4991 "parser.tab.cpp"
    break;

  case 323:
#line 1669 "parser.y"
                                                 {
    (yyval.ptr) = new node("nt", "Argument List");
    ast.add_node((yyval.ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
    ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
}
#line 5003 "parser.tab.cpp"
    break;

  case 324:
#line 1677 "parser.y"
                                                        {
        (yyval.ptr) = new node("nt", "Close Comma Argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5015 "parser.tab.cpp"
    break;

  case 325:
#line 1683 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5023 "parser.tab.cpp"
    break;

  case 326:
#line 1696 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));
    }
#line 5034 "parser.tab.cpp"
    break;

  case 327:
#line 1702 "parser.y"
         {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5042 "parser.tab.cpp"
    break;

  case 328:
#line 1705 "parser.y"
                  {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr)); 
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5054 "parser.tab.cpp"
    break;

  case 329:
#line 1712 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5065 "parser.tab.cpp"
    break;

  case 330:
#line 1718 "parser.y"
             {
        (yyval.ptr) = new node("nt", "argument");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5076 "parser.tab.cpp"
    break;

  case 331:
#line 1725 "parser.y"
                    {
        (yyval.ptr) = (yyvsp[0].ptr);    
    }
#line 5084 "parser.tab.cpp"
    break;

  case 332:
#line 1727 "parser.y"
                {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5092 "parser.tab.cpp"
    break;

  case 333:
#line 1730 "parser.y"
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
#line 5107 "parser.tab.cpp"
    break;

  case 334:
#line 1740 "parser.y"
                  {  
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5115 "parser.tab.cpp"
    break;

  case 335:
#line 1742 "parser.y"
        {
        (yyval.ptr) = nullptr;
    }
#line 5123 "parser.tab.cpp"
    break;

  case 336:
#line 1747 "parser.y"
                        {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5134 "parser.tab.cpp"
    break;

  case 337:
#line 1752 "parser.y"
                                 {
        (yyval.ptr) = new node("nt", "comp if");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-2].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5146 "parser.tab.cpp"
    break;

  case 338:
#line 1765 "parser.y"
                            {
        (yyval.ptr) = new node("nt", "Yield Expression");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5157 "parser.tab.cpp"
    break;

  case 339:
#line 1771 "parser.y"
            {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5165 "parser.tab.cpp"
    break;

  case 340:
#line 1775 "parser.y"
                     {
        (yyval.ptr) = new node("nt", "Yield Arguments");
        ast.add_node((yyval.ptr));
        ast.add_edge((yyval.ptr), (yyvsp[-1].ptr));   
        ast.add_edge((yyval.ptr), (yyvsp[0].ptr));   
    }
#line 5176 "parser.tab.cpp"
    break;

  case 341:
#line 1781 "parser.y"
               {
        (yyval.ptr) = (yyvsp[0].ptr);
    }
#line 5184 "parser.tab.cpp"
    break;


#line 5188 "parser.tab.cpp"

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
#line 1785 "parser.y"



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
