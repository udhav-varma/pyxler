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




/* First part of user prologue.  */
#line 11 "parser.y"



#line 74 "parser.tab.c"

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
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



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
#define YYFINAL  116
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   600

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  158
/* YYNRULES -- Number of rules.  */
#define YYNRULES  339
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  516

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
       0,    82,    82,    82,    82,    88,    89,    89,    90,    91,
      91,    92,    92,    94,    95,    95,    95,    96,    97,    98,
      98,    99,   100,   100,   106,   107,   108,   109,   109,   109,
     110,   111,   111,   112,   112,   113,   113,   114,   114,   115,
     115,   117,   118,   119,   120,   121,   121,   122,   122,   123,
     124,   124,   125,   125,   125,   126,   126,   128,   128,   129,
     130,   131,   132,   132,   133,   133,   133,   133,   134,   134,
     134,   134,   135,   136,   136,   137,   137,   138,   139,   140,
     141,   142,   143,   143,   144,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   150,   150,   150,   150,   152,   153,   154,   154,   154,
     154,   154,   155,   156,   157,   158,   158,   159,   160,   161,
     161,   161,   162,   162,   163,   165,   168,   168,   169,   169,
     169,   170,   170,   170,   170,   171,   171,   172,   172,   173,
     173,   174,   175,   175,   176,   177,   177,   178,   179,   179,
     180,   181,   182,   182,   183,   183,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   187,   187,   187,   188,
     189,   189,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   197,   197,   198,   198,   201,
     202,   202,   202,   203,   203,   204,   204,   205,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   210,   210,   211,
     212,   212,   213,   214,   214,   215,   216,   216,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   220,
     221,   222,   222,   223,   224,   224,   225,   226,   226,   227,
     228,   228,   229,   229,   230,   231,   231,   231,   232,   233,
     233,   233,   233,   233,   234,   234,   236,   237,   237,   238,
     238,   238,   239,   239,   240,   240,   241,   241,   243,   244,
     244,   245,   246,   246,   246,   246,   246,   246,   247,   247,
     247,   248,   248,   249,   249,   250,   250,   250,   251,   252,
     252,   253,   253,   254,   254,   255,   255,   256,   256,   257,
     258,   258,   259,   259,   260,   261,   261,   262,   263,   264,
     264,   265,   265,   266,   266,   267,   267,   269,   270,   270,
     271,   272,   272,   283,   284,   285,   286,   287,   289,   289,
     290,   290,   291,   291,   292,   292,   297,   297,   298,   298
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
  "single_input", "decorator", "cond_brack_cond_arglist",
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

