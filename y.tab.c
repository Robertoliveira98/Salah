/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sintatica.y" /* yacc.c:339  */

#include <iostream>
#include <string.h>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include "variaveis_globais.cpp"
#include "structs.cpp"
#include "vetores_pilhas.cpp"
#include "funcoes_escopo.cpp"
#include "funcoes_variaveis.cpp"
#include "funcoes_strings.cpp"
#include "funcoes_lacos.cpp"
#include "funcoes_subprograma.cpp"


#line 84 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TK_NUM = 258,
    TK_FLOAT = 259,
    TK_NOME_VARIAVEL = 260,
    TK_CHAR = 261,
    TK_BOOL = 262,
    TK_STRING = 263,
    TK_MAIN = 264,
    TK_TIPO_INT = 265,
    TK_TIPO_FLOAT = 266,
    TK_TIPO_DOUBLE = 267,
    TK_TIPO_BOOL = 268,
    TK_TIPO_CHAR = 269,
    TK_TIPO_STRING = 270,
    TK_PRINT = 271,
    TK_INPUT = 272,
    TK_IF = 273,
    TK_ELSE = 274,
    TK_WHILE = 275,
    TK_DO = 276,
    TK_FOR = 277,
    TK_BREAK = 278,
    TK_CONTINUE = 279,
    TK_SWITCH = 280,
    TK_CASE = 281,
    TK_DEFAULT = 282,
    TK_ALL = 283,
    TK_RETURN = 284,
    TK_EXCL = 285,
    TK_DIF = 286,
    TK_FIM = 287,
    TK_ERROR = 288
  };
#endif
/* Tokens.  */
#define TK_NUM 258
#define TK_FLOAT 259
#define TK_NOME_VARIAVEL 260
#define TK_CHAR 261
#define TK_BOOL 262
#define TK_STRING 263
#define TK_MAIN 264
#define TK_TIPO_INT 265
#define TK_TIPO_FLOAT 266
#define TK_TIPO_DOUBLE 267
#define TK_TIPO_BOOL 268
#define TK_TIPO_CHAR 269
#define TK_TIPO_STRING 270
#define TK_PRINT 271
#define TK_INPUT 272
#define TK_IF 273
#define TK_ELSE 274
#define TK_WHILE 275
#define TK_DO 276
#define TK_FOR 277
#define TK_BREAK 278
#define TK_CONTINUE 279
#define TK_SWITCH 280
#define TK_CASE 281
#define TK_DEFAULT 282
#define TK_ALL 283
#define TK_RETURN 284
#define TK_EXCL 285
#define TK_DIF 286
#define TK_FIM 287
#define TK_ERROR 288

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 201 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
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
#define YYLAST   526

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  287

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    49,    52,     2,
      38,    39,    36,    34,    42,    35,    48,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    41,    45,
      50,    47,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    54,     2,     2,     2,     2,     2,
       2,     2,    40,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    46,     2,
       2,     2,     2,    43,    53,    44,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    30,    30,    61,    66,    71,    76,    81,    91,    96,
     100,   103,   106,   109,   114,   120,   134,   140,   144,   149,
     152,   157,   179,   184,   189,   192,   197,   198,   199,   200,
     201,   202,   207,   235,   249,   255,   266,   281,   302,   319,
     341,   344,   351,   356,   369,   382,   393,   404,   419,   433,
     493,   498,   512,   526,   551,   560,   745,   750,   755,   766,
     778,   783,   790,   810,   827,   832,   844,   853,   865,   879,
     886,   897,   911,   926,   935,   944,   958,   967,   976,   988,
     991,   996,  1007,  1018,  1033,  1038,  1043,  1048,  1055,  1113,
    1120,  1127,  1134,  1142,  1149,  1165,  1178,  1185,  1204,  1209,
    1214,  1229,  1242,  1247,  1257,  1330,  1406,  1496,  1542,  1549,
    1556,  1561,  1591,  1596,  1605,  1612,  1619,  1631,  1637,  1648,
    1651,  1658,  1664,  1667,  1670,  1674,  1677,  1680,  1683,  1686,
    1691,  1694,  1697,  1700,  1703,  1706,  1711,  1714,  1718,  1721,
    1726,  1731,  1736,  1743,  1750,  1757,  1764,  1765,  1766,  1767
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TK_NUM", "TK_FLOAT", "TK_NOME_VARIAVEL",
  "TK_CHAR", "TK_BOOL", "TK_STRING", "TK_MAIN", "TK_TIPO_INT",
  "TK_TIPO_FLOAT", "TK_TIPO_DOUBLE", "TK_TIPO_BOOL", "TK_TIPO_CHAR",
  "TK_TIPO_STRING", "TK_PRINT", "TK_INPUT", "TK_IF", "TK_ELSE", "TK_WHILE",
  "TK_DO", "TK_FOR", "TK_BREAK", "TK_CONTINUE", "TK_SWITCH", "TK_CASE",
  "TK_DEFAULT", "TK_ALL", "TK_RETURN", "TK_EXCL", "TK_DIF", "TK_FIM",
  "TK_ERROR", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'f'", "':'",
  "','", "'{'", "'}'", "';'", "'v'", "'='", "'.'", "'%'", "'<'", "'>'",
  "'&'", "'|'", "'^'", "'\\313'", "$accept", "S", "EMPILHA",
  "EMPILHA_WHILE", "EMPILHA_DO_WHILE", "EMPILHA_FOR", "EMPILHA_SWITCH",
  "DESEMPILHA", "DESEMPILHA_LACO", "ESCOPO_GLOBAL", "FUNCAO",
  "TIPO_FUNCAO", "PARAMETROS", "PARAMETROS_NV", "PARAMETRO", "MAIN",
  "BLOCO", "COMANDOS", "COMANDO", "E", "NOME_VARIAVEL", "CHAMA_FUNCAO",
  "CHAMA_PARAMS", "CHAMA_PARAMS_NV", "CHAMA_PARAM", "OP_STRING", "IF",
  "SWITCH", "BLOCO_CASES", "CASES", "CASE", "DEFAULT", "WHILE", "FOR",
  "ATRI_LOG", "RELACIONAL", "REL", "LOGICA", "ATRIBUICAO", "VAR_MAT",
  "VAR", "IMPRIME", "CAST_NUM", "OP_MAT", "OP_REL", "OP_LOG", "OP_EXP",
  "TIPO_NUM", "TIPO_CHAR", "TIPO_BOOL", "TIPO_STRING", "TIPO", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    43,    45,    42,    47,    40,    41,
     102,    58,    44,   123,   125,    59,   118,    61,    46,    37,
      60,    62,    38,   124,    94,   203
};
# endif

#define YYPACT_NINF -222

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-222)))

