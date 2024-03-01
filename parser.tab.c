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
#define YYFINAL  133
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   663

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  92
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  157
/* YYNRULES -- Number of rules.  */
#define YYNRULES  338
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  517

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
       0,    82,    82,    82,    82,    90,    91,    92,    93,    94,
      95,    97,    98,    99,   100,   100,   100,   101,   102,   103,
     103,   104,   106,   106,   107,   108,   109,   110,   110,   110,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   118,   119,   120,   121,   122,   122,   123,   123,   124,
     125,   125,   126,   126,   126,   127,   127,   129,   129,   130,
     131,   132,   133,   133,   134,   134,   134,   134,   135,   135,
     135,   135,   136,   137,   137,   138,   138,   139,   140,   141,
     142,   143,   144,   144,   145,   146,   147,   147,   148,   148,
     149,   149,   150,   150,   150,   150,   150,   150,   150,   150,
     150,   151,   151,   151,   151,   153,   154,   155,   155,   155,
     155,   155,   156,   157,   158,   159,   159,   160,   161,   162,
     162,   162,   163,   163,   164,   166,   169,   169,   170,   170,
     170,   171,   171,   171,   171,   172,   172,   173,   173,   174,
     174,   175,   176,   176,   177,   178,   178,   179,   180,   180,
     181,   182,   183,   183,   184,   184,   186,   186,   186,   186,
     186,   186,   186,   186,   186,   187,   188,   188,   188,   189,
     190,   190,   191,   191,   192,   192,   193,   193,   194,   194,
     195,   195,   196,   196,   197,   198,   198,   199,   199,   202,
     203,   203,   203,   204,   204,   205,   205,   206,   206,   206,
     207,   207,   208,   208,   209,   209,   210,   211,   211,   212,
     213,   213,   214,   215,   215,   216,   217,   217,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   221,
     222,   223,   223,   224,   225,   225,   226,   227,   227,   228,
     229,   229,   230,   230,   231,   232,   232,   232,   233,   234,
     234,   234,   234,   234,   235,   235,   236,   236,   237,   237,
     237,   238,   238,   239,   239,   240,   240,   242,   243,   243,
     244,   245,   245,   245,   245,   245,   245,   246,   246,   246,
     247,   247,   248,   248,   249,   249,   249,   250,   251,   251,
     252,   252,   253,   253,   254,   254,   255,   255,   256,   257,
     257,   258,   258,   259,   260,   260,   261,   262,   263,   263,
     264,   264,   265,   265,   266,   266,   268,   269,   269,   270,
     271,   271,   282,   283,   284,   285,   286,   288,   288,   289,
     289,   290,   290,   291,   291,   296,   296,   297,   297
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
  "single_input", "decorator", "cond_arglist", "brack_cond_arglist",
  "cond_brack_cond_arglist", "decorators", "decorated", "defob",
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
  "close_muldivopsfactor", "factor", "plus_or_minus_or_not", "power",
  "atom_expr", "close_trailer", "atom", "cond_yield_or_testlist",
  "multi_str", "testlist_comp", "trailer", "subscriptlist",
  "close_commasubscript", "subscript", "cond_test", "cond_sliceop",
  "sliceop", "exprlist", "expr_or_star_expr",
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