#define YYPACT_NINF (-427)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-338)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     374,  -427,   141,   -32,  -427,  -427,  -427,    41,    43,   -28,
      56,    63,   129,    30,    30,   -32,    30,   -18,    30,    27,
      35,   159,   167,    56,  -427,   161,  -427,    89,  -427,  -427,
    -427,  -427,  -427,   506,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,   173,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,   178,  -427,
    -427,   156,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,   276,  -427,  -427,
    -427,  -427,  -427,  -427,   170,   -28,   -28,   213,   224,    56,
    -427,  -427,  -427,   218,  -427,  -427,   165,   169,   226,   179,
     137,  -427,   243,  -427,   259,    30,   259,   194,   197,    30,
    -427,  -427,   201,   212,   217,  -427,  -427,   246,  -427,  -427,
    -427,  -427,  -427,   219,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,    30,   216,  -427,
    -427,    53,   221,  -427,  -427,   266,   269,  -427,  -427,  -427,
     228,   225,   229,    60,   107,   234,   366,  -427,  -427,   270,
    -427,  -427,  -427,    10,  -427,  -427,  -427,     6,   222,  -427,
    -427,   275,  -427,  -427,   248,   250,    30,  -427,  -427,    49,
    -427,   235,   251,   321,   254,   254,    30,   137,    30,   137,
     294,  -427,   134,   164,  -427,   257,  -427,  -427,  -427,    30,
      30,  -427,  -427,   155,   261,    55,   289,   155,   336,  -427,
    -427,   195,   339,   197,    14,  -427,  -427,  -427,   510,  -427,
     322,  -427,  -427,   191,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
      31,   273,  -427,  -427,   255,   258,   342,  -427,     1,    42,
    -427,    37,  -427,  -427,   334,   344,  -427,  -427,  -427,  -427,
     345,    56,  -427,   346,  -427,  -427,   281,   333,   498,   283,
      57,   136,   284,   137,    30,  -427,  -427,  -427,   287,  -427,
    -427,   288,    30,    30,   297,    45,  -427,  -427,   137,   286,
     365,   365,   302,  -427,   197,    30,   303,   305,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,    30,  -427,  -427,  -427,
     357,   364,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,     1,  -427,   221,
    -427,   373,  -427,   189,  -427,  -427,  -427,   155,   391,    64,
    -427,  -427,  -427,   396,   338,   340,  -427,  -427,  -427,   118,
     137,   341,  -427,  -427,  -427,   457,   137,  -427,   395,   343,
     386,   348,   137,  -427,  -427,   153,  -427,    68,  -427,  -427,
    -427,  -427,    30,  -427,   347,  -427,    30,   257,  -427,  -427,
    -427,  -427,  -427,   137,  -427,  -427,  -427,  -427,  -427,  -427,
     -32,  -427,    31,   350,   325,    31,  -427,   352,  -427,   353,
     335,  -427,   355,  -427,  -427,   344,  -427,    30,  -427,   407,
     137,  -427,  -427,  -427,   423,   137,   359,  -427,   137,  -427,
     259,   197,   259,   259,  -427,  -427,   188,  -427,  -427,  -427,
     358,   360,  -427,   410,  -427,   221,  -427,    30,  -427,   361,
    -427,  -427,  -427,  -427,   363,   148,  -427,   367,   368,  -427,
    -427,  -427,   137,  -427,   257,  -427,   257,  -427,  -427,   183,
    -427,    79,  -427,  -427,  -427,  -427,    46,  -427,   151,  -427,
    -427,   369,   137,   137,  -427,  -427,  -427,   287,   365,   197,
     365,   365,  -427,    58,   350,  -427,  -427,     2,  -427,  -427,
    -427,  -427,  -427,   257,  -427,   257,  -427,   413,  -427,  -427,
    -427,  -427,  -427,  -427,   358,    51,   238,  -427,  -427,  -427,
     413,   372,  -427,  -427,   413,  -427
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     214,     2,     0,   258,   106,   112,   113,   214,   214,   136,
       0,     0,     0,   214,   214,   258,   214,     0,   214,     0,
     214,     0,     0,     0,   258,     0,    11,     0,   163,   161,
       3,    61,    64,    78,    89,    65,    66,    67,   107,   108,
     109,   111,   110,    68,   122,   123,    69,    70,    71,     0,
     164,   156,   157,   158,   159,   160,    86,   198,   199,   208,
     211,   258,    87,   162,   117,   166,   165,   168,   167,   301,
     300,   232,   235,   238,   243,   247,   255,     0,   105,   303,
     114,   306,   115,   118,   119,   134,   133,     0,   127,     0,
     149,   146,   124,   139,   153,   153,   154,     0,     0,     0,
     214,   186,   187,    44,     0,   214,    48,     0,    81,   214,
     339,   336,   319,     0,     7,   229,     1,     0,    12,    13,
      16,    15,    14,    63,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   214,    84,    82,
      72,   214,    91,     4,   214,   206,   209,   213,   212,   217,
     230,   233,   236,   239,   244,   248,     0,   276,   272,   281,
     277,   275,   274,   214,   259,   260,   261,   214,     0,   257,
     256,   263,   267,   273,    91,    91,   214,   132,   131,     0,
     126,   147,   144,     0,   150,   151,   214,   214,   214,   214,
       0,   193,     0,     0,   258,    91,   203,    47,    46,   214,
     214,    46,   338,   214,     0,    23,    20,   214,     0,     6,
      17,   214,     0,    81,   214,    83,    74,    73,    90,    85,
       0,   214,   214,   215,   258,   258,   258,   240,   241,   258,
     258,   258,   253,   250,   249,   251,   252,   258,   267,   282,
      89,     0,   279,   278,     0,     0,     0,   258,   265,   258,
     299,   214,   304,   120,   137,     0,   128,   125,   143,   130,
       0,     0,   140,     0,   155,   173,     0,   174,   214,     0,
     214,   171,     0,   214,   214,   188,    90,    43,    54,   202,
      80,    56,   214,   214,     0,   324,     9,   322,   214,    39,
       0,    38,     0,    22,    81,   214,     0,     0,     5,    60,
      59,    79,    77,    76,    75,    88,   214,   207,   210,   225,
       0,   227,   220,   221,   222,   223,   224,   218,   219,   258,
     231,   234,   237,   242,   245,   246,   254,   264,   332,    91,
     283,     0,   268,   214,   269,   271,   262,   214,     0,   214,
     266,   302,   305,     0,     0,    91,   148,   145,   152,   171,
     214,     0,   195,    57,    58,   214,   214,   189,   190,     0,
     181,     0,   214,   184,   185,    52,    42,    51,    41,   326,
     327,   318,   214,   323,    91,   317,   214,    91,    36,    37,
      21,    36,    19,   214,     8,   197,   226,   228,   216,   284,
     258,   258,    89,    86,     0,   312,   308,     0,   287,   291,
       0,   290,     0,   138,   129,    90,   141,   214,   169,   176,
     214,   194,   196,   179,     0,   214,     0,   178,   214,   182,
       0,    81,     0,    48,    55,   325,   214,   320,    40,    26,
      29,    34,    18,     0,   310,    91,   315,   214,   270,    91,
     307,   313,   285,   286,    91,   214,   142,     0,     0,   175,
     191,   170,   214,   183,    91,    45,    91,    46,   321,    27,
      25,    32,    24,   214,   316,   309,   214,   314,   214,   288,
     293,   296,   214,   214,   180,    53,    50,    54,     0,    81,
       0,    38,    33,   333,     0,   311,   289,   214,   292,   295,
     172,   177,    49,    91,    35,    91,    36,   214,   330,   328,
     329,   297,    28,    31,    29,     0,   334,   201,   200,    30,
     214,     0,   335,   205,   214,   204
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -427,  -427,   418,  -427,  -427,  -181,  -427,  -427,  -427,  -427,
      25,  -427,  -427,  -427,  -427,   -58,  -427,  -427,  -353,   -33,
    -187,   -56,   -82,  -193,    28,  -427,   -27,  -427,    97,    12,
    -427,  -427,   242,  -427,  -427,  -427,  -427,  -427,  -190,  -427,
     241,  -138,  -220,  -158,  -427,  -427,  -427,  -427,  -427,  -427,
    -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,  -427,
     160,  -427,    52,   199,   203,  -427,  -427,  -427,     7,  -427,
    -427,  -427,   377,  -427,   463,  -427,  -427,  -427,   128,  -427,
    -427,   476,  -427,  -427,  -427,   481,  -427,   211,   220,  -427,
    -168,  -427,    -7,  -426,  -427,  -427,  -140,  -427,   267,  -427,
     265,  -427,  -427,  -427,  -427,    -1,   -19,  -427,   268,  -427,
     264,  -427,   271,  -427,  -427,   290,  -427,    48,  -427,  -427,
    -179,  -427,  -427,  -427,  -427,   252,   362,  -427,   337,   328,
    -427,  -427,  -427,    34,    54,  -427,  -427,   -12,   249,  -427,
     -10,  -427,  -427,    38,  -427,  -427,  -427,   486,  -427,  -427,
    -427,    95,    18,  -225,  -427,  -427,  -107,  -427
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,   208,   209,   284,    27,    28,   119,   120,
      29,   296,   206,   292,   293,   460,   482,   462,   430,   378,
     379,   107,   108,   278,   198,   424,   366,   368,   352,   191,
     123,   212,    31,    32,   215,   302,   138,   139,   201,   140,
      33,    34,   142,   219,   141,    35,    36,    37,    38,    39,
      40,    80,    41,    42,    83,    43,    44,    45,    87,   257,
      88,    89,   258,    91,   259,   345,    92,   182,    93,   181,
      46,    47,   184,    48,   354,    50,    66,    51,   360,   349,
      52,    53,    54,   417,   271,    55,   193,   101,   272,   357,
     192,   355,    56,   506,    57,   507,    58,   145,    59,   146,
      60,    61,   148,   223,   319,    62,    70,   150,    71,   151,
      72,   152,    73,   229,   153,    74,   154,    75,   237,   155,
      76,    77,   169,   170,   171,   248,   172,   241,   173,   242,
     340,   400,   444,   401,   402,   488,   489,    78,    79,   174,
      82,   175,   394,   395,   439,   440,   396,    63,   204,   286,
     374,   287,   498,   499,   331,   500,    64,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    84,    69,    98,   220,   115,    96,    97,   281,    99,
     110,   102,    30,    81,    69,   330,   250,   252,   294,   265,
     329,   267,   195,   301,   197,   240,   297,    65,   431,   240,
     114,    19,    85,   103,   217,    19,   328,   277,  -337,    19,
     -90,    24,   149,    19,  -116,   -90,  -121,    20,   109,    86,
     328,    20,   121,  -333,   100,   254,   243,   103,   326,    19,
     373,   289,    90,   328,    19,   -90,    19,  -333,   336,    94,
      19,   337,    19,   104,   103,    19,  -298,   497,   338,    24,
     305,  -280,    19,    24,   513,   289,    19,    24,   515,   339,
      20,  -298,   391,    19,   117,   244,   180,   104,   196,   105,
     106,   290,   202,   377,   381,   363,  -337,   304,   -90,   -90,
    -337,  -337,   -90,   -90,   422,    24,  -116,   -90,  -121,   255,
     375,   372,   256,   510,   106,   480,   227,   228,   291,  -192,
     213,   216,    21,    22,    81,    95,  -294,   -90,   407,   359,
     190,   423,   210,   504,     3,     4,     5,     6,     7,     8,
       9,    10,   481,    11,    12,    13,   397,   359,    23,   103,
     269,   116,   270,    15,   270,   112,    19,   436,    18,   253,
     441,   389,   435,   113,    20,   275,   143,    19,   266,   264,
      19,    81,   409,   176,    19,    22,   147,   406,   413,   289,
     230,   231,   279,   280,   419,   392,   285,   144,   -62,   420,
     285,   282,     3,     4,     5,     6,     7,     8,     9,    10,
      24,    11,    12,    13,   309,   432,   427,    19,    19,   429,
    -294,   310,  -294,  -294,    19,   311,   -10,   179,   283,   478,
    -135,   455,    20,   183,   282,   391,   273,  -294,   274,   186,
     -90,   187,   449,   328,   342,   177,   178,   451,    69,   188,
     453,   189,   312,   313,   314,   315,   316,   497,   194,   -90,
    -333,   283,    24,   358,   477,   103,   199,   102,    24,   317,
     318,   203,   479,   200,   479,   369,   370,   464,   324,   325,
     353,   467,   205,   421,   474,   421,   469,   207,   382,   494,
      22,   493,   214,   495,   211,   218,   475,   221,   476,   385,
     388,   222,   232,   233,   490,   491,   225,   234,   224,   156,
     159,   226,   260,   246,   157,   158,   159,   160,   161,   235,
     236,   247,   249,   483,   251,   261,   393,   262,   263,   268,
     285,   276,   399,   288,   295,   502,   162,   503,   454,   298,
     456,   197,   300,   306,   332,   333,   163,   334,   335,   343,
     254,   346,   348,   350,   351,   356,   362,   508,   376,   164,
     165,   365,   367,   166,   167,   425,   168,   353,   371,   428,
     508,   289,   434,   380,   508,   383,   384,     1,   433,     2,
     386,     3,     4,     5,     6,     7,     8,     9,    10,    69,
      11,    12,    13,    14,   387,   390,    15,   398,    16,    17,
     447,    18,   403,    19,   157,   158,   159,   160,   161,   404,
     414,    20,   416,   410,   405,   415,   438,    21,    22,   285,
     418,   426,   437,   442,   443,  -293,   162,   445,   448,   450,
     465,   452,   459,   463,   461,   466,   163,   468,   470,   472,
     473,   487,   505,    23,   514,   118,   509,    24,   496,   511,
     492,   457,   412,   299,   167,   303,   168,   446,   344,   484,
     347,   399,     2,    49,     3,     4,     5,     6,     7,     8,
       9,    10,   185,    11,    12,    13,    14,   408,    67,    15,
     501,    16,    17,    68,    18,   364,    19,   308,   307,   321,
     327,   361,   320,   411,    20,   245,   239,   322,   341,   471,
      21,    22,   486,     2,   485,     3,     4,     5,     6,     7,
       8,     9,    10,   122,    11,    12,    13,    14,   238,   323,
      15,   458,    16,    17,   512,    18,    23,    19,     0,     0,
      24,     0,     0,     0,     0,    20,     0,     0,     0,    19,
    -214,    21,    22,  -214,     0,     0,     0,     0,  -214,  -214,
    -214,  -214,  -214,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,     0,    23,     0,     0,
    -214,    24,     0,     0,     0,     0,     0,     0,   137,     0,
    -214,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -214,  -214,     0,     0,  -214,  -214,     0,
    -214
};