#define YYTABLE_NINF -118

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -222,    55,   271,  -222,   427,   -20,    26,    46,    93,  -222,
      89,   107,    37,    22,   133,   122,   123,   124,   109,   148,
    -222,  -222,  -222,   111,   113,  -222,  -222,  -222,  -222,  -222,
     120,   140,  -222,  -222,   196,   173,  -222,   135,    71,   179,
     385,  -222,   186,   394,   403,   197,   -17,   112,   145,  -222,
    -222,  -222,   234,   385,   442,   150,  -222,    52,   182,    78,
     279,    86,   454,   155,   357,   167,   171,   189,   193,   200,
     198,   223,  -222,  -222,   245,  -222,   401,  -222,  -222,  -222,
     214,   231,  -222,   150,  -222,   228,    32,  -222,  -222,    -1,
     238,  -222,   226,   241,   313,   242,  -222,  -222,   136,   385,
    -222,  -222,    78,  -222,   244,    42,   320,   158,    80,  -222,
     237,   243,   254,   413,  -222,  -222,   234,  -222,  -222,     9,
    -222,    45,  -222,  -222,    45,   302,  -222,  -222,   270,   505,
     385,  -222,   292,    36,   518,   163,  -222,  -222,   -16,   150,
    -222,  -222,   196,   315,  -222,  -222,    71,  -222,  -222,   200,
    -222,   393,  -222,  -222,   405,   283,  -222,  -222,   150,  -222,
    -222,  -222,  -222,  -222,  -222,     9,  -222,    78,   -15,    95,
      48,     9,  -222,   279,  -222,  -222,  -222,  -222,     9,  -222,
    -222,   284,   317,   285,   200,  -222,  -222,  -222,  -222,  -222,
    -222,   286,   297,   303,   316,  -222,   287,   357,   326,   322,
     330,   331,   335,   336,   342,   343,   344,  -222,   354,  -222,
     345,  -222,   380,  -222,   436,   443,  -222,   359,   360,  -222,
      49,  -222,     9,   395,   234,    80,   200,   281,  -222,   385,
     385,   357,   357,   357,   357,   357,   357,   357,  -222,   409,
      18,   103,  -222,   505,   317,   505,  -222,   279,  -222,    78,
     150,  -222,   366,  -222,   383,   381,   314,   314,   314,   314,
     314,   314,   324,  -222,  -222,  -222,  -222,  -222,  -222,  -222,
    -222,  -222,   200,  -222,  -222,  -222,  -222,   392,    36,  -222,
    -222,   399,  -222,  -222,   200,  -222,  -222
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     4,     1,    54,     0,     0,     0,    44,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
      13,    12,    11,     0,     0,    50,    27,    30,    28,    29,
     125,   126,   127,   128,    57,     0,   129,     0,     0,     0,
       0,    42,     0,   108,   109,   118,    93,   101,    63,   122,
     123,   124,     0,     0,   113,    52,    51,    85,     0,    84,
      86,     0,   112,     0,     4,     0,     0,     0,     0,     0,
       0,     0,     9,     2,     4,    26,     0,    45,    46,    93,
       0,    56,    59,    61,    60,     0,     0,   120,   121,     0,
       0,    94,   113,     0,   112,     0,    90,    91,   118,     0,
     103,    99,   100,   102,    99,     0,     0,   112,     0,   131,
       0,   132,   133,     0,   136,   137,     0,   125,   126,     0,
     107,     0,   138,   139,     0,     0,    31,     3,     0,     0,
       0,     3,     0,     0,     0,    80,    72,    69,    93,    38,
      37,    55,     0,     0,    48,    47,     0,    40,    41,     0,
       7,     0,    89,    98,   110,   118,    63,    65,    62,    64,
     130,   134,   135,    92,    95,     0,    88,    97,   108,   109,
     118,     0,   113,   104,   112,   114,   115,   116,     0,   105,
     106,     0,    18,     0,     0,   140,   141,   142,   144,   143,
     145,   146,   147,   148,   149,    32,     0,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,    58,
       0,   119,    66,    96,     0,     0,   111,     0,    17,    20,
       0,    22,     0,     0,     0,     0,     0,     4,    25,     0,
       0,     4,     4,     4,     4,     4,     4,     4,    70,     0,
       0,   110,   117,     0,     0,     0,     8,    33,    34,    35,
      36,     9,     0,    24,     0,     0,    73,    74,    78,    76,
      75,    77,     4,    49,    67,    68,   146,   147,   148,   149,
      21,    19,     0,    16,    14,    81,    23,     0,     0,     8,
       9,     0,    15,    82,     0,     9,    83
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -222,  -222,   -64,  -222,  -222,  -222,  -222,  -221,  -205,   438,
    -222,  -222,  -222,  -222,   199,  -222,  -133,   277,    -2,  -131,
    -222,   -10,  -222,  -222,   304,    -7,   207,  -222,  -222,  -222,
     332,  -222,  -222,  -222,    -6,   -45,   353,   -43,   -42,   -25,
      -8,   328,  -222,   464,  -222,  -222,  -222,   362,   368,   369,
     371,  -117
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    16,    17,    18,    73,   137,    74,
      20,   272,   183,   218,   219,    21,   132,   227,   228,    23,
      24,    25,    80,    81,    82,    83,    26,    27,    72,   135,
     136,   208,    28,    29,    84,    57,    58,    59,    60,    61,
     174,    89,    63,   119,   113,   116,   124,   266,   267,   268,
     269,   195
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      22,    54,   199,    62,    55,    56,   252,   101,   104,   102,
     105,   106,   168,   169,   170,  -114,   212,    22,    38,    49,
      50,    51,   -53,   -39,    54,   274,    62,    65,   -53,   -39,
      92,    66,    94,   146,    93,   144,     7,   145,   147,  -114,
    -114,     4,   100,    92,   103,   107,   275,   171,   175,   176,
     177,   221,     5,     6,   104,     3,   105,   151,   282,     8,
       9,   131,   126,   182,    39,    11,    54,   197,    62,   139,
     140,   101,    22,   167,    64,   283,    87,   173,  -116,    88,
     286,   153,    14,   178,    40,   155,    34,   246,   156,    92,
     245,   107,   131,   251,   114,   115,   179,  -116,   157,   180,
     159,   158,  -116,  -116,   -99,   -99,   100,   264,   103,   172,
      43,    44,    45,    46,    47,    48,   120,    49,    50,    51,
      92,    41,    94,   151,   196,  -115,   270,    42,   273,   214,
     114,   115,    54,  -117,    62,   121,   215,    52,    67,   279,
     122,   123,    68,   -95,    69,    53,    70,   281,    -8,  -115,
    -115,   285,    71,     4,    77,   172,    75,  -117,  -117,   -95,
      76,   172,   -95,   -95,     5,     6,     7,   -92,   172,    -5,
      -6,     8,     9,    10,    34,    78,   -94,    11,    85,   101,
     247,   249,    86,   -92,    90,    12,   -92,   -92,    13,   134,
     206,    95,   -94,   125,    14,   -94,   -94,  -102,   108,    43,
      44,    45,    79,    47,    48,   127,    49,    50,    51,   128,
    -102,  -102,   172,   109,   100,   157,   103,   159,   250,    92,
      92,    94,    94,   254,   255,   253,    52,  -116,   -92,   110,
     129,   130,   111,   112,    53,    34,   133,    96,    97,    98,
      79,    47,    91,   131,   -92,   -10,  -116,   -92,   -92,   134,
       4,  -116,  -116,   141,   253,   253,   253,   253,   253,   253,
     253,     5,     6,     7,    52,  -103,    -5,    -6,     8,     9,
      10,  -103,    99,   142,    11,   143,     4,   148,  -103,  -103,
     149,   150,    12,   152,   160,    13,     4,     5,     6,     7,
     161,    14,    -5,    -6,     8,     9,    10,     5,     6,     7,
      11,   162,    -5,    -6,     8,     9,    10,   181,    12,   184,
      11,    13,   198,   117,   118,    32,    33,    14,    12,     4,
     210,    34,   217,   216,   220,    -8,   226,    14,    36,     4,
       5,     6,     7,   222,    -4,    -5,    -6,     8,     9,    10,
       5,     6,     7,    11,   223,    -5,    -6,     8,     9,    10,
     224,    12,   -87,    11,   117,   118,    32,    33,   -87,   154,
      14,    12,     4,   225,   229,  -102,  -102,   230,   -79,    36,
      14,   231,   232,     5,     6,     7,   233,   234,    -5,    -6,
       8,     9,    10,   235,   236,   237,    11,   239,    43,    44,
      45,    79,    47,    91,    12,    49,    50,    51,   238,   240,
     243,   248,   244,    14,    43,    44,    45,   138,    47,    48,
     276,    49,    50,    51,   263,    52,    96,    97,   163,    79,
     164,    91,   277,    53,  -114,   -90,   278,   117,   118,    32,
      33,    52,   213,  -115,   -91,  -117,   -96,   280,   284,    53,
      19,   -90,    36,   271,   -90,   -90,   209,   265,  -114,  -114,
     -91,   165,   -96,   -91,   -91,   -96,   -96,  -115,  -115,  -117,
    -117,    30,    31,    32,    33,    34,   166,   207,    37,    35,
     117,   118,    32,    33,   211,   241,    36,   117,   118,    32,
      33,   -65,   242,     0,   -65,    36,     0,   -65,     0,     0,
     -65,   191,    36,   -64,  -103,  -103,   -64,   192,   193,   -64,
     194,     0,   -64,     0,     0,     0,  -102,  -102,   256,   257,
     258,   259,   260,   261,   262,   185,   186,   187,   188,   189,
     190,   200,   201,   202,   203,   204,   205
};

