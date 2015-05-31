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
#line 1 "analyser_gram.yacc" /* yacc.c:339  */

#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "instructions.h"
#include "jump_stack.h"
#include "function_stack.h"

int stack_pointer_adress = 1000;
int yyerror(char *s);
int yylex();
int line_number = 1;
int if_to_fill = 0;
// int yywrap();


#line 83 "y.tab.c" /* yacc.c:339  */

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
    tINTEGER = 258,
    tCHAR = 259,
    tVOID = 260,
    tNULL = 261,
    tCONST = 262,
    tMAIN = 263,
    tIF = 264,
    tELSE = 265,
    tWHILE = 266,
    tFOR = 267,
    tAO = 268,
    tAF = 269,
    tCO = 270,
    tCF = 271,
    tPO = 272,
    tPF = 273,
    tSQ = 274,
    tDQ = 275,
    tDIV = 276,
    tPOINTVIRG = 277,
    tARROW = 278,
    tPOINT = 279,
    tPLUS = 280,
    tMINUS = 281,
    tMOD = 282,
    tEXP = 283,
    tSUP = 284,
    tINF = 285,
    tVIRG = 286,
    tEGALEGAL = 287,
    tOR = 288,
    tAND = 289,
    tNOTEGAL = 290,
    tEGAL = 291,
    tADDR = 292,
    tPOINTER = 293,
    tSPACE = 294,
    tNOMBRE = 295,
    tWORD = 296,
    tRETURN = 297,
    tNEWLINE = 298,
    tCOMMENT = 299,
    tMOINS = 300,
    NEG = 301
  };
#endif
/* Tokens.  */
#define tINTEGER 258
#define tCHAR 259
#define tVOID 260
#define tNULL 261
#define tCONST 262
#define tMAIN 263
#define tIF 264
#define tELSE 265
#define tWHILE 266
#define tFOR 267
#define tAO 268
#define tAF 269
#define tCO 270
#define tCF 271
#define tPO 272
#define tPF 273
#define tSQ 274
#define tDQ 275
#define tDIV 276
#define tPOINTVIRG 277
#define tARROW 278
#define tPOINT 279
#define tPLUS 280
#define tMINUS 281
#define tMOD 282
#define tEXP 283
#define tSUP 284
#define tINF 285
#define tVIRG 286
#define tEGALEGAL 287
#define tOR 288
#define tAND 289
#define tNOTEGAL 290
#define tEGAL 291
#define tADDR 292
#define tPOINTER 293
#define tSPACE 294
#define tNOMBRE 295
#define tWORD 296
#define tRETURN 297
#define tNEWLINE 298
#define tCOMMENT 299
#define tMOINS 300
#define NEG 301

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 43 "analyser_gram.yacc" /* yacc.c:355  */

int number;
char * texte;

#line 220 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 237 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   255

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    67,    68,    69,    70,    70,    75,    75,
      80,    80,    85,    85,    90,    91,    94,    94,   100,   101,
     102,   102,   106,   109,   106,   123,   123,   130,   130,   136,
     139,   146,   147,   150,   153,   154,   155,   163,   172,   173,
     174,   175,   176,   177,   184,   202,   205,   218,   225,   232,
     240,   249,   255,   259,   266,   270,   270,   273,   276,   273,
     287,   289,   287,   313,   318,   313,   324,   325,   328,   339,
     339,   344,   345,   346,   346,   349,   353,   354,   354,   358,
     359,   360,   362
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "tINTEGER", "tCHAR", "tVOID", "tNULL",
  "tCONST", "tMAIN", "tIF", "tELSE", "tWHILE", "tFOR", "tAO", "tAF", "tCO",
  "tCF", "tPO", "tPF", "tSQ", "tDQ", "tDIV", "tPOINTVIRG", "tARROW",
  "tPOINT", "tPLUS", "tMINUS", "tMOD", "tEXP", "tSUP", "tINF", "tVIRG",
  "tEGALEGAL", "tOR", "tAND", "tNOTEGAL", "tEGAL", "tADDR", "tPOINTER",
  "tSPACE", "tNOMBRE", "tWORD", "tRETURN", "tNEWLINE", "tCOMMENT",
  "tMOINS", "NEG", "$accept", "Input", "$@1", "$@2", "$@3", "$@4", "Main",
  "$@5", "Arg", "If", "$@6", "$@7", "Else", "$@8", "$@9", "Condition",
  "Exp", "LeftTerm", "Egalite", "Declaration", "DeclarationIntMemeLigne",
  "DeclarationIntEgalMemeLigne", "DeclarationIntTabMemeLigne", "While",
  "$@10", "$@11", "For", "$@12", "$@13", "Function", "$@14", "$@15",
  "Appel_Function", "Arguments_Declaration", "$@16", "$@17", "Arguments",
  "$@18", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF -128

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-128)))