#define YYPACT_NINF (-370)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-337)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     378,  -370,    25,   508,  -370,  -370,  -370,    28,    32,    -6,
      39,    69,    72,   103,   103,   508,   103,   -36,   103,    38,
      30,   142,   176,    39,   534,   155,  -370,   117,  -370,  -370,
    -370,  -370,  -370,   591,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,    36,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   166,  -370,
    -370,   496,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   567,
    -370,  -370,   162,  -370,  -370,  -370,   178,  -370,  -370,  -370,
     124,   115,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     534,  -370,   168,  -370,  -370,  -370,  -370,  -370,   114,  -370,
    -370,   207,    -6,    -6,   209,   226,    39,  -370,  -370,  -370,
     222,  -370,  -370,   165,   171,   223,   191,    79,  -370,   249,
    -370,   260,   103,   260,   198,   196,   103,  -370,  -370,   205,
     211,   212,  -370,  -370,   233,  -370,  -370,  -370,  -370,  -370,
     210,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   103,   208,  -370,  -370,   137,   213,
    -370,  -370,   257,   266,  -370,  -370,  -370,  -370,  -370,    58,
     228,  -370,  -370,   202,   215,   294,   229,   220,   224,     0,
     147,   148,  -370,   534,   -24,   236,   103,   238,   103,  -370,
    -370,    44,  -370,   250,   239,   309,   254,   254,   103,    79,
     103,    79,   295,  -370,   175,   152,   534,   238,  -370,  -370,
    -370,   103,   103,  -370,  -370,   138,   262,    54,   287,   138,
    -370,   333,  -370,   127,   336,   196,     3,  -370,  -370,  -370,
     278,  -370,   319,  -370,  -370,   195,   -24,  -370,   213,  -370,
     320,  -370,   100,  -370,  -370,   534,   534,   534,  -370,  -370,
     534,   534,   534,  -370,  -370,  -370,  -370,  -370,   534,  -370,
     138,   335,    13,  -370,   508,  -370,   114,  -370,  -370,  -370,
     328,   338,  -370,  -370,  -370,  -370,   339,    39,  -370,   340,
    -370,  -370,   275,   329,   488,   277,    97,   149,   283,    79,
     103,  -370,  -370,   282,  -370,  -370,   284,   103,   103,   288,
      33,  -370,  -370,    79,   291,   354,   354,   293,  -370,   196,
     103,   297,   296,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,   103,  -370,  -370,  -370,   347,   341,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,   534,  -370,   508,   534,    58,   301,
     285,    58,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     303,  -370,   305,   286,  -370,   306,  -370,  -370,   373,   311,
     324,  -370,  -370,  -370,   221,    79,   321,  -370,  -370,  -370,
     447,    79,  -370,   384,   332,   380,   344,    79,  -370,  -370,
      35,  -370,    77,  -370,  -370,  -370,  -370,   103,  -370,   334,
    -370,   103,   238,  -370,  -370,  -370,  -370,  -370,    79,  -370,
    -370,  -370,  -370,  -370,   387,  -370,   213,  -370,   103,  -370,
     337,  -370,  -370,  -370,  -370,   343,     5,  -370,  -370,   338,
    -370,   103,  -370,   391,    79,  -370,  -370,  -370,   407,    79,
     346,  -370,    79,  -370,   260,   196,   260,   260,  -370,  -370,
     181,  -370,  -370,  -370,   345,   349,  -370,  -370,  -370,  -370,
      27,  -370,    70,  -370,  -370,   348,  -370,   352,   353,  -370,
    -370,  -370,    79,  -370,   238,  -370,   238,  -370,  -370,   122,
    -370,   125,  -370,   144,   301,  -370,  -370,    91,  -370,  -370,
      79,    79,  -370,  -370,  -370,   282,   354,   196,   354,   354,
    -370,   397,  -370,  -370,  -370,  -370,  -370,  -370,  -370,   238,
    -370,   238,  -370,    52,    43,  -370,  -370,  -370,  -370,   345,
     397,   355,  -370,  -370,  -370,   397,  -370
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     214,     2,     0,     0,   106,   112,   113,   214,   214,   136,
       0,     0,     0,   214,   214,     0,   214,     0,   214,     0,
     214,     0,     0,     0,     0,     0,    11,     0,   163,   161,
       3,    61,    64,    78,    89,    65,    66,    67,   107,   108,
     109,   111,   110,    68,   122,   123,    69,    70,    71,     0,
     164,   156,   157,   158,   159,   160,    86,   198,   199,   208,
     211,     0,    87,   162,   117,   166,   165,   168,   167,     0,
     275,   271,   280,   276,   274,   273,   214,   258,   259,   260,
     214,     0,   300,   299,   232,   235,   238,   243,   247,   255,
       0,   257,   262,   266,   272,   105,   302,   114,   305,   115,
     118,   119,   134,   133,     0,   127,     0,   149,   146,   124,
     139,   153,   153,   154,     0,     0,     0,   214,   186,   187,
      44,     0,   214,    48,     0,    81,   214,   338,   335,   318,
       0,    10,   229,     1,     0,    12,    13,    16,    15,    14,
      63,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   214,    84,    82,    72,   214,    91,
       4,   214,   206,   209,   213,   212,   217,   266,   281,    89,
       0,   278,   277,     0,     0,     0,   230,   233,   236,   239,
     244,   248,   256,     0,   264,    91,   214,    91,   214,   132,
     131,     0,   126,   147,   144,     0,   150,   151,   214,   214,
     214,   214,     0,   193,     0,     0,     0,    91,   203,    47,
      46,   214,   214,    46,   337,   214,     0,    23,    20,   214,
       9,     0,    17,   214,     0,    81,   214,    83,    74,    73,
      90,    85,     0,   214,   214,   215,   263,   331,    91,   282,
       0,   267,   214,   268,   270,     0,     0,     0,   240,   241,
       0,     0,     0,   253,   250,   249,   251,   252,     0,   261,
     214,     0,   214,   265,    90,   298,   305,    90,   303,   120,
     137,     0,   128,   125,   143,   130,     0,     0,   140,     0,
     155,   173,     0,   174,   214,     0,   214,   171,     0,   214,
     214,   188,    43,    54,   202,    80,    56,   214,   214,     0,
     323,     6,   321,   214,    39,     0,    38,     0,    22,    81,
     214,     0,     0,     5,    60,    59,    79,    77,    76,    75,
      88,   214,   207,   210,   225,     0,   227,   220,   221,   222,
     223,   224,   218,   219,     0,   283,     0,     0,    89,    86,
       0,   311,   307,   231,   234,   237,   242,   245,   246,   254,
       0,   286,   290,     0,   289,     0,   301,   304,     0,     0,
      91,   148,   145,   152,   171,   214,     0,   195,    57,    58,
     214,   214,   189,   190,     0,   181,     0,   214,   184,   185,
      52,    42,    51,    41,   325,   326,   317,   214,   322,    91,
     316,   214,    91,    36,    37,    21,    36,    19,   214,     8,
     197,   226,   228,   216,     0,   309,    91,   314,   214,   269,
      91,   306,   312,   284,   285,    91,   214,   138,   129,    90,
     141,   214,   169,   176,   214,   194,   196,   179,     0,   214,
       0,   178,   214,   182,     0,    81,     0,    48,    55,   324,
     214,   319,    40,    26,    29,    34,    18,   214,   315,   308,
     214,   313,   214,   287,   292,   295,   142,     0,     0,   175,
     191,   170,   214,   183,    91,    45,    91,    46,   320,    27,
      25,    32,    24,   332,     0,   310,   288,   214,   291,   294,
     214,   214,   180,    53,    50,    54,     0,    81,     0,    38,
      33,   214,   329,   327,   328,   296,   172,   177,    49,    91,
      35,    91,    36,     0,   333,   201,   200,    28,    31,    29,
     214,     0,   334,    30,   205,   214,   204
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -370,  -370,   401,  -190,  -370,  -370,  -370,  -370,  -370,  -370,
      24,  -370,  -370,  -370,  -370,   -80,  -370,  -370,  -369,   -59,
    -193,   -72,  -113,  -199,    -5,  -370,   -51,  -370,    65,     2,
    -370,  -370,   214,  -370,  -370,  -370,  -370,  -370,  -207,  -370,
     216,   -55,  -149,  -170,  -370,  -370,  -370,  -370,  -370,  -370,
    -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,  -370,
     145,  -370,    17,   161,   169,  -370,  -370,  -370,     7,  -370,
    -370,  -370,   327,  -370,   441,  -370,  -370,  -370,    80,  -370,
    -370,   444,  -370,  -370,  -370,   446,  -370,   159,   163,  -370,
    -127,  -370,    -7,  -332,  -370,  -370,  -158,  -370,   234,  -370,
     219,  -370,  -370,  -370,  -370,     1,   -12,  -370,   217,  -370,
     227,  -370,   230,  -370,  -370,   218,  -370,    10,  -370,  -370,
     -62,  -370,  -370,  -370,   308,   409,  -370,   408,   399,  -370,
    -370,  -370,    29,    66,  -370,  -370,   -10,   225,  -370,    -1,
     237,  -370,    37,  -370,  -370,  -370,   458,  -370,  -370,  -370,
      46,   -16,  -146,  -370,  -370,   -54,  -370
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,   299,   220,   221,    27,    28,   136,   137,
      29,   311,   218,   307,   308,   470,   490,   472,   444,   393,
     394,   124,   125,   293,   210,   438,   381,   383,   367,   203,
     140,   224,    31,    32,   227,   317,   155,   156,   213,   157,
      33,    34,   159,   231,   158,    35,    36,    37,    38,    39,
      40,    97,    41,    42,   100,    43,    44,    45,   104,   273,
     105,   106,   274,   108,   275,   360,   109,   194,   110,   193,
      46,    47,   196,    48,   369,    50,    66,    51,   375,   364,
      52,    53,    54,   431,   287,    55,   205,   118,   288,   372,
     204,   370,    56,   504,    57,   505,    58,   162,    59,   163,
      60,    61,   165,   235,   334,    62,    83,   176,    84,   177,
      85,   178,    86,   250,   179,    87,   180,    88,   258,   181,
      89,    90,    91,    92,   184,    93,   170,    94,   171,   263,
     353,   415,   354,   355,   478,   479,    95,    96,   185,    99,
     187,   340,   341,   410,   411,   342,    63,   216,   301,   389,
     302,   492,   493,   240,   494,    64,   128
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      98,   101,    30,   232,    82,   115,   113,   114,   207,   116,
     209,   119,   132,    98,   296,   265,    82,   268,   316,   127,
     238,   169,   172,   239,   309,   169,    65,   445,   182,   312,
     131,  -116,    19,  -336,    19,  -121,   117,   292,   237,   160,
      20,   120,    19,   126,   120,   107,   260,    15,   237,   166,
     270,   138,    18,   261,   102,  -332,    19,    19,   120,    19,
     304,    19,   491,   237,   262,  -332,   248,   249,   335,    22,
     350,   103,   281,   337,   283,   111,    24,  -293,   112,  -293,
    -332,   434,   202,   120,   121,  -293,     3,     4,     5,     6,
       7,     8,     9,    10,  -293,    11,    12,    13,   121,    19,
     305,  -336,   396,  -116,   229,  -336,  -336,  -121,    19,   387,
     122,   123,   392,   192,   271,   208,    20,   272,   -90,   214,
      19,   259,   134,   436,   510,   123,    19,   306,   304,    19,
     -62,   304,    19,   509,     3,     4,     5,     6,     7,     8,
       9,    10,  -293,    11,    12,    13,   337,   225,   129,   237,
     437,    98,    24,    19,   388,   133,    19,   228,   222,   -90,
      21,    22,   378,   491,    20,  -297,    19,    19,   486,  -192,
     374,   488,   319,    24,    20,   320,   390,   286,   514,   266,
    -297,   269,   130,   516,   297,   161,    23,   338,   186,   406,
     420,   280,   407,    98,   291,   412,   349,    24,   489,   282,
      24,   285,    72,   286,   294,   295,   175,    19,   300,    -7,
      19,   298,   300,   173,   183,    20,   253,   254,   324,   441,
     188,   255,   443,   191,   289,   325,   290,   297,   465,   326,
     251,   252,  -135,   256,   257,   339,   448,   195,   423,   198,
     451,   421,   374,   199,   427,   453,   200,   189,   190,  -279,
     433,    24,   -90,   300,   298,   352,   327,   328,   329,   330,
     331,   347,   348,   201,   206,    82,   120,   435,   485,   435,
     211,   446,   212,   332,   333,   215,   487,    22,   487,   373,
     500,   217,   219,   119,   226,   223,   368,   230,   233,   473,
     384,   385,   242,   499,   483,   501,   484,   459,   234,   241,
     244,   246,   461,   397,   243,   463,   247,    19,  -214,   245,
     264,  -214,   267,   277,   400,   278,  -214,  -214,  -214,  -214,
    -214,   464,   403,   466,   209,   405,   404,   276,   279,   507,
     284,   508,   310,   506,   303,   482,   313,    82,  -214,   315,
     321,   351,   336,   358,   270,   361,   363,   365,  -214,   371,
     366,    24,   506,   496,   497,   377,   380,   506,   382,   386,
     304,  -214,  -214,   391,   395,  -214,  -214,   399,  -214,   398,
     401,   402,   368,   408,   413,   414,   409,  -292,   416,   417,
     439,     1,   418,     2,   442,     3,     4,     5,     6,     7,
       8,     9,    10,   424,    11,    12,    13,    14,   419,   428,
      15,   449,    16,    17,   429,    18,   430,    19,   440,   454,
     447,   450,   458,   460,   457,    20,   432,   452,   462,   469,
     477,    21,    22,   471,   480,   481,   503,   515,   135,   513,
     502,   511,   467,   300,   498,   426,   456,   314,   362,   197,
     359,    49,   318,   474,   422,   352,    67,    23,    68,   379,
     376,    24,     2,   323,     3,     4,     5,     6,     7,     8,
       9,    10,   343,    11,    12,    13,    14,   322,   346,    15,
     495,    16,    17,   344,    18,   236,    19,   345,   167,   174,
     168,   476,   455,   425,    20,   139,   468,   475,   512,   356,
      21,    22,     0,     2,     0,     3,     4,     5,     6,     7,
       8,     9,    10,   357,    11,    12,    13,    14,     0,     0,
      15,     0,    16,    17,     0,    18,    23,    19,     0,     0,
      24,     0,     0,     0,     0,    20,   164,     0,     0,    69,
       0,    21,    22,     0,    70,    71,    72,    73,    74,     0,
       0,    69,     0,     0,     0,     0,    70,    71,    72,    73,
      74,     0,     0,     0,     0,     0,    75,    23,     0,     0,
       0,    24,     0,     0,     0,     0,    76,    69,    75,     0,
       0,     0,    70,    71,    72,    73,    74,     0,    76,    77,
      78,    24,     0,    79,    80,     0,    81,     0,     0,     0,
       0,    77,    78,     0,    75,    79,    80,     0,    81,     0,
       0,     0,     0,     0,    76,    70,    71,    72,    73,    74,
       0,     0,     0,     0,     0,     0,     0,    77,    78,     0,
       0,    79,    80,     0,    81,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     0,     0,     0,     0,    80,     0,    81,     0,     0,
       0,     0,     0,   154
};