static const yytype_int16 yycheck[] =
{
       2,    11,   133,    11,    11,    11,   227,    52,    53,    52,
      53,    53,     3,     4,     5,    30,   149,    19,    38,    10,
      11,    12,    39,    39,    34,   246,    34,     5,    45,    45,
      40,     9,    40,    34,    40,     3,    18,     5,    39,    54,
      55,     5,    52,    53,    52,    53,   251,    38,     3,     4,
       5,   184,    16,    17,    99,     0,    99,    99,   279,    23,
      24,    43,    64,   127,    38,    29,    76,   131,    76,    76,
      76,   116,    74,   116,    37,   280,     5,   119,    30,     8,
     285,    39,    46,    38,    38,     5,    38,   220,     8,    99,
      41,    99,    43,   226,    52,    53,   121,    49,   108,   124,
     108,   108,    54,    55,    52,    53,   116,   240,   116,   119,
       3,     4,     5,     6,     7,     8,    30,    10,    11,    12,
     130,    28,   130,   165,   130,    30,   243,    38,   245,   171,
      52,    53,   142,    30,   142,    49,   178,    30,     5,   272,
      54,    55,    20,    31,    21,    38,    22,   278,     0,    54,
      55,   284,    43,     5,    34,   165,    45,    54,    55,    47,
      47,   171,    50,    51,    16,    17,    18,    31,   178,    21,
      22,    23,    24,    25,    38,    35,    31,    29,     5,   224,
     222,   224,    47,    47,     5,    37,    50,    51,    40,    26,
      27,     5,    47,    38,    46,    50,    51,    39,    48,     3,
       4,     5,     6,     7,     8,    38,    10,    11,    12,    38,
      52,    53,   222,    31,   224,   225,   224,   225,   225,   229,
     230,   229,   230,   229,   230,   227,    30,    30,    31,    47,
      41,    38,    50,    51,    38,    38,    38,     3,     4,     5,
       6,     7,     8,    43,    47,     0,    49,    50,    51,    26,
       5,    54,    55,    39,   256,   257,   258,   259,   260,   261,
     262,    16,    17,    18,    30,    39,    21,    22,    23,    24,
      25,    45,    38,    42,    29,    47,     5,    39,    52,    53,
      39,    39,    37,    39,    47,    40,     5,    16,    17,    18,
      47,    46,    21,    22,    23,    24,    25,    16,    17,    18,
      29,    47,    21,    22,    23,    24,    25,     5,    37,    39,
      29,    40,    20,    34,    35,    36,    37,    46,    37,     5,
       5,    38,     5,    39,    39,    44,    39,    46,    49,     5,
      16,    17,    18,    47,    20,    21,    22,    23,    24,    25,
      16,    17,    18,    29,    47,    21,    22,    23,    24,    25,
      47,    37,    39,    29,    34,    35,    36,    37,    45,    39,
      46,    37,     5,    47,    38,    52,    53,    45,    44,    49,
      46,    41,    41,    16,    17,    18,    41,    41,    21,    22,
      23,    24,    25,    41,    41,    41,    29,    42,     3,     4,
       5,     6,     7,     8,    37,    10,    11,    12,    44,    19,
      41,     6,    42,    46,     3,     4,     5,     6,     7,     8,
      44,    10,    11,    12,     5,    30,     3,     4,     5,     6,
       7,     8,    39,    38,    30,    31,    45,    34,    35,    36,
      37,    30,    39,    30,    31,    30,    31,    45,    39,    38,
       2,    47,    49,   244,    50,    51,   142,   240,    54,    55,
      47,    38,    47,    50,    51,    50,    51,    54,    55,    54,
      55,    34,    35,    36,    37,    38,   113,   135,     4,    42,
      34,    35,    36,    37,   146,    39,    49,    34,    35,    36,
      37,    39,    39,    -1,    42,    49,    -1,    45,    -1,    -1,
      48,   129,    49,    39,    52,    53,    42,   129,   129,    45,
     129,    -1,    48,    -1,    -1,    -1,    52,    53,   231,   232,
     233,   234,   235,   236,   237,    10,    11,    12,    13,    14,
      15,     3,     4,     5,     6,     7,     8
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    57,    58,     0,     5,    16,    17,    18,    23,    24,
      25,    29,    37,    40,    46,    59,    60,    61,    62,    65,
      66,    71,    74,    75,    76,    77,    82,    83,    88,    89,
      34,    35,    36,    37,    38,    42,    49,    99,    38,    38,
      38,    28,    38,     3,     4,     5,     6,     7,     8,    10,
      11,    12,    30,    38,    77,    81,    90,    91,    92,    93,
      94,    95,    96,    98,    37,     5,     9,     5,    20,    21,
      22,    43,    84,    63,    65,    45,    47,    34,    35,     6,
      78,    79,    80,    81,    90,     5,    47,     5,     8,    97,
       5,     8,    77,    90,    96,     5,     3,     4,     5,    38,
      77,    91,    93,    96,    91,    93,    94,    96,    48,    31,
      47,    50,    51,   100,    52,    53,   101,    34,    35,    99,
      30,    49,    54,    55,   102,    38,    74,    38,    38,    41,
      38,    43,    72,    38,    26,    85,    86,    64,     6,    81,
      90,    39,    42,    47,     3,     5,    34,    39,    39,    39,
      39,    94,    39,    39,    39,     5,     8,    77,    81,    96,
      47,    47,    47,     5,     7,    38,    92,    93,     3,     4,
       5,    38,    77,    94,    96,     3,     4,     5,    38,    95,
      95,     5,    58,    68,    39,    10,    11,    12,    13,    14,
      15,   103,   104,   105,   106,   107,    90,    58,    20,    75,
       3,     4,     5,     6,     7,     8,    27,    86,    87,    80,
       5,    97,    72,    39,    94,    94,    39,     5,    69,    70,
      39,    72,    47,    47,    47,    47,    39,    73,    74,    38,
      45,    41,    41,    41,    41,    41,    41,    41,    44,    42,
      19,    39,    39,    41,    42,    41,    72,    94,     6,    93,
      81,    72,    63,    74,    90,    90,    73,    73,    73,    73,
      73,    73,    73,     5,    72,    82,   103,   104,   105,   106,
     107,    70,    67,   107,    63,    64,    44,    39,    45,    72,
      45,    75,    63,    64,    39,    72,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    65,    65,    65,    66,    66,    67,    68,    68,    69,
      69,    70,    71,    72,    73,    73,    74,    74,    74,    74,
      74,    74,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    82,    82,    82,    83,
      84,    85,    85,    86,    86,    86,    86,    86,    86,    87,
      87,    88,    88,    89,    90,    90,    90,    90,    91,    91,
      92,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    95,    95,    95,    95,    96,    97,
      97,    97,    98,    98,    98,    99,    99,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   104,   105,   106,   107,   107,   107,   107
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     0,     0,     0,     4,     0,     0,
       2,     1,     1,     1,     7,     9,     1,     2,     1,     3,
       1,     3,     5,     5,     2,     1,     2,     1,     1,     1,
       1,     3,     4,     6,     6,     6,     6,     3,     3,     3,
       4,     4,     2,     1,     1,     3,     3,     4,     4,     7,
       1,     2,     2,     2,     1,     4,     1,     0,     3,     1,
       1,     1,     3,     1,     1,     1,     5,     7,     7,     3,
       4,     2,     1,     4,     4,     4,     4,     4,     4,     3,
       0,     7,     9,    11,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       2,     1,     1,     1,     3,     3,     3,     2,     1,     1,
       3,     4,     1,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 30 "sintatica.y" /* yacc.c:1646  */
    {
				if(verifica_lista_nao_iniciadas()){
					yyerror("Você chamou uma função não declarada!");
				}
				string atribuicoes_tamanho_string = "";

				Configuracao_String aux;
				for (vector<Configuracao_String>::iterator it = lista_conf_strings.begin(); it != lista_conf_strings.end(); it++) {
					aux = *it;
					atribuicoes_tamanho_string += "\n\t" + aux.var_tam + " = " + to_string(aux.valor_tam) + ";\n";
				}

				cout << "/*Compilador SALAH*/\n"
					 << "#include <iostream>\n"
					 << "#include <string>\n\n"
					 << "using namespace std;\n\n"
					 << declaracoes
					 << funcoes
					 << "\n\n"
					 << "int main(void) {\n"
					 	<< atribuicoes_tamanho_string
					 	<< "\n"
					 	<< (yyvsp[-1]).traducao
					 	<< free_strings
						<< "\n"
					 	<< "\treturn 0;\n"
					 << "}"
					 << endl;
			}
#line 1558 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 61 "sintatica.y" /* yacc.c:1646  */
    {
				empilhar_pilha();
			}
#line 1566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 66 "sintatica.y" /* yacc.c:1646  */
    {
				empilhar_laco(0, conta_while);
			}
#line 1574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 71 "sintatica.y" /* yacc.c:1646  */
    {
				empilhar_laco(1, conta_while);
			}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 76 "sintatica.y" /* yacc.c:1646  */
    {
				empilhar_laco(2, conta_while);
			}
#line 1590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[-1]).traducao);

				string temp = "tmp" +to_string(retornada.id);

				pilha_de_switch.push(temp);
				empilhar_laco(3, conta_switch);
			}
#line 1603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 91 "sintatica.y" /* yacc.c:1646  */
    {
				desempilhar_pilha();
			}
#line 1611 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 96 "sintatica.y" /* yacc.c:1646  */
    {
				desempilhar_laco();
			}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 100 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-1]).traducao + (yyvsp[0]).traducao;
			}
#line 1627 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 103 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 106 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 109 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1651 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 114 "sintatica.y" /* yacc.c:1646  */
    {
				string nome_funcao = cria_funcao((yyvsp[-5]).traducao, -1);
				funcoes.append("\nvoid " + nome_funcao + "(" + (yyvsp[-3]).traducao + "){\n" + (yyvsp[-1]).traducao + "}\n");
				(yyval).traducao = "";
				tipo_retorna_funcao = -1;
			}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 120 "sintatica.y" /* yacc.c:1646  */
    {
				string nome_funcao = cria_funcao((yyvsp[-7]).traducao, (yyvsp[-2]).tipo);

				string tipo = (yyvsp[-2]).traducao;
				if((yyvsp[-2]).tipo == 4){
					tipo = "int";
				}

				funcoes.append("\n" + tipo + " " + nome_funcao + "(" + (yyvsp[-5]).traducao + ") {\n" + (yyvsp[-1]).traducao + "}\n");
				(yyval).traducao = "";
				tipo_retorna_funcao = -1;
			}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 134 "sintatica.y" /* yacc.c:1646  */
    {
				tipo_retorna_funcao = (yyvsp[0]).tipo;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 1688 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 140 "sintatica.y" /* yacc.c:1646  */
    {

				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 144 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "";
			}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 149 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao + ", " + (yyvsp[0]).traducao;
			}