#define YYTABLE_NINF -70

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -128,    68,  -128,    -9,    -5,     2,  -128,    11,    12,     5,
      91,  -128,    -1,    15,  -128,  -128,  -128,    29,    -3,     3,
    -128,  -128,    46,  -128,    49,  -128,    37,    42,    43,  -128,
      41,  -128,    67,    48,    57,    41,    81,  -128,    59,    74,
      92,    99,    80,    41,  -128,   117,   119,    41,  -128,  -128,
      24,    -7,   120,   126,   118,    26,  -128,  -128,     3,  -128,
      41,  -128,   129,   -23,   194,   137,   115,   115,   127,    41,
      41,    41,    41,   140,   111,  -128,   147,   138,  -128,   141,
     145,     3,  -128,   -23,  -128,    41,    41,   166,    87,   135,
      41,    41,   115,   144,   146,   148,   168,   175,   127,    27,
      24,   127,   153,  -128,  -128,   159,   180,   172,  -128,  -128,
     186,    41,   -23,   -23,   196,    41,    24,    41,    24,    24,
      24,   199,   190,   191,   200,   205,   212,  -128,  -128,   218,
    -128,    41,   214,   -23,  -128,    24,    24,   221,   204,   115,
     115,   115,  -128,  -128,    88,   197,    26,  -128,   216,   103,
    -128,   115,  -128,  -128,  -128,   121,   136,  -128,   220,  -128,
     154,   198,  -128,   169,  -128,  -128,  -128,   138,  -128,   206,
     230,   227,  -128,    41,   235,  -128,  -128,     0,   233,     5,
     234,  -128,  -128,  -128,   187,   202,  -128,  -128
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    45,     3,     0,     0,     0,
       0,    15,     0,     0,     5,    14,    50,     0,    52,    82,
      57,     7,     0,     9,     0,    11,     0,     0,     0,    13,
       0,     4,    21,     0,     0,     0,     0,    80,    81,    79,
       0,     0,     0,     0,    63,     0,     0,     0,    43,    44,
      46,     0,     0,     0,    52,    54,    47,    77,    82,    68,
       0,    45,     0,    22,     0,     0,    75,    75,    42,     0,
       0,     0,     0,     0,     0,    18,     0,    56,    51,     0,
       0,    82,    76,    58,    60,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,    39,    38,
      40,    41,     0,    20,    16,     0,     0,     0,    48,    78,
       0,     0,    36,    37,     0,     0,    32,     0,    33,    30,
      31,     0,    73,     0,     0,     0,     0,    19,     2,     0,
      49,     0,     0,    61,     2,    34,    35,     0,     0,    75,
      75,    75,     2,     2,     0,     0,    54,     2,     0,     0,
       2,    75,    74,    72,    71,     0,     0,    17,     0,    53,
       0,     0,    23,     0,    70,    66,    67,    56,    59,     0,
      29,     0,    55,     0,    25,    24,    65,     0,     0,     0,
       0,     2,    28,     2,     0,     0,    26,    62
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -128,  -127,  -128,  -128,  -128,  -128,  -128,  -128,  -128,    69,
    -128,  -128,  -128,  -128,  -128,   -56,   -30,  -128,   207,  -128,
     201,   104,    84,  -128,  -128,  -128,  -128,  -128,  -128,  -128,
    -128,  -128,  -128,   -65,  -128,  -128,   -49,  -128
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,     8,     9,    10,    11,   128,    52,    25,
      87,   170,   175,   178,   179,    63,    64,    12,    13,    14,
      36,    80,   106,    21,    41,   110,    23,   111,   148,    29,
      65,   171,    15,    96,   138,   139,    40,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,   144,    97,    17,    83,    55,    37,   149,    73,    82,
      85,    86,    33,    16,    24,   155,   156,    68,   180,    19,
     160,    69,    20,   163,    22,    70,    71,   121,    34,   112,
     113,    74,   109,    35,    75,    30,    18,    31,    72,    98,
      99,   100,   101,    38,    39,    69,    32,    69,    69,    70,
      71,    70,    71,    71,   184,   133,   185,    79,   116,   118,
     119,   120,    72,    42,    72,    72,    43,    47,     2,     3,
      51,     4,   -12,   -12,   152,   153,   154,   -10,    44,    -6,
      -8,    48,    49,    45,    46,   135,   164,   136,    53,     3,
      57,     4,   -12,   -12,    26,    27,    28,   -10,    54,    -6,
      -8,   146,   157,    56,     3,    58,     4,   -12,   -12,     5,
      59,     6,   -10,    47,    -6,    -8,    60,   162,    93,    94,
      95,    61,     3,   115,     4,   -12,   -12,    48,    49,     5,
     -10,     6,    -6,    -8,    66,   165,    67,     3,    76,     4,
     -12,   -12,    77,   177,     5,   -10,     6,    -6,    -8,    34,
     166,    84,   103,    71,    92,     3,   102,     4,   -12,   -12,
     104,    47,     5,   -10,     6,    -6,    -8,   108,   168,   105,
       3,   117,     4,   -12,   -12,    48,    49,     5,   -10,     6,
      -6,    -8,   107,   -64,   114,   122,   125,   123,     3,   124,
       4,   -12,   -12,   126,   127,     5,   -10,     6,    -6,    -8,
     129,   186,   130,     3,   132,     4,   -12,   -12,   131,   134,
       5,   -10,     6,    -6,    -8,    69,   187,   137,   142,    70,
      71,   -69,   140,    88,    89,   143,    90,   147,     5,    91,
       6,   141,    72,   145,   150,   151,   167,   158,   161,   169,
     174,   176,   173,     5,   -27,     6,   181,   183,   182,    62,
     159,   172,     0,     0,     0,    78
};