static const yytype_int16 yycheck[] =
{
       7,     8,     3,    15,   144,    24,    13,    14,   201,    16,
      20,    18,     0,    20,    15,   240,   174,   175,   205,   187,
     240,   189,   104,   213,   106,   163,   207,     2,   381,   167,
      23,    29,    60,     6,   141,    29,     5,   195,     3,    29,
       3,    73,    61,    29,     3,     3,     3,    37,    13,    77,
       5,    37,    27,    22,    72,     6,   163,     6,   237,    29,
     285,     6,     6,     5,    29,    23,    29,    22,   247,     6,
      29,    70,    29,    46,     6,    29,    74,    19,    77,    73,
     218,    71,    29,    73,   510,     6,    29,    73,   514,    88,
      37,    89,    46,    29,     5,    89,    89,    46,   105,    72,
      73,    46,   109,   290,   294,   273,    71,   214,    71,    72,
      75,    76,    75,    76,    46,    73,    75,    75,    75,    70,
     288,    76,    73,    72,    73,    46,    66,    67,    73,    72,
     137,   141,    43,    44,   141,     6,    72,    91,    20,    21,
       3,    73,   117,   496,     7,     8,     9,    10,    11,    12,
      13,    14,    73,    16,    17,    18,   337,    21,    69,     6,
      26,     0,    28,    22,    28,     6,    29,   392,    27,   176,
     395,   329,   392,     6,    37,   194,     3,    29,   188,   186,
      29,   188,   350,    13,    29,    44,    30,   345,   356,     6,
      83,    84,   199,   200,   362,   333,   203,    19,     3,    46,
     207,    46,     7,     8,     9,    10,    11,    12,    13,    14,
      73,    16,    17,    18,    23,   383,   374,    29,    29,   377,
      72,    30,    74,    72,    29,    34,    71,    14,    73,    46,
       6,   421,    37,    15,    46,    46,    72,    89,    74,    74,
      89,    72,   410,     5,   251,    85,    86,   415,   249,    23,
     418,    72,    61,    62,    63,    64,    65,    19,    15,    71,
      22,    73,    73,   270,   457,     6,    72,   274,    73,    78,
      79,    70,   459,    76,   461,   282,   283,   435,   230,   231,
     268,   439,    70,   365,   452,   367,   444,    70,   295,   479,
      44,   478,    76,   480,    75,    74,   454,    31,   456,   306,
     319,    32,    68,    69,   472,   473,    81,    73,    80,    33,
      40,    82,    77,    91,    38,    39,    40,    41,    42,    85,
      86,    46,    74,   463,    74,    74,   333,     6,    74,    35,
     337,    74,   339,    72,    45,   493,    60,   495,   420,     3,
     422,   423,     3,    21,    71,    90,    70,    89,     6,    15,
       6,     6,     6,    72,    21,    72,    72,   497,    72,    83,
      84,    74,    74,    87,    88,   372,    90,   355,    71,   376,
     510,     6,   391,    71,   514,    72,    71,     3,   390,     5,
      23,     7,     8,     9,    10,    11,    12,    13,    14,   390,
      16,    17,    18,    19,    30,    22,    22,     6,    24,    25,
     407,    27,     6,    29,    38,    39,    40,    41,    42,    71,
      15,    37,    26,    72,    74,    72,    91,    43,    44,   426,
      72,    74,    72,    71,    89,    72,    60,    72,    21,     6,
     437,    72,    74,    23,    74,    74,    70,    74,   445,    72,
      72,    72,    29,    69,    72,    27,   504,    73,   481,   505,
     477,   423,   355,   211,    88,   214,    90,   405,   255,   466,
     261,   468,     5,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    95,    16,    17,    18,    19,   349,     2,    22,
     487,    24,    25,     2,    27,   274,    29,   222,   221,   225,
     238,   271,   224,    36,    37,   167,   159,   226,   249,   445,
      43,    44,   468,     5,   466,     7,     8,     9,    10,    11,
      12,    13,    14,    27,    16,    17,    18,    19,   156,   229,
      22,   426,    24,    25,   506,    27,    69,    29,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    29,
      30,    43,    44,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    69,    -1,    -1,
      60,    73,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      70,    -1,    -1,    73,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    87,    88,    -1,
      90
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     5,     7,     8,     9,    10,    11,    12,    13,
      14,    16,    17,    18,    19,    22,    24,    25,    27,    29,
      37,    43,    44,    69,    73,    93,    94,    98,    99,   102,
     121,   124,   125,   132,   133,   137,   138,   139,   140,   141,
     142,   144,   145,   147,   148,   149,   162,   163,   165,   166,
     167,   169,   172,   173,   174,   177,   184,   186,   188,   190,
     192,   193,   197,   239,   248,   102,   168,   173,   177,   197,
     198,   200,   202,   204,   207,   209,   212,   213,   229,   230,
     143,   184,   232,   146,   184,    60,    77,   150,   152,   153,
       6,   155,   158,   160,     6,     6,   184,   184,   229,   184,
      72,   179,   184,     6,    46,    72,    73,   113,   114,    13,
     232,   249,     6,     6,   160,   198,     0,     5,    94,   100,
     101,   102,   239,   122,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    72,   128,   129,
     131,   136,   134,     3,    19,   189,   191,    30,   194,   198,
     199,   201,   203,   206,   208,   211,    33,    38,    39,    40,
      41,    42,    60,    70,    83,    84,    87,    88,    90,   214,
     215,   216,   218,   220,   231,   233,    13,   152,   152,    14,
     160,   161,   159,    15,   164,   164,    74,    72,    23,    72,
       3,   121,   182,   178,    15,   114,   184,   114,   116,    72,
      76,   130,   184,    70,   240,    70,   104,    70,    95,    96,
     102,    75,   123,   184,    76,   126,   232,   248,    74,   135,
     188,    31,    32,   195,    80,    81,    82,    66,    67,   205,
      83,    84,    68,    69,    73,    85,    86,   210,   218,   220,
     133,   219,   221,   248,    89,   221,    91,    46,   217,    74,
     135,    74,   135,   184,     6,    70,    73,   151,   154,   156,
      77,    74,     6,    74,   184,   182,   232,   182,    35,    26,
      28,   176,   180,    72,    74,   198,    74,   135,   115,   184,
     184,   115,    46,    73,    97,   184,   241,   243,    72,     6,
      46,    73,   105,   106,   112,    45,   103,    97,     3,   124,
       3,   130,   127,   132,   248,   133,    21,   190,   192,    23,
      30,    34,    61,    62,    63,    64,    65,    78,    79,   196,
     200,   202,   204,   207,   209,   209,   212,   217,     5,   134,
     245,   246,    71,    90,    89,     6,   212,    70,    77,    88,
     222,   230,   184,    15,   156,   157,     6,   155,     6,   171,
      72,    21,   120,   121,   166,   183,    72,   181,   184,    21,
     170,   180,    72,   182,   179,    74,   118,    74,   119,   184,
     184,    71,    76,   245,   242,   182,    72,   112,   111,   112,
      71,   130,   184,    72,    71,   184,    23,    30,   198,   135,
      22,    46,   133,   184,   234,   235,   238,    97,     6,   184,
     223,   225,   226,     6,    71,    74,   135,    20,   170,   182,
      72,    36,   120,   182,    15,    72,    26,   175,    72,   182,
      46,   114,    46,    73,   117,   184,    74,   135,   184,   135,
     110,   110,   182,   229,   198,   134,   245,    72,    91,   236,
     237,   245,    71,    89,   224,    72,   154,   184,    21,   182,
       6,   182,    72,   182,   114,   130,   114,   116,   243,    74,
     107,    74,   109,    23,   135,   184,    74,   135,    74,   135,
     184,   226,    72,    72,   182,   135,   135,   115,    46,   112,
      46,    73,   108,   188,   184,   235,   225,    72,   227,   228,
     182,   182,   118,   112,   130,   112,   111,    19,   244,   245,
     247,   184,   135,   135,   110,    29,   185,   187,   188,   107,
      72,   113,   244,   185,    72,   185
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    92,    93,    93,    93,    94,    95,    95,    96,    97,
      97,    98,    98,    99,   100,   100,   100,   101,   102,   103,
     103,   104,   105,   105,   106,   106,   106,   107,   107,   107,
     108,   108,   108,   109,   109,   110,   110,   111,   111,   112,
     112,   113,   113,   113,   114,   115,   115,   116,   116,   117,
     117,   117,   118,   118,   118,   119,   119,   120,   120,   121,
     122,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   125,   126,   126,   127,   127,   128,   128,   129,
     130,   130,   131,   131,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   137,   138,   139,   139,   139,
     139,   139,   140,   141,   142,   143,   143,   144,   145,   146,
     146,   146,   147,   147,   148,   149,   150,   150,   151,   151,
     151,   152,   152,   152,   152,   153,   153,   154,   154,   155,
     155,   156,   157,   157,   158,   159,   159,   160,   161,   161,
     162,   163,   164,   164,   165,   165,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   168,   168,   168,   169,
     170,   170,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   178,   178,   179,   179,   180,
     181,   181,   181,   182,   182,   183,   183,   184,   184,   184,
     185,   185,   186,   186,   187,   187,   188,   189,   189,   190,
     191,   191,   192,   193,   193,   194,   195,   195,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   197,
     198,   199,   199,   200,   201,   201,   202,   203,   203,   204,
     205,   205,   206,   206,   207,   208,   208,   208,   209,   210,
     210,   210,   210,   210,   211,   211,   212,   213,   213,   214,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   220,   220,   221,   221,   222,   222,   222,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   229,
     230,   230,   231,   231,   232,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   237,   238,   238,   239,   240,   240,
     241,   242,   242,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   246,   246,   247,   247,   248,   248,   249,   249
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     4,     1,     0,     3,     1,
       0,     1,     2,     2,     1,     1,     1,     2,     6,     2,
       0,     3,     1,     0,     4,     4,     3,     1,     4,     0,
       4,     3,     0,     2,     0,     4,     0,     1,     0,     1,
       3,     4,     4,     3,     1,     4,     0,     1,     0,     4,
       3,     0,     1,     4,     0,     2,     0,     1,     1,     4,
       3,     0,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     3,     0,     3,
       2,     0,     1,     2,     1,     3,     1,     1,     3,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     0,     1,     2,     1,
       3,     0,     1,     1,     2,     4,     2,     1,     1,     3,
       1,     2,     2,     1,     1,     1,     0,     1,     3,     1,
       3,     3,     3,     0,     2,     3,     0,     2,     3,     0,
       3,     3,     3,     0,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     6,
       3,     0,     5,     0,     4,     7,     6,     9,     6,     6,
       3,     0,     3,     4,     5,     3,     0,     1,     3,     2,
       1,     3,     0,     1,     4,     1,     2,     5,     1,     1,
       1,     1,     4,     3,     4,     3,     2,     3,     0,     2,
       3,     0,     2,     2,     0,     2,     3,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     2,
       2,     3,     0,     2,     3,     0,     2,     3,     0,     2,
       1,     1,     3,     0,     2,     3,     3,     0,     2,     1,
       1,     1,     1,     1,     3,     0,     2,     2,     0,     1,
       1,     1,     3,     1,     3,     2,     2,     0,     3,     3,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     2,     3,     3,     3,     2,     3,     3,
       0,     1,     4,     1,     0,     1,     0,     2,     1,     3,
       1,     1,     3,     0,     3,     3,     0,     2,     1,     3,
       2,     3,     0,     1,     2,     2,     3,     5,     3,     0,
       3,     3,     0,     2,     1,     3,     2,     2,     1,     1,
       6,     6,     1,     0,     2,     3,     2,     1,     2,     1
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

#line 1824 "parser.tab.c"

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
#line 300 "parser.y"