#line 1713 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 152 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 157 "sintatica.y" /* yacc.c:1646  */
    {

				string temp = cria_variavel_temporaria((yyvsp[-2]).traducao, (yyvsp[0]).tipo);

				temp.erase(0, 3);

				Variavel param;
				param.id = stoi(temp);
				param.nome = (yyvsp[-2]).traducao;
				param.tipo = (yyvsp[0]).tipo;

				params.push_back(param);

				string tipo = (yyvsp[0]).traducao;
				if((yyvsp[0]).tipo == 4){
					tipo = "int";
				}

				(yyval).traducao = tipo + " tmp" + temp;
			}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 179 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 184 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao;
			}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 189 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-1]).traducao + (yyvsp[0]).traducao;
			}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 192 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 202 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\t/*\n" + (yyvsp[0]).traducao + "\t*/\n";
			}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 207 "sintatica.y" /* yacc.c:1646  */
    {

				string tradu_aux = "";

				if((yyvsp[0]).tipo == 4){
					declaracoes.append("int " + cria_variavel_temporaria((yyvsp[-2]).traducao, 4) + ";\n");
				} else {
					int valor_tipo = (yyvsp[0]).tipo;

					if(valor_tipo != 5){
						declaracoes.append((yyvsp[0]).traducao + " " + cria_variavel_temporaria((yyvsp[-2]).traducao, valor_tipo) + ";\n");
					} else {
						string temp_tamanho_string = cria_variavel_temporaria("", 6);
						declaracoes.append("int " + temp_tamanho_string + ";\n");

						int tamanho_string = 0;

						string nova_temporaria = cria_variavel_temporaria((yyvsp[-2]).traducao, 5);
						declaracoes.append("char * " + nova_temporaria + ";\n");

						cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

						tradu_aux = "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n";
					}

				}
				(yyval).traducao = tradu_aux;
			}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 235 "sintatica.y" /* yacc.c:1646  */
    {

				if((yyvsp[-2]).tipo != (yyvsp[0]).tipo){
					if(!((((yyvsp[-2]).tipo <= 2) || ((yyvsp[-2]).tipo == 4)) && (((yyvsp[0]).tipo <= 2) || ((yyvsp[0]).tipo == 4))))
						yyerror("Variáveis de tipo incompatíveis");
				}

				int valor_tipo = (yyvsp[-2]).tipo;

				string nova_temporaria = cria_variavel_temporaria((yyvsp[-4]).traducao, valor_tipo);
				declaracoes.append((yyvsp[-2]).traducao + " " + nova_temporaria + ";\n");
				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + nova_temporaria + " = " + (yyvsp[0]).variavel_temporaria + ";\n";
			}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 249 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria((yyvsp[-4]).traducao, 3);
				declaracoes.append((yyvsp[-2]).traducao + " " + nova_temporaria + ";\n");

				(yyval).traducao = "\t" + nova_temporaria + " = " + (yyvsp[0]).traducao + ";\n";
			}
#line 1849 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 255 "sintatica.y" /* yacc.c:1646  */
    {
				if((yyvsp[-2]).tipo != (yyvsp[0]).tipo){
					yyerror("Variáveis de tipo incompatíveis");
				}

				string nova_temporaria = cria_variavel_temporaria((yyvsp[-4]).traducao, 4);
				declaracoes.append("int " + nova_temporaria + ";\n");

				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + nova_temporaria + " = " + (yyvsp[0]).variavel_temporaria + ";\n";
			}
#line 1865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 266 "sintatica.y" /* yacc.c:1646  */
    {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = (yyvsp[0]).tamanho;

				string nova_temporaria = cria_variavel_temporaria((yyvsp[-4]).traducao, 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
							+ "\tstrcpy(" + nova_temporaria + ", " + (yyvsp[0]).variavel_temporaria + ");\n";
			}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 281 "sintatica.y" /* yacc.c:1646  */
    {

				Variavel retornada_esquerda  = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				Variavel retornada_direita = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = (yyvsp[0]).variavel_temporaria;

				if(retornada_esquerda.tipo != retornada_direita.tipo)
					if(!(((retornada_esquerda.tipo <= 2) || (retornada_esquerda.tipo == 4)) && ((retornada_direita.tipo <= 2) || (retornada_direita.tipo == 4))))
						yyerror("Variáveis de tipo incompatíveis");


				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + temp_esquerda + " = " + aux_temporaria + ";\n";
			}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 302 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria((yyvsp[-2]).traducao);

				string temp_esquerda = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));

				int tamanho_string = (yyvsp[0]).tamanho;

				compara_tamanho_string_conf(temp_esquerda, tamanho_string);

				if(retornada_esquerda.tipo != (yyvsp[0]).tipo)
					yyerror("Variáveis de tipo incompatíveis");

				(yyval).traducao = (yyvsp[0]).traducao
							+ "\tstrcpy(" + temp_esquerda + ", " + (yyvsp[0]).variavel_temporaria + ");\n";
			}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 319 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				Variavel retornada_esquerda  = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				Variavel retornada_direita = retorna_variavel_temporaria_by_id(nova_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = nova_temporaria;

				if(retornada_esquerda.tipo != retornada_direita.tipo)
					yyerror("Variáveis de tipo incompatíveis");

				(yyval).traducao = "\t" + nova_temporaria + " = " + (yyvsp[0]).traducao + ";\n"
							+ "\t" + temp_esquerda + " = " + aux_temporaria + ";\n";
				(yyval).tipo = 3;
			}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 341 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\tcout << " + (yyvsp[-1]).traducao + ";\n";
			}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 344 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[-1]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				(yyval).traducao = "\tcin >> " + temp + ";\n";
			}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 351 "sintatica.y" /* yacc.c:1646  */
    {
				string goto_atual = retorna_goto();

				(yyval).traducao = "\n\tgoto " + goto_atual + ";\n";
			}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 356 "sintatica.y" /* yacc.c:1646  */
    {
				stack<Laco> pilha_aux_de_lacos = pilha_de_lacos;

				while (!pilha_aux_de_lacos.empty()){

			    	string goto_atual = retorna_inicio_goto(pilha_aux_de_lacos);
					pilha_aux_de_lacos.pop();

					if (pilha_aux_de_lacos.empty()) {
						(yyval).traducao = "\n\tgoto " + goto_atual + ";\n";
					}
			  	}
			}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 369 "sintatica.y" /* yacc.c:1646  */
    {
				stack<Laco> pilha_aux_de_lacos = pilha_de_lacos;

				while (!pilha_aux_de_lacos.empty()){

			    	string goto_atual = retorna_goto_pilha_aux(pilha_aux_de_lacos);
					pilha_aux_de_lacos.pop();

					if (pilha_aux_de_lacos.empty()) {
						(yyval).traducao = "\n\tgoto " + goto_atual + ";\n";
					}
			  	}
			}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 382 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					(yyval).traducao = "\n\t" + temp + " = " + temp + " + 1;\n";
				}else{
					yyerror("Tipo incompativel com operação unaria\n");
				}
			}
#line 2042 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 393 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					(yyval).traducao = "\n\t" + temp + " = " + temp + " - 1;\n";
				}else{
					yyerror("Tipo incompativel com operação unária");
				}
			}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 404 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esq = retorna_variavel_temporaria((yyvsp[-3]).traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				Variavel retornada_dir = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp_dir = "tmp";
				temp_dir.append(to_string(retornada_dir.id));

				if((retornada_dir.tipo <= 2) && (retornada_esq.tipo <= 2)){
					(yyval).traducao = "\n\t" + temp_esq + " = " + temp_esq + " " + (yyvsp[-2]).traducao + " " + temp_dir + ";\n";
				}else{
					yyerror("Tipo incompativel com operação composta\n");
				}
			}