static const yytype_int16 yycheck[] =
{
      30,   128,    67,     8,    60,    35,     3,   134,    15,    58,
      33,    34,    15,    22,     9,   142,   143,    47,    18,    17,
     147,    21,    11,   150,    12,    25,    26,    92,    31,    85,
      86,    38,    81,    36,    41,    36,    41,    22,    38,    69,
      70,    71,    72,    40,    41,    21,    17,    21,    21,    25,
      26,    25,    26,    26,   181,   111,   183,    31,    88,    89,
      90,    91,    38,    17,    38,    38,    17,    26,     0,     1,
       3,     3,     4,     5,   139,   140,   141,     9,    41,    11,
      12,    40,    41,    41,    41,   115,   151,   117,    40,     1,
      31,     3,     4,     5,     3,     4,     5,     9,    41,    11,
      12,   131,    14,    22,     1,    31,     3,     4,     5,    41,
      18,    43,     9,    26,    11,    12,    17,    14,     3,     4,
       5,    41,     1,    36,     3,     4,     5,    40,    41,    41,
       9,    43,    11,    12,    17,    14,    17,     1,    18,     3,
       4,     5,    16,   173,    41,     9,    43,    11,    12,    31,
      14,    22,    41,    26,    17,     1,    16,     3,     4,     5,
      13,    26,    41,     9,    43,    11,    12,    22,    14,    31,
       1,    36,     3,     4,     5,    40,    41,    41,     9,    43,
      11,    12,    41,    14,    18,    41,    18,    41,     1,    41,
       3,     4,     5,    18,    41,    41,     9,    43,    11,    12,
      41,    14,    22,     1,    18,     3,     4,     5,    36,    13,
      41,     9,    43,    11,    12,    21,    14,    18,    13,    25,
      26,    31,    31,    29,    30,    13,    32,    13,    41,    35,
      43,    31,    38,    15,    13,    31,    16,    40,    22,    41,
      10,    14,    36,    41,     9,    43,    13,    13,   179,    42,
     146,   167,    -1,    -1,    -1,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     1,     3,    41,    43,    49,    50,    51,
      52,    53,    64,    65,    66,    79,    22,     8,    41,    17,
      11,    70,    12,    73,     9,    56,     3,     4,     5,    76,
      36,    22,    17,    15,    31,    36,    67,     3,    40,    41,
      83,    71,    17,    17,    41,    41,    41,    26,    40,    41,
      63,     3,    55,    40,    41,    63,    22,    31,    31,    18,
      17,    41,    65,    62,    63,    77,    17,    17,    63,    21,
      25,    26,    38,    15,    38,    41,    18,    16,    67,    31,
      68,    84,    83,    62,    22,    33,    34,    57,    29,    30,
      32,    35,    17,     3,     4,     5,    80,    80,    63,    63,
      63,    63,    16,    41,    13,    31,    69,    41,    22,    83,
      72,    74,    62,    62,    18,    36,    63,    36,    63,    63,
      63,    80,    41,    41,    41,    18,    18,    41,    54,    41,
      22,    36,    18,    62,    13,    63,    63,    18,    81,    82,
      31,    31,    13,    13,    48,    15,    63,    13,    75,    48,
      13,    31,    80,    80,    80,    48,    48,    14,    40,    68,
      48,    22,    14,    48,    80,    14,    14,    16,    14,    41,
      58,    78,    69,    36,    10,    59,    14,    63,    60,    61,
      18,    13,    56,    13,    48,    48,    14,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    49,    48,    50,    48,
      51,    48,    52,    48,    48,    48,    54,    53,    55,    55,
      55,    55,    57,    58,    56,    60,    59,    61,    59,    59,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      63,    63,    63,    63,    63,    64,    65,    66,    66,    66,
      66,    67,    67,    68,    68,    69,    69,    71,    72,    70,
      74,    75,    73,    77,    78,    76,    76,    76,    79,    81,
      80,    80,    80,    82,    80,    80,    83,    84,    83,    83,
      83,    83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     0,     3,     0,     3,
       0,     3,     0,     3,     2,     2,     0,     9,     2,     4,
       3,     0,     0,     0,    10,     0,     5,     0,     3,     0,
       3,     3,     3,     3,     4,     4,     3,     3,     3,     3,
       3,     3,     2,     1,     1,     1,     3,     4,     6,     7,
       2,     3,     0,     5,     0,     6,     0,     0,     0,     9,
       0,     0,    15,     0,     0,    10,     8,     8,     4,     0,
       5,     4,     4,     0,     4,     0,     3,     0,     4,     1,
       1,     1,     0
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
        case 3:
#line 67 "analyser_gram.yacc" /* yacc.c:1661  */
    {line_number++;}
#line 1456 "y.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 68 "analyser_gram.yacc" /* yacc.c:1661  */
    {printf("YACC:egalite ok \n");}
#line 1462 "y.tab.c" /* yacc.c:1661  */
    break;

  case 6:
#line 70 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	push_symb_zone();
}
#line 1470 "y.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 72 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	pop_symb_zone();
}
#line 1478 "y.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 75 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	push_symb_zone();
}
#line 1486 "y.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 77 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	pop_symb_zone();
}
#line 1494 "y.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 80 "analyser_gram.yacc" /* yacc.c:1661  */
    {push_symb_zone();}