static const yytype_int16 yycheck[] =
{
       7,     8,     0,   161,     3,    15,    13,    14,   121,    16,
     123,    18,    24,    20,   213,   185,    15,   187,   225,    20,
     169,    76,    76,   169,   217,    80,     2,   396,    90,   219,
      23,     3,    29,     3,    29,     3,    72,   207,     5,     3,
      37,     6,    29,    13,     6,     6,    70,    22,     5,    61,
       6,    27,    27,    77,    60,    22,    29,    29,     6,    29,
       6,    29,    19,     5,    88,    22,    66,    67,   238,    44,
     260,    77,   199,    46,   201,     6,    73,    72,     6,    74,
      22,    46,     3,     6,    46,    72,     7,     8,     9,    10,
      11,    12,    13,    14,    89,    16,    17,    18,    46,    29,
      46,    71,   309,    75,   158,    75,    76,    75,    29,    76,
      72,    73,   305,   106,    70,   122,    37,    73,    91,   126,
      29,   183,     5,    46,    72,    73,    29,    73,     6,    29,
       3,     6,    29,   502,     7,     8,     9,    10,    11,    12,
      13,    14,    72,    16,    17,    18,    46,   154,     6,     5,
      73,   158,    73,    29,   300,     0,    29,   158,   134,    89,
      43,    44,   289,    19,    37,    74,    29,    29,    46,    72,
      21,    46,   226,    73,    37,   230,   303,    28,   510,   186,
      89,   188,     6,   515,    46,    19,    69,   242,    74,   338,
     360,   198,   338,   200,   206,   341,   258,    73,    73,   200,
      73,    26,    40,    28,   211,   212,    91,    29,   215,    71,
      29,    73,   219,    89,    46,    37,    68,    69,    23,   389,
      13,    73,   392,    14,    72,    30,    74,    46,   435,    34,
      83,    84,     6,    85,    86,   242,   406,    15,   365,    74,
     410,    20,    21,    72,   371,   415,    23,   102,   103,    71,
     377,    73,    71,   260,    73,   262,    61,    62,    63,    64,
      65,   251,   252,    72,    15,   264,     6,   380,   467,   382,
      72,   398,    76,    78,    79,    70,   469,    44,   471,   286,
     487,    70,    70,   290,    76,    75,   284,    74,    31,   447,
     297,   298,    90,   486,   464,   488,   466,   424,    32,    71,
       6,    81,   429,   310,    89,   432,    82,    29,    30,    80,
      74,    33,    74,    74,   321,     6,    38,    39,    40,    41,
      42,   434,   334,   436,   437,   337,   336,    77,    74,   499,
      35,   501,    45,   491,    72,   462,     3,   336,    60,     3,
      21,     6,    22,    15,     6,     6,     6,    72,    70,    72,
      21,    73,   510,   480,   481,    72,    74,   515,    74,    71,
       6,    83,    84,    72,    71,    87,    88,    71,    90,    72,
      23,    30,   370,    72,    71,    89,    91,    72,    72,     6,
     387,     3,    71,     5,   391,     7,     8,     9,    10,    11,
      12,    13,    14,    72,    16,    17,    18,    19,    74,    15,
      22,   408,    24,    25,    72,    27,    26,    29,    74,   416,
      23,    74,    21,     6,   421,    37,    72,    74,    72,    74,
      72,    43,    44,    74,    72,    72,    29,    72,    27,   509,
     489,   503,   437,   440,   485,   370,   419,   223,   277,   112,
     271,     0,   226,   450,   364,   452,     2,    69,     2,   290,
     287,    73,     5,   234,     7,     8,     9,    10,    11,    12,
      13,    14,   245,    16,    17,    18,    19,   233,   250,    22,
     477,    24,    25,   246,    27,   167,    29,   247,    69,    80,
      72,   452,   416,    36,    37,    27,   440,   450,   504,   264,
      43,    44,    -1,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,   266,    16,    17,    18,    19,    -1,    -1,
      22,    -1,    24,    25,    -1,    27,    69,    29,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    37,    30,    -1,    -1,    33,
      -1,    43,    44,    -1,    38,    39,    40,    41,    42,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    60,    69,    -1,    -1,
      -1,    73,    -1,    -1,    -1,    -1,    70,    33,    60,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    -1,    70,    83,
      84,    73,    -1,    87,    88,    -1,    90,    -1,    -1,    -1,
      -1,    83,    84,    -1,    60,    87,    88,    -1,    90,    -1,
      -1,    -1,    -1,    -1,    70,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    -1,
      -1,    87,    88,    -1,    90,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    88,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    72
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
     192,   193,   197,   238,   247,   102,   168,   173,   177,    33,
      38,    39,    40,    41,    42,    60,    70,    83,    84,    87,
      88,    90,   197,   198,   200,   202,   204,   207,   209,   212,
     213,   214,   215,   217,   219,   228,   229,   143,   184,   231,
     146,   184,    60,    77,   150,   152,   153,     6,   155,   158,
     160,     6,     6,   184,   184,   228,   184,    72,   179,   184,
       6,    46,    72,    73,   113,   114,    13,   231,   248,     6,
       6,   160,   198,     0,     5,    94,   100,   101,   102,   238,
     122,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    72,   128,   129,   131,   136,   134,
       3,    19,   189,   191,    30,   194,   198,   217,   219,   133,
     218,   220,   247,    89,   220,    91,   199,   201,   203,   206,
     208,   211,   212,    46,   216,   230,    74,   232,    13,   152,
     152,    14,   160,   161,   159,    15,   164,   164,    74,    72,
      23,    72,     3,   121,   182,   178,    15,   114,   184,   114,
     116,    72,    76,   130,   184,    70,   239,    70,   104,    70,
      96,    97,   102,    75,   123,   184,    76,   126,   231,   247,
      74,   135,   188,    31,    32,   195,   216,     5,   134,   244,
     245,    71,    90,    89,     6,    80,    81,    82,    66,    67,
     205,    83,    84,    68,    69,    73,    85,    86,   210,   212,
      70,    77,    88,   221,    74,   135,   184,    74,   135,   184,
       6,    70,    73,   151,   154,   156,    77,    74,     6,    74,
     184,   182,   231,   182,    35,    26,    28,   176,   180,    72,
      74,   198,   135,   115,   184,   184,   115,    46,    73,    95,
     184,   240,   242,    72,     6,    46,    73,   105,   106,   112,
      45,   103,    95,     3,   124,     3,   130,   127,   132,   247,
     133,    21,   190,   192,    23,    30,    34,    61,    62,    63,
      64,    65,    78,    79,   196,   135,    22,    46,   133,   184,
     233,   234,   237,   200,   202,   204,   207,   209,   209,   212,
      95,     6,   184,   222,   224,   225,   229,   232,    15,   156,
     157,     6,   155,     6,   171,    72,    21,   120,   121,   166,
     183,    72,   181,   184,    21,   170,   180,    72,   182,   179,
      74,   118,    74,   119,   184,   184,    71,    76,   244,   241,
     182,    72,   112,   111,   112,    71,   130,   184,    72,    71,
     184,    23,    30,   198,   228,   198,   134,   244,    72,    91,
     235,   236,   244,    71,    89,   223,    72,     6,    71,    74,
     135,    20,   170,   182,    72,    36,   120,   182,    15,    72,
      26,   175,    72,   182,    46,   114,    46,    73,   117,   184,
      74,   135,   184,   135,   110,   110,   182,    23,   135,   184,
      74,   135,    74,   135,   184,   225,   154,   184,    21,   182,
       6,   182,    72,   182,   114,   130,   114,   116,   242,    74,
     107,    74,   109,   188,   184,   234,   224,    72,   226,   227,
      72,    72,   182,   135,   135,   115,    46,   112,    46,    73,
     108,    19,   243,   244,   246,   184,   182,   182,   118,   112,
     130,   112,   111,    29,   185,   187,   188,   135,   135,   110,
      72,   113,   243,   107,   185,    72,   185
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
     210,   210,   210,   210,   211,   211,   212,   212,   213,   213,
     213,   214,   214,   215,   215,   216,   216,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   218,   218,   218,
     219,   219,   220,   220,   221,   221,   221,   222,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   227,   228,   229,
     229,   230,   230,   231,   232,   232,   233,   233,   234,   234,
     235,   235,   236,   236,   237,   237,   238,   239,   239,   240,
     241,   241,   242,   242,   242,   242,   242,   243,   243,   244,
     244,   245,   245,   246,   246,   247,   247,   248,   248
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
       1,     1,     1,     1,     3,     0,     2,     1,     1,     1,
       1,     3,     1,     3,     2,     2,     0,     3,     3,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     2,     3,     3,     3,     2,     3,     3,     0,
       1,     4,     1,     0,     1,     0,     2,     1,     3,     1,
       1,     3,     0,     3,     3,     0,     2,     1,     3,     2,
       3,     0,     1,     2,     2,     3,     5,     3,     0,     3,
       3,     0,     2,     1,     3,     2,     2,     1,     1,     6,
       6,     1,     0,     2,     3,     2,     1,     2,     1
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

#line 1836 "parser.tab.c"

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
#line 299 "parser.y"