#line 2078 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 419 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esq = retorna_variavel_temporaria((yyvsp[-3]).traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				string temp_dir = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + temp_dir + ";\n");

				if(retornada_esq.tipo <= 2){
					(yyval).traducao = "\n\t" + temp_dir + " = " + (yyvsp[0]).traducao + ";\n\t" + temp_esq + " = " + temp_esq + " " + (yyvsp[-2]).traducao + " " + temp_dir + ";\n";
				}else{
					yyerror("Tipo incompativel com operação composta\n");
				}
			}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 433 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esq = retorna_variavel_temporaria((yyvsp[-6]).traducao);
				string temp_esq = "tmp";
				temp_esq.append(to_string(retornada_esq.id));

				Variavel retornada_esq2 = retorna_variavel_temporaria((yyvsp[-4]).traducao);
				string temp_esq2 = "tmp";
				temp_esq2.append(to_string(retornada_esq2.id));

				Variavel retornada_dir = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				string temp_dir = "tmp";
				temp_dir.append(to_string(retornada_dir.id));

				Variavel retornada_dir2 = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp_dir2 = "tmp";
				temp_dir2.append(to_string(retornada_dir2.id));

				if((retornada_dir.tipo <= 2) && (retornada_esq.tipo <= 2) && (retornada_dir2.tipo <= 2) && (retornada_esq2.tipo <= 2)){

					string aux_troca_1 = cria_variavel_temporaria("", 2);
					string aux_troca_2 = cria_variavel_temporaria("", 2);
					declaracoes.append("double " + aux_troca_1 + ";\n");
					declaracoes.append("double " + aux_troca_2 + ";\n");

					(yyval).traducao = "\n\t" + aux_troca_1 + " = (double) " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = (double) " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = (" + retorna_nome_tipo(retornada_esq.tipo) + ") " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = (" + retorna_nome_tipo(retornada_esq2.tipo) + ") " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = (" + retorna_nome_tipo(retornada_dir.tipo) + ") " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = (" + retorna_nome_tipo(retornada_dir2.tipo) + ") " + aux_troca_2 + ";\n";
				} else if((retornada_dir.tipo == 3) && (retornada_esq.tipo == 3) && (retornada_dir2.tipo == 3) && (retornada_esq2.tipo == 3)){

					string aux_troca_1 = cria_variavel_temporaria("", 3);
					string aux_troca_2 = cria_variavel_temporaria("", 3);
					declaracoes.append("char " + aux_troca_1 + ";\n");
					declaracoes.append("char " + aux_troca_2 + ";\n");

					(yyval).traducao = "\n\t" + aux_troca_1 + " = " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = " + aux_troca_2 + ";\n";
				} else if((retornada_dir.tipo == 4) && (retornada_esq.tipo == 4) && (retornada_dir2.tipo == 4) && (retornada_esq2.tipo == 4)){

					string aux_troca_1 = cria_variavel_temporaria("", 4);
					string aux_troca_2 = cria_variavel_temporaria("", 4);
					declaracoes.append("int " + aux_troca_1 + ";\n");
					declaracoes.append("int " + aux_troca_2 + ";\n");

					(yyval).traducao = "\n\t" + aux_troca_1 + " = " + temp_esq + ";\n"
								+ "\t" + aux_troca_2 + " = " + temp_esq2 +";\n\n"
								+ "\t" + temp_esq + " = " + temp_dir +";\n\n"
								+ "\t" + temp_esq2 + " = " + temp_dir2 +";\n\n"
								+ "\t" + temp_dir + " = " + aux_troca_1 + ";\n"
								+ "\t" + temp_dir2 + " = " + aux_troca_2 + ";\n";
				} else {
					yyerror("Tipo incompativel para troca\n");
				}
			}
#line 2162 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 493 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 498 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_direita = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				if(tipo_retorna_funcao == retornada_direita.tipo){
					(yyval).traducao = (yyvsp[0]).traducao
								+ "\n\treturn " + (yyvsp[0]).variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 512 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_direita = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				if(tipo_retorna_funcao == retornada_direita.tipo){
					(yyval).traducao = (yyvsp[0]).traducao
								+ "\n\treturn " + (yyvsp[0]).variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
#line 2210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 526 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				Variavel retornada_direita = retorna_variavel_temporaria_by_id(nova_temporaria);

				string temp_direita = "tmp";

				temp_direita.append(to_string(retornada_direita.id));

				string aux_temporaria = nova_temporaria;

				if(tipo_retorna_funcao == retornada_direita.tipo){
					(yyval).traducao = "\t" + nova_temporaria + " = " + (yyvsp[0]).traducao + ";\n"
								+ "\n\treturn " + (yyvsp[0]).variavel_temporaria + ";\n";
				} else {
					if(tipo_retorna_funcao == -1){
						yyerror("Foi escrito retorno e uma função que não tem retorno");
					} else {
						yyerror("Retorno de função diferente do declarado na função");
					}
				}
			}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 551 "sintatica.y" /* yacc.c:1646  */
    {
					Variavel retornada_esquerda  = retorna_variavel_temporaria((yyvsp[0]).traducao);

					tipo_variavel_esquerda = retornada_esquerda.tipo;

					(yyval).traducao = (yyvsp[0]).traducao;
				}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 560 "sintatica.y" /* yacc.c:1646  */
    {
					Funcao func = retorna_funcao((yyvsp[-3]).traducao);
					if(!func.nome.empty()){
						if(func.parametros.size() != (yyvsp[-1]).params.size())
							yyerror("Você chamou uma função com a quantidade de parametros errada!\n");
						else {
							string tempAux = "";
							string aux_temp = "";
							if(func.tipo != -1){
								tempAux = cria_variavel_temporaria("", func.tipo);
								string tipo_string = "int";
								switch (func.tipo) {
									case 1:
										tipo_string = "float";
										break;
									case 2:
										tipo_string = "double";
										break;
									case 3:
										tipo_string = "char";
										break;
									case 4:
										tipo_string = "int";
										break;
									case 5:
										tipo_string = "string";
										break;
								}
								declaracoes.append(tipo_string + " " + tempAux + ";\n");

								aux_temp = " = ";
							}

							int iguais = 0;

							Variavel aux_guardado;
							Param aux_chamado;

							vector<Variavel> params_guardado = func.parametros;
							vector<Param> params_chamado = (yyvsp[-1]).params;

							vector<Variavel>::iterator it_guardado = params_guardado.begin();
							vector<Param>::iterator it_chamado = params_chamado.begin();

							while(it_guardado != params_guardado.end()) {
								aux_guardado = *it_guardado;
								aux_chamado = *it_chamado;

								if(aux_guardado.tipo == aux_chamado.tipo)
									iguais++;
								else {
									if((aux_guardado.tipo <= 2) && (aux_chamado.tipo <= 2))
										iguais++;
								}

								it_guardado++;
								it_chamado++;
							}

							if(iguais != params_guardado.size())
								yyerror("Chamada de função com tipo diferente da definição!\n");
							else{
								(yyval).traducao = (yyvsp[-1]).traducao
											+ "\n\t" + tempAux + aux_temp + "func" + to_string(func.id) + "(" + (yyvsp[-1]).variavel_temporaria + ");\n";
								(yyval).variavel_temporaria = tempAux;
								(yyval).tipo = func.tipo;
							}
						}
					} else {
						func = retorna_funcao_lista_nao_iniciadas((yyvsp[-3]).traducao, 0);
						if(!func.nome.empty()){
							if(func.aux_param.size() != (yyvsp[-1]).params.size())
								yyerror("Você chamou uma função com a quantidade de parametros errada!\n");
							else{
								string tempAux = "";
								string aux_temp = "";
								if(func.tipo != -1){
									tempAux = cria_variavel_temporaria("", func.tipo);
									string tipo_string = "int";
									switch (func.tipo) {
										case 1:
											tipo_string = "float";
											break;
										case 2:
											tipo_string = "double";
											break;
										case 3:
											tipo_string = "char";
											break;
										case 4:
											tipo_string = "int";
											break;
										case 5:
											tipo_string = "string";
											break;
									}
									declaracoes.append(tipo_string + " " + tempAux + ";\n");

									aux_temp = " = ";
								}

								int iguais = 0;

								Param aux_guardado;
								Param aux_chamado;

								vector<Param> params_guardado = func.aux_param;
								vector<Param> params_chamado = (yyvsp[-1]).params;

								vector<Param>::iterator it_guardado = params_guardado.begin();
								vector<Param>::iterator it_chamado = params_chamado.begin();

								while(it_guardado != params_guardado.end()) {
									aux_guardado = *it_guardado;
									aux_chamado = *it_chamado;

									if(aux_guardado.tipo == aux_chamado.tipo)
										iguais++;
									else {
										if((aux_guardado.tipo <= 2) && (aux_chamado.tipo <= 2))
											iguais++;
									}

									it_guardado++;
									it_chamado++;
								}

								if(iguais != params_guardado.size())
									yyerror("Chamada de função com tipo diferente da definição!\n");
								else{
									(yyval).traducao = (yyvsp[-1]).traducao
												+ "\n\t" + tempAux + aux_temp + "func" + to_string(func.id) + "(" + (yyvsp[-1]).variavel_temporaria + ");\n";
									(yyval).variavel_temporaria = tempAux;
									(yyval).tipo = func.tipo;
								}

							}
						} else {
							string tempAux = "";
							string aux_temp = "";
							if(tipo_variavel_esquerda != -1){
								tempAux = cria_variavel_temporaria("", tipo_variavel_esquerda);
								string tipo_string = "int";
								switch (func.tipo) {
									case 1:
										tipo_string = "float";
										break;
									case 2:
										tipo_string = "double";
										break;
									case 3:
										tipo_string = "char";
										break;
									case 4:
										tipo_string = "int";
										break;
									case 5:
										tipo_string = "string";
										break;
								}
								declaracoes.append(tipo_string + " " + tempAux + ";\n");

								aux_temp = " = ";
							}

							Funcao nao_iniciada;
							nao_iniciada.nome = (yyvsp[-3]).traducao;
							nao_iniciada.id = id_func;
							nao_iniciada.aux_param = (yyvsp[-1]).params;
							nao_iniciada.tipo = tipo_variavel_esquerda;
							nao_iniciada.aux_linha = new_line;

							lista_de_funcoes_nao_iniciadas.push_back(nao_iniciada);

							(yyval).traducao = (yyvsp[-1]).traducao
										+ "\n\t" + tempAux + aux_temp + "func" + to_string(id_func) + "(" + (yyvsp[-1]).variavel_temporaria + ");\n";
							(yyval).variavel_temporaria = tempAux;
							(yyval).tipo = tipo_variavel_esquerda ;

							id_func++;
						}
					}
				}