#line 1500 "y.tab.c" /* yacc.c:1661  */
    break;

  case 11:
#line 80 "analyser_gram.yacc" /* yacc.c:1661  */
    {
ts_display();
pop_symb_zone();
ts_display();
}
#line 1510 "y.tab.c" /* yacc.c:1661  */
    break;

  case 12:
#line 85 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	push_symb_zone();
}
#line 1518 "y.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 87 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	pop_symb_zone();
}
#line 1526 "y.tab.c" /* yacc.c:1661  */
    break;

  case 16:
#line 94 "analyser_gram.yacc" /* yacc.c:1661  */
    {push_symb_zone();}
#line 1532 "y.tab.c" /* yacc.c:1661  */
    break;

  case 17:
#line 94 "analyser_gram.yacc" /* yacc.c:1661  */
    {pop_symb_zone(); printf("YACC:mon main\n");
				print_all_assembler_instructions();
				parse_and_modify_file("toto","tata");
}
#line 1541 "y.tab.c" /* yacc.c:1661  */
    break;

  case 22:
#line 106 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_add_from_where(get_number_of_line());
	stack_push_push_cr();
}
#line 1550 "y.tab.c" /* yacc.c:1661  */
    break;

  case 23:
#line 109 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	//printf("FILLLLLLLLLLLLLLL %d\n",get_number_of_line()+1);
	if_fill_from_to(get_number_of_line()+1);
	if(if_to_fill != 0){
                int i = 0;
                for(i = 0;i<if_to_fill;i++){
                         if_fill_from_to(get_number_of_line()+2);
                }
                if_to_fill = 0;
        }
	stack_push_pop_cr();
}
#line 1567 "y.tab.c" /* yacc.c:1661  */
    break;

  case 25:
#line 123 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_inv_cr();
	stack_push_add_cr(1);
	if_add_from_where(get_number_of_line());
}
#line 1577 "y.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 127 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_fill_from_to(get_number_of_line()+2);
}
#line 1585 "y.tab.c" /* yacc.c:1661  */
    break;

  case 27:
#line 130 "analyser_gram.yacc" /* yacc.c:1661  */
    {
  	stack_push_inv_cr();
        stack_push_add_cr(1);
        if_add_from_where(get_number_of_line());
}
#line 1595 "y.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 134 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_fill_from_to(get_number_of_line()+2);
}
#line 1603 "y.tab.c" /* yacc.c:1661  */
    break;

  case 30:
#line 139 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	int tmp = ts_add_temp();
	(yyval.number) = tmp;
	stack_push_equ_t(tmp,(yyvsp[-2].number),(yyvsp[0].number));
	stack_push_add_cr(tmp);

}
#line 1615 "y.tab.c" /* yacc.c:1661  */
    break;

  case 32:
#line 147 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_sup((yyvsp[-2].number),(yyvsp[0].number),1);
}
#line 1623 "y.tab.c" /* yacc.c:1661  */
    break;

  case 33:
#line 150 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_inf((yyvsp[-2].number),(yyvsp[0].number),1);
}
#line 1631 "y.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 155 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	//int tmp = ts_add_temp();
	//stack_push_add_cr($1);
	//stack_push_add_cr($3);
	//stack_push_sup($3,1,1);
	//stack_push_nop();
	//stack_push_jump_false_cr(get_number_of_line()+3);
}
#line 1644 "y.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 163 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        int tmp = ts_add_temp();
        stack_push_add(tmp,(yyvsp[-2].number),(yyvsp[0].number));
        stack_push_equ(tmp,2,1);
        if_add_from_where(get_number_of_line());
	if_to_fill++;
}
#line 1656 "y.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 172 "analyser_gram.yacc" /* yacc.c:1661  */
    { stack_push_add((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number)); ts_pop_addr((yyvsp[0].number));}
#line 1662 "y.tab.c" /* yacc.c:1661  */
    break;

  case 39:
#line 173 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_div((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1668 "y.tab.c" /* yacc.c:1661  */
    break;

  case 40:
#line 174 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_sub((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1674 "y.tab.c" /* yacc.c:1661  */
    break;

  case 41:
#line 175 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_mul((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1680 "y.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 176 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_mul((yyvsp[0].number),(yyvsp[0].number),-1);}
#line 1686 "y.tab.c" /* yacc.c:1661  */
    break;

  case 43:
#line 177 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				int tmp = ts_add_temp();
				(yyval.number) = tmp;
				stack_push_afc(tmp,(yyvsp[0].number));
				printf("YACC: tNOMBRE saved %d\n\n", tmp);

		}
#line 1698 "y.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 184 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (exist((yyvsp[0].texte)) == -1 ){
					//printf("YACC: tword ALREADY saved\n\n");
					int tmp = ts_add_temp();
                                        (yyval.number) = tmp;
                                        printf("YACC: avant push_cop\n");
                                        stack_push_cop(tmp,get_addr_from((yyvsp[0].texte)));
					//printf("ici YACC: %d\n",get_addr_from($1));
					}
				else {
					yyerror("Bad affectation at ligne ");
                                	return 1;
					//printf("YACC: erreur debut else tWORD\n");
				}
	}
#line 1718 "y.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 202 "analyser_gram.yacc" /* yacc.c:1661  */
    {	printf("YACC: dans LeftTerm\n");}
#line 1724 "y.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 205 "analyser_gram.yacc" /* yacc.c:1661  */
    {	
			if(get_addr_from((yyvsp[-2].texte)) != -1){
				stack_push_cop(get_addr_from((yyvsp[-2].texte)),(yyvsp[0].number));
				ts_pop_addr((yyvsp[0].number));

			}else{
				yyerror("Bad affectation at ligne ");
				return 1;
				printf("YACC: erreur affectation inconnue\n");
			}
}
#line 1740 "y.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 218 "analyser_gram.yacc" /* yacc.c:1661  */
    { 
				if (ts_push((yyvsp[-2].texte),(yyvsp[-3].texte))!=-1){
					printf("YACC:Declaration correcte\n"); 
				}else{
					 yyerror("Variable already exist at ligne ");
                                        return 1;
				}}
#line 1752 "y.tab.c" /* yacc.c:1661  */
    break;

  case 48:
#line 225 "analyser_gram.yacc" /* yacc.c:1661  */
    { 
				if (ts_push((yyvsp[-4].texte),(yyvsp[-5].texte))!=-1)
					printf("YACC: Declaration avant instanciation correcte\n");
				else{
					yyerror("Variable already exist at ligne ");
                                        return 1;
				}}
#line 1764 "y.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 232 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-5].texte),(yyvsp[-6].texte))!=-1)
					printf("YACC: Declaration de tableau avant instanciation correcte\n");
				else {
                                        yyerror("Variable already exist at ligne ");
                                        return 1;
				}
				}
#line 1777 "y.tab.c" /* yacc.c:1661  */
    break;

  case 50:
#line 240 "analyser_gram.yacc" /* yacc.c:1661  */
    {yyerror;
/* | tCHAR tWORD tCO tNOMBRE tCF tPOINTVIRG |
tCHAR tPOINTER tWORD tPOINTVIRG |
tCHAR tWORD DeclarationCharMemeLigne tPOINTVIRG |
tCHAR tWORD tEGAL tNOMBRE tPOINTVIRG |
tCHAR tWORD tEGAL tSQ tWORD tSQ tPOINTVIRG |
tCHAR tWORD tEGAL tCO tNOMBRE tCF tPOINTVIRG*/}
#line 1789 "y.tab.c" /* yacc.c:1661  */
    break;

  case 51:
#line 249 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-1].texte),"int")!=-1) 
					printf("YACC: Declaration ligne correcte\n"); 
				else{
					yyerror("Variable already exist at ligne ");
					return 1;
				}}
#line 1801 "y.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 259 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-3].texte),"int")!=-1)
					stack_push_cop(get_addr_from((yyvsp[-3].texte)),(yyvsp[-1].number)) ;
				else{
					yyerror("Variable already exist at ligne ");
					return 1;
					//printf("YACC: La variable existe déjà\n");
				}}