#line 2438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 745 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).params = (yyvsp[0]).params;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
			}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 750 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "";
			}
#line 2456 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 755 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao + (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[-2]).variavel_temporaria + ", " + (yyvsp[0]).variavel_temporaria;

				Param this_param;
				this_param.nome_tmp = (yyvsp[0]).variavel_temporaria;
				this_param.tipo = (yyvsp[0]).tipo;

				(yyval).params = (yyvsp[-2]).params;
				(yyval).params.push_back(this_param);
			}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 766 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;

				Param this_param;
				this_param.nome_tmp = (yyvsp[0]).variavel_temporaria;
				this_param.tipo = (yyvsp[0]).tipo;

				(yyval).params.push_back(this_param);
			}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 778 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2497 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 783 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = 5;
			}
#line 2507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 790 "sintatica.y" /* yacc.c:1646  */
    {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = (yyvsp[-2]).tamanho + (yyvsp[0]).tamanho - 1;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				(yyval).traducao = (yyvsp[-2]).traducao
							+ (yyvsp[0]).traducao
							+ "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
							+ "\tstrcpy(" + nova_temporaria + ", " + (yyvsp[-2]).variavel_temporaria + ");\n"
							+ "\tstrcat(" + nova_temporaria + ", " + (yyvsp[0]).variavel_temporaria + ");\n";
				(yyval).variavel_temporaria = nova_temporaria;
				(yyval).tamanho = tamanho_string;
				(yyval).tipo = 5;
			}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 810 "sintatica.y" /* yacc.c:1646  */
    {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = (yyvsp[0]).traducao.length() + 1 - 2;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				(yyval).traducao = 	"\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n"
								+ "\tstrcpy(" + nova_temporaria + ", " + (yyvsp[0]).traducao + ");\n";
				(yyval).variavel_temporaria = nova_temporaria;
				(yyval).tamanho = tamanho_string;
				(yyval).tipo = 5;
			}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 827 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 832 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = (yyvsp[0]).tipo;

				if((yyvsp[0]).variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 844 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao
							+ "\n\tif ("+ (yyvsp[-2]).variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto final_if_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ (yyvsp[0]).traducao
							+ "\n\tfinal_if_" + to_string(conta_if) + ":\n";
				conta_if++;
			}
#line 2591 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 853 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-4]).traducao
							+ "\n\tif ("+ (yyvsp[-4]).variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto inicio_else_" + to_string(conta_if) + ";\n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ (yyvsp[-2]).traducao
							+ "\n\tgoto final_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_else_" + to_string(conta_if) + ":\n"
							+ (yyvsp[0]).traducao
							+ " \n\tfinal_else_" + to_string(conta_if) + ":\n\n";
				conta_if++;
			}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 865 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-4]).traducao
							+ "\n\tif ("+ (yyvsp[-4]).variavel_temporaria + ") goto inicio_if_" + to_string(conta_if) + ";\n"
							+ "\tgoto inicio_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_if_" + to_string(conta_if) + ": \n"
							+ (yyvsp[-2]).traducao
							+ "\n\tgoto final_else_" + to_string(conta_if) + "; \n\n"
							+ "\tinicio_else_" + to_string(conta_if) + ":\n"
							+ (yyvsp[0]).traducao
							+" \n\tfinal_else_" + to_string(conta_if) + ":\n\n";
				conta_if++;
			}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 879 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\n//SWITCH\n"
							+ (yyvsp[-1]).traducao;
				pilha_de_switch.pop();
			}
#line 2635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 886 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao
							+ "\n\n//DEFAULT\n\n"
							+ "\tfinal_case_" + to_string(conta_case++) + ":\n"
							+ (yyvsp[-1]).traducao
							+ "\tfinal_switch_" + to_string(conta_switch) + ":\n";
				conta_case++;
				conta_switch++;
			}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 897 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + nova_temporaria + ";\n");

				(yyval).traducao = (yyvsp[-1]).traducao
							+ (yyvsp[0]).label
							+ "\t" +  nova_temporaria + " = " + pilha_de_switch.top() + " == " + (yyvsp[0]).variavel_temporaria + ";\n"
							+ "\tif(" + nova_temporaria + ") goto final_case_" + to_string(conta_case) + ";\n"
							+ "\tgoto final_case_" + to_string(conta_case + 1) + ";\n"
							+ "\n\tfinal_case_" + to_string(conta_case) + ":\n"
							+ (yyvsp[0]).traducao
							+ "\n\tgoto final_case_" + to_string(conta_case + 1) + ";\n\n";
				conta_case++;
			}
#line 2668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 911 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + nova_temporaria + ";\n");

				(yyval).traducao = (yyvsp[0]).label
							+ "\t" +  nova_temporaria + " = " + pilha_de_switch.top() + " == " + (yyvsp[0]).variavel_temporaria + ";\n"
							+ "\tif(" + nova_temporaria + ") goto final_case_" + to_string(conta_case) + ";\n"
							+ "\tgoto final_case_" + to_string(conta_case + 1) + ";\n"
							+ "\n\tfinal_case_" + to_string(conta_case) + ":\n"
							+ (yyvsp[0]).traducao
							+ "\n\tgoto final_case_" + to_string(conta_case + 1) + ";\n\n";
				conta_case++;
			}
#line 2686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 926 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");

				(yyval).label = "\t" +  tempAux + " = " + (yyvsp[-2]).traducao + ";\n";
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 0;
			}
#line 2700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 935 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");

				(yyval).label = "\t" +  tempAux + " = " + (yyvsp[-2]).traducao + ";\n";
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 2;
			}
#line 2714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 944 "sintatica.y" /* yacc.c:1646  */
    {
				int auxBool = 0;

				if ((yyvsp[-2]).traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 4;
			}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 958 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				(yyval).label = "\t" +  nova_temporaria + " = " + (yyvsp[-2]).traducao + ";\n";
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = nova_temporaria;
				(yyval).tipo = 3;
			}
#line 2747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 967 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("string " + nova_temporaria + ";\n");

				(yyval).label = "\t" +  nova_temporaria + " = " + (yyvsp[-2]).traducao + ";\n";
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = nova_temporaria;
				(yyval).tipo = 5;
			}
#line 2761 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 976 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[-2]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				(yyval).label = "";
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = temp;
				(yyval).tipo = 5;
			}
#line 2776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 988 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 2784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 991 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "";
			}
#line 2792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 996 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\tinicio_while_" + to_string(conta_while) + ":\n"
							+ (yyvsp[-3]).traducao
							+ "\n\tif ("+ (yyvsp[-3]).variavel_temporaria +") goto inicio_bloco_while_" + to_string(conta_while) + ";\n"
							+ "\tgoto final_while_" + to_string(conta_while) + ";\n\n"
							+ "\tinicio_bloco_while_" + to_string(conta_while) + ":\n"
							+ (yyvsp[-1]).traducao
							+ "\n\tgoto inicio_while_" + to_string(conta_while) + ";\n"
							+ "\tfinal_while_" + to_string(conta_while) + ":\n\n";
				conta_while++;
			}
#line 2808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1007 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "\tinicio_do_while" + to_string(conta_while) + "\n"
							+ "\tinicio_bloco_while_" + to_string(conta_while) + ":\n"
							+ (yyvsp[-6]).traducao
							+ "\n\n" + (yyvsp[-3]).traducao
							+ "\n\tif ("+ (yyvsp[-3]).variavel_temporaria +") goto inicio_bloco_while_" + to_string(conta_while)
							+ "\n\n\tfinal_do_while_" + to_string(conta_while) + ":\n\n";
				conta_while++;
			}
#line 2822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1018 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-7]).traducao
							+ "\n\n\tinicio_for_" + to_string(conta_for) + ":\n"
							+ (yyvsp[-5]).traducao
							+ "\n\tif ("+ (yyvsp[-5]).variavel_temporaria +") goto inicio_bloco_for_" + to_string(conta_for) + ";\n"
							+ "\tgoto final_for_" + to_string(conta_for) + ";\n\n"
							+ "\tinicio_bloco_for_" + to_string(conta_for) + ":\n"
							+ (yyvsp[-1]).traducao
							+ "\n\n\t" + (yyvsp[-3]).traducao
							+ "\n\tgoto inicio_for_" + to_string(conta_for) + ";\n"
							+ "\tfinal_for_" + to_string(conta_for) + ":\n\n";
				conta_for++;
			}
#line 2840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1033 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1038 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = 4;
			}
#line 2860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1043 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1048 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1055 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-2]).variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);
				declaracoes.append("int " + tempAux + ";\n");

				if(retornada_direita.tipo != 5){
					(yyval).traducao = (yyvsp[-2]).traducao
								+ (yyvsp[0]).traducao
								+ "\t" + tempAux + " = " + temp_esquerda + " " + (yyvsp[-1]).traducao + " " + temp_direita + ";\n";
				} else {

					int igual = strcmp((yyvsp[-1]).traducao.c_str(), "==");
					int diferente = strcmp((yyvsp[-1]).traducao.c_str(), "!=");

					if((igual == 0) || (diferente == 0)){
						string auxiliar_comparacao = cria_variavel_temporaria("", 0);
						declaracoes.append("int " + auxiliar_comparacao + ";\n");

						string auxiliar_comparacao_2 = cria_variavel_temporaria("", 4);
						declaracoes.append("int " + auxiliar_comparacao_2 + ";\n");
						if(igual == 0){
							(yyval).traducao = (yyvsp[-2]).traducao
										+ (yyvsp[0]).traducao
										+ "\n\t" + auxiliar_comparacao + " = strcmp(" + temp_esquerda + "," + temp_direita + ");\n"
										+ "\t" + auxiliar_comparacao_2 + " = " + auxiliar_comparacao + " == 0;\n"
										+ "\tif(" + auxiliar_comparacao_2 + ") goto string_iguais_" + to_string(conta_rel_string) + ";\n"
										+ "\t" + tempAux + " = 0;\n"
										+ "\tgoto fim_string_iguais_" + to_string(conta_rel_string) + ";\n\n"
										+ "\tstring_iguais_" + to_string(conta_rel_string) + ":\n"
										+ "\t" + tempAux + " = 1;\n\n"
										+ "\tfim_string_iguais_" + to_string(conta_rel_string) + ":\n";
						} else {
							(yyval).traducao = (yyvsp[-2]).traducao
										+ (yyvsp[0]).traducao
										+ "\n\t" + auxiliar_comparacao + " = strcmp(" + temp_esquerda + "," + temp_direita + ");\n"
										+ "\t" + auxiliar_comparacao_2 + " = " + auxiliar_comparacao + " == 0;\n"
										+ "\tif(" + auxiliar_comparacao_2 + ") goto string_diferentes_" + to_string(conta_rel_string) + ";\n"
										+ "\t" + tempAux + " = 1;\n"
										+ "\tgoto fim_string_diferentes_" + to_string(conta_rel_string) + ";\n\n"
										+ "\tstring_diferentes_" + to_string(conta_rel_string) + ":\n"
										+ "\t" + tempAux + " = 0;\n\n"
										+ "\tfim_string_diferentes_" + to_string(conta_rel_string) + ":\n";
						}
					} else {
						yyerror("operação incompativel com tipo String");
					}
				}

				(yyval).variavel_temporaria = tempAux;
			}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1113 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[-1]).variavel_temporaria;
				(yyval).traducao = (yyvsp[-1]).traducao;
				(yyval).tipo = 4;
			}
#line 2953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1120 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");

				(yyval).traducao = "\t" +  tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
			}
#line 2965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1127 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");

				(yyval).traducao = "\t" + tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
			}
#line 2977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1134 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				(yyval).traducao = "";
				(yyval).variavel_temporaria = temp;
			}
#line 2990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1142 "sintatica.y" /* yacc.c:1646  */
    {
				string nova_temporaria = cria_variavel_temporaria("", 3);
				declaracoes.append("char " + nova_temporaria + ";\n");

				(yyval).traducao = "\t" + nova_temporaria + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = nova_temporaria;
			}
#line 3002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1149 "sintatica.y" /* yacc.c:1646  */
    {
				string temp_tamanho_string = cria_variavel_temporaria("", 6);
				declaracoes.append("int " + temp_tamanho_string + ";\n");

				int tamanho_string = (yyvsp[0]).traducao.length() + 1 - 2;

				string nova_temporaria = cria_variavel_temporaria("", 5);
				declaracoes.append("char * " + nova_temporaria + ";\n");

				cria_conf_string(nova_temporaria, temp_tamanho_string, tamanho_string);

				(yyval).traducao = "\t" + nova_temporaria + " = (char*)malloc(" + temp_tamanho_string + " * sizeof(char));\n" +
							+ "\tstrcpy(" + nova_temporaria + ", " + (yyvsp[0]).traducao + ");\n";
				(yyval).variavel_temporaria = nova_temporaria;
				(yyval).tamanho = tamanho_string;
			}
#line 3023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1165 "sintatica.y" /* yacc.c:1646  */
    {
				int auxBool = 0;

				if ((yyvsp[0]).traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 4;
			}
#line 3041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1178 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[-1]).variavel_temporaria;
				(yyval).traducao = (yyvsp[-1]).traducao;
				(yyval).tipo = (yyvsp[-1]).tipo;
			}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1185 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-2]).variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = (yyvsp[-2]).traducao
							+ (yyvsp[0]).traducao
							+ "\t" + tempAux + " = " + temp_esquerda + " " + (yyvsp[-1]).traducao + " " + temp_direita + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 4;
			}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1204 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[-1]).variavel_temporaria;
				(yyval).traducao = (yyvsp[-1]).traducao;
				(yyval).tipo = (yyvsp[-1]).tipo;
			}
#line 3085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1209 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = 4;
			}
#line 3095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1214 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_direita = "tmp";

				temp_direita.append(to_string(retornada_direita.id));

				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = (yyvsp[0]).traducao
							+ "\t" + tempAux + " = !" + temp_direita + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 4;
			}
#line 3115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1229 "sintatica.y" /* yacc.c:1646  */
    {
				int auxBool = 0;

				if ((yyvsp[0]).traducao.compare("true") == 0){
					auxBool = 1;
				}
				string tempAux = cria_variavel_temporaria("", 4);

				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = "\t" + tempAux + " = " + to_string(auxBool) + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 4;
			}
#line 3133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1242 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1247 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = (yyvsp[0]).tipo;

				if((yyvsp[0]).variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
#line 3156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1257 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-2]).variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}


					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append(tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";


					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append(tipoAux + " " + tempAux + ";\n");

				(yyval).traducao = (yyvsp[-2]).traducao
							+ (yyvsp[0]).traducao
							+ aux_traducao
							+ "\t" + tempAux + " = " + temp_esquerda + (yyvsp[-1]).traducao + temp_direita + ";\n";
				(yyval).tipo = tipoAuxNum;
				(yyval).variavel_temporaria = tempAux;
			}
#line 3234 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1330 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-2]).variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}
					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append(tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";

					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append(tipoAux + " " + tempAux + ";\n");

				string aux = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + aux + ";\n");

				(yyval).traducao = (yyvsp[-2]).traducao
							+ (yyvsp[0]).traducao
							+ aux_traducao
							+ "\t" + aux + " = " + temp_esquerda + " / " + temp_direita + ";\n"
							+ "\t" + aux + " = " + temp_direita + " * " + aux + ";\n"
							+ "\t"+ aux + " = " + temp_esquerda + " - " + aux + ";\n"
							+ "\t" + tempAux + " = " + aux +";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = tipoAuxNum;
			}