#line 1814 "y.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 273 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	while_add_from_to(get_number_of_line());
	}
#line 1822 "y.tab.c" /* yacc.c:1661  */
    break;

  case 58:
#line 276 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_add_from_where(get_number_of_line());
	stack_push_push_cr();
}
#line 1831 "y.tab.c" /* yacc.c:1661  */
    break;

  case 59:
#line 279 "analyser_gram.yacc" /* yacc.c:1661  */
    {
		stack_push_pop_cr();
		stack_push_nop();
	while_fill_from_where(get_number_of_line());
	if_fill_from_to(get_number_of_line()+1);
}
#line 1842 "y.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 287 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	while_add_from_to(get_number_of_line());
}
#line 1850 "y.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 289 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        if_add_from_where(get_number_of_line());
        stack_push_push_cr();
}
#line 1859 "y.tab.c" /* yacc.c:1661  */
    break;

  case 62:
#line 292 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        printf("hum1 %s\n",(yyvsp[-6].texte));
        printf("hum2 %d\n",(yyvsp[-4].number));

         if(get_addr_from((yyvsp[-6].texte)) != -1){
                     stack_push_cop(get_addr_from((yyvsp[-6].texte)),(yyvsp[-4].number));
                     ts_pop_addr((yyvsp[-4].number));
         }else{
                     yyerror("Bad affectation at ligne ");
                     return 1;
                     printf("YACC: erreur affectation inconnue\n");
         }

	stack_push_pop_cr();
        stack_push_nop();
        
	while_fill_from_where(get_number_of_line());
        if_fill_from_to(get_number_of_line()+1);
}
#line 1883 "y.tab.c" /* yacc.c:1661  */
    break;

  case 63:
#line 313 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	printf("add_function %s \n",(yyvsp[0].texte));
	add_function((yyvsp[0].texte),get_number_of_line());
	printf("end add_function \n");
}
#line 1893 "y.tab.c" /* yacc.c:1661  */
    break;

  case 64:
#line 318 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_pop_sp();
	stack_push_jump_return();
}
#line 1902 "y.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 321 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	raz_empty_register();
}
#line 1910 "y.tab.c" /* yacc.c:1661  */
    break;

  case 68:
#line 328 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	printf("if try %d %s \n",function_exist((yyvsp[-3].texte)),(yyvsp[-3].texte));
	if(function_exist((yyvsp[-3].texte)) == 1){
		add_stack_value(get_number_of_line()+3);
		stack_push_afc(stack_pointer_adress,get_number_of_line()+4);
		stack_push_push_sp();
		stack_push_jump(get_addr_function((yyvsp[-3].texte)));
	}
}
#line 1924 "y.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 339 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        ts_push((yyvsp[0].texte),(yyvsp[-1].texte));
        stack_push_afc_from_register(get_addr_from((yyvsp[0].texte)),get_first_register());
}
#line 1933 "y.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 346 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	ts_push((yyvsp[0].texte),(yyvsp[-1].texte));
	stack_push_afc_from_register(get_addr_from((yyvsp[0].texte)),get_first_register());
}
#line 1942 "y.tab.c" /* yacc.c:1661  */
    break;

  case 77:
#line 354 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_afc_register(get_empty_register(),(yyvsp[-1].number));
}
#line 1950 "y.tab.c" /* yacc.c:1661  */
    break;

  case 81:
#line 360 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_afc_register(get_empty_register(),(yyvsp[0].number));
}
#line 1958 "y.tab.c" /* yacc.c:1661  */
    break;


#line 1962 "y.tab.c" /* yacc.c:1661  */
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
#line 364 "analyser_gram.yacc" /* yacc.c:1906  */



int yyerror(char *s){
printf("%s %d\n",s,line_number);
return 1;
}

//int yywrap() {
//	return 1;
//}

int main(void){
yyparse();
return 1;
}