#line 3315 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1406 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-2]).variavel_temporaria);
				Variavel retornada_direita  = retorna_variavel_temporaria_by_id((yyvsp[0]).variavel_temporaria);

				string temp_esquerda = "tmp";
				string temp_direita = "tmp";

				temp_esquerda.append(to_string(retornada_esquerda.id));
				temp_direita.append(to_string(retornada_direita.id));

				string aux_traducao;

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				if(retornada_esquerda.tipo != retornada_direita.tipo){

					//verifica quem é o maior/menor
					int maiorTipo = retornada_direita.tipo;
					string menorVar = temp_esquerda;

					if(retornada_esquerda.tipo > retornada_direita.tipo){
						maiorTipo = retornada_esquerda.tipo;
						menorVar = temp_direita;
					}

					//verifica o tipo do maior
					tipoAux = "int";
					tipoAuxNum = 0;
					if(maiorTipo == 1){
						tipoAux = "float";
						tipoAuxNum = 1;
					}
					else if(maiorTipo == 2){
						tipoAux = "double";
						tipoAuxNum = 2;
					}

					// cria variável p/ conversao
					string tempAuxConversao = cria_variavel_temporaria("", maiorTipo);

					declaracoes.append("\t" + tipoAux + " " + tempAuxConversao + ";\n");

					aux_traducao = "\t" + tempAuxConversao + " = (" + tipoAux + ") " + menorVar + ";\n";

					//muda as variáveis dos cantos
					if(retornada_esquerda.tipo > retornada_direita.tipo){
						temp_direita = tempAuxConversao;
					} else {
						temp_esquerda = tempAuxConversao;
					}
				}

				string tempAux = cria_variavel_temporaria("", tipoAuxNum);
				declaracoes.append("" + tipoAux + " " + tempAux + ";\n");

				string conta = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + conta + ";\n");

				string verifica_if = cria_variavel_temporaria("", 0);
				declaracoes.append("" "int " + verifica_if + ";\n");

				(yyval).traducao = (yyvsp[-2]).traducao
							+ (yyvsp[0]).traducao
							+ aux_traducao
							+ "\n\t" + temp_direita + " = (int) " + temp_direita +";\n"
							+ "\t" + tempAux + " = " + temp_esquerda + ";\n"
							+ "\t" + conta + " = 1;\n\n"
							+ "\tinicio_for_operacao" + to_string(conta_for_operacao) + ":\n"
							+ "\t"+ verifica_if + " = " + conta + " < " + temp_direita +";\n"
							+ "\tif ("+ verifica_if +") goto inicio_bloco_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\tgoto final_for_operacao" + to_string(conta_for_operacao) + ";\n\n"
							+ "\tinicio_bloco_for_operacao" + to_string(conta_for_operacao) + ": \n"
							+ "\t" + tempAux + " = " + tempAux + " * " + temp_esquerda + ";\n\n"
							+ "\t" + conta + " = " + conta + " + 1;\n"
							+ "\tgoto inicio_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\tfinal_for_operacao" + to_string(conta_for_operacao) + ":\n\n";
				conta_for_operacao++;

				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = tipoAuxNum;
			}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1496 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada_esquerda  = retorna_variavel_temporaria_by_id((yyvsp[-1]).variavel_temporaria);

				//verifica se estao em tipos diferentes
				string tipoAux = "int";
				int tipoAuxNum = 0;
				if(retornada_esquerda.tipo == 1){
					tipoAux = "float";
					tipoAuxNum = 1;
				} else if (retornada_esquerda.tipo == 2){
					tipoAux = "double";
					tipoAuxNum = 2;
				}

				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append( "int " + tempAux + ";\n");

				string conta = cria_variavel_temporaria("", 0);
				declaracoes.append( "int " + conta + ";\n");

				string verifica_if = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + verifica_if + ";\n");

				string tempNova = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempNova + ";\n");

				(yyval).traducao = (yyvsp[-1]).traducao
							+ "\n\t" + tempAux + " = (int) " + (yyvsp[-1]).variavel_temporaria + ";"
							+ "\n\t" + tempNova + " = " + tempAux + " - 1;"
							+ "\n\t" + conta + " = 1;\n"
							+ "\n\tinicio_for_operacao" + to_string(conta_for_operacao) + ":"
							+ "\n\t" + verifica_if + " = " + tempNova + " != 1;"
							+ "\n\tif ("+ verifica_if +") goto inicio_bloco_for_operacao" + to_string(conta_for_operacao) + ";"
							+ "\n\tgoto final_for_operacao" + to_string(conta_for_operacao) + ";\n"
							+ "\n\tinicio_bloco_for_operacao" + to_string(conta_for_operacao) + ":"
							+ "\n\t" + tempAux + " = " + tempAux + " * " + tempNova + ";"
							+ "\n\t" + tempNova + " = " + tempNova + "- 1;\n"
							+ "\n\t" + conta + " = " + conta + " + 1;"
							+ "\n\tgoto inicio_for_operacao" + to_string(conta_for_operacao) + ";"
							+ "\n\tfinal_for_operacao" + to_string(conta_for_operacao) + ":\n\n";

				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = tipoAuxNum;
				conta_for_operacao++;

			}
#line 3461 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1542 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = "\t" +  tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 0;
			}
#line 3473 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1549 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");
				(yyval).traducao = "\t" +  tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 2;
			}
#line 3485 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1556 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-1]).traducao;
				(yyval).variavel_temporaria = (yyvsp[-1]).variavel_temporaria;
				(yyval).tipo = (yyvsp[-1]).tipo;
			}
#line 3495 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1561 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[-1]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if(retornada.tipo <= 2){
					string tempAux;

					if((yyvsp[-3]).traducao.compare("Int") == 0){
						tempAux = cria_variavel_temporaria("", 0);
						declaracoes.append("int " + tempAux + ";\n");
						(yyval).traducao = "\t" + tempAux + " = (int) " + temp + ";\n";
						(yyval).tipo = 0;
					} else if ((yyvsp[-3]).traducao.compare("Float") == 0) {
						tempAux = cria_variavel_temporaria("", 1);
						declaracoes.append("float " + tempAux + ";\n");
						(yyval).traducao = "\t" + tempAux + " = (float) " + temp + ";\n";
						(yyval).tipo = 1;
					} else {
						tempAux = cria_variavel_temporaria("", 2);
						declaracoes.append("double " + tempAux + ";\n");
						(yyval).traducao = "\t" + tempAux + " = (double) " + temp + ";\n";
						(yyval).tipo = 2;
					}

					(yyval).variavel_temporaria = tempAux;
				}
				else
					yyerror("não é possivel fazer cast ");
			}
#line 3530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1591 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).tipo = (yyvsp[0]).tipo;
			}
#line 3540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1596 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
				(yyval).variavel_temporaria = (yyvsp[0]).variavel_temporaria;
				(yyval).tipo = (yyvsp[0]).tipo;

				if((yyvsp[0]).variavel_temporaria == "")
					yyerror("Não há como receber valor de uma função que não tem retorno!");
			}
#line 3553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1605 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 0);
				declaracoes.append("int " + tempAux + ";\n");
				(yyval).traducao = "\t" +  tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 0;
			}
#line 3565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1612 "sintatica.y" /* yacc.c:1646  */
    {
				string tempAux = cria_variavel_temporaria("", 2);
				declaracoes.append("double " + tempAux + ";\n");
				(yyval).traducao = "\t" +  tempAux + " = " + (yyvsp[0]).traducao + ";\n";
				(yyval).variavel_temporaria = tempAux;
				(yyval).tipo = 2;
			}
#line 3577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1619 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				if((retornada.tipo <= 5) && (retornada.tipo != 3)){
					(yyval).traducao = "";
					(yyval).variavel_temporaria = temp;
					(yyval).tipo = retornada.tipo;
				} else
					yyerror("Atribuição inválida 3 ");
			}
#line 3594 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1631 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-1]).traducao;
				(yyval).variavel_temporaria = (yyvsp[-1]).variavel_temporaria;
			}
#line 3603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1637 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				(yyval).traducao = "";
				(yyval).variavel_temporaria = temp;
				(yyval).tipo = retornada.tipo;
			}
#line 3617 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1648 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[-2]).traducao + " << " + (yyvsp[0]).traducao;
			}
#line 3625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1651 "sintatica.y" /* yacc.c:1646  */
    {
				Variavel retornada  = retorna_variavel_temporaria((yyvsp[0]).traducao);
				string temp = "tmp";
				temp.append(to_string(retornada.id));

				(yyval).traducao = temp;
			}
#line 3637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1658 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = (yyvsp[0]).traducao;
			}
#line 3645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1664 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "Int";
			}
#line 3653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1667 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "Float";
			}
#line 3661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1670 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "Double";
			}
#line 3669 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1674 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "+";
			}
#line 3677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1677 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "-";
			}
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1680 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "*";
			}
#line 3693 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1683 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "/";
			}
#line 3701 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1686 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "%";
			}
#line 3709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1691 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "==";
			}
#line 3717 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1694 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "!=";
			}
#line 3725 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1697 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "<";
			}
#line 3733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1700 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = ">";
			}
#line 3741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1703 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "<=";
			}
#line 3749 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1706 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = ">=";
			}
#line 3757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1711 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "&&";
			}
#line 3765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1714 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "||";
			}
#line 3773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1718 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "^";
			}
#line 3781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1721 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "^";
			}
#line 3789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1726 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "int";
				(yyval).tipo = 0;
				tipo_variavel_esquerda = 0;
			}
#line 3799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1731 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "float";
				(yyval).tipo = 1;
				tipo_variavel_esquerda = 1;
			}
#line 3809 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1736 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "double";
				(yyval).tipo = 2;
				tipo_variavel_esquerda = 2;
			}
#line 3819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1743 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "char";
				(yyval).tipo = 3;
				tipo_variavel_esquerda = 3;
			}
#line 3829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1750 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "bool";
				(yyval).tipo = 4;
				tipo_variavel_esquerda = 4;
			}
#line 3839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1757 "sintatica.y" /* yacc.c:1646  */
    {
				(yyval).traducao = "string";
				(yyval).tipo = 5;
				tipo_variavel_esquerda = 5;
			}
#line 3849 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3853 "y.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 1770 "sintatica.y" /* yacc.c:1906  */


#include "lex.yy.c"

int yyparse();

int main( int argc, char* argv[] ){
	yyparse();

	return 0;
}

void yyerror( string MSG ){
	cout << "\n" << "ERRO NA LINHA LINHA: " << new_line << " -> " << MSG << "\n" << endl;
	exit (0);
}

void yyerror2( string MSG, int line ){
	cout << "\n" << "ERRO NA LINHA LINHA: " << line << " -> " << MSG << "\n" << endl;
	exit (0);
}
