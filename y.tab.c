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
// int yywrap();


#line 82 "y.tab.c" /* yacc.c:339  */

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
#line 41 "analyser_gram.yacc" /* yacc.c:355  */

int number;
char * texte;

#line 219 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 236 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  74
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

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
       0,    63,    63,    65,    66,    67,    68,    69,    69,    69,
      70,    71,    72,    75,    75,    81,    82,    83,    83,    87,
      91,    87,    96,    96,   103,   103,   106,   111,   112,   115,
     118,   119,   120,   129,   137,   138,   139,   140,   141,   142,
     148,   164,   167,   174,   180,   185,   190,   199,   204,   208,
     213,   217,   217,   220,   220,   229,   234,   229,   240,   241,
     244,   255,   255,   260,   261,   262,   262,   265,   269,   270,
     270,   274,   275,   276,   278
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
  "tMOINS", "NEG", "$accept", "Input", "$@1", "$@2", "Main", "$@3", "Arg",
  "If", "$@4", "$@5", "Else", "$@6", "Condition", "Exp", "LeftTerm",
  "Egalite", "Declaration", "DeclarationIntMemeLigne",
  "DeclarationIntEgalMemeLigne", "DeclarationIntTabMemeLigne", "While",
  "$@7", "Function", "$@8", "$@9", "Appel_Function",
  "Arguments_Declaration", "$@10", "$@11", "Arguments", "$@12", YY_NULLPTR
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

#define YYPACT_NINF -110

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-110)))

#define YYTABLE_NINF -62

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -110,    24,  -110,    -1,     4,   -26,   -19,  -110,    49,  -110,
      60,  -110,    41,    57,  -110,  -110,  -110,  -110,  -110,    63,
      68,    70,    71,    85,    15,    88,  -110,    56,  -110,   103,
      74,    66,    56,    93,    99,    55,    55,    56,  -110,    87,
      95,   102,    56,  -110,    56,  -110,  -110,   -12,    -7,   109,
     112,   107,   119,  -110,    55,    98,   101,   106,   130,   135,
       5,   153,  -110,    15,  -110,   -23,   133,    56,    56,    56,
      56,   142,   123,  -110,   154,   137,  -110,   128,   148,   159,
     141,   156,   158,   171,   177,   180,    56,    56,   140,   160,
      56,    56,    15,  -110,   179,   133,    11,   -12,   133,   157,
    -110,  -110,   161,   149,   163,  -110,   182,   172,    55,    55,
      55,  -110,  -110,  -110,   -23,   -23,    56,   -12,    56,   -12,
     -12,   -12,  -110,   191,  -110,  -110,   190,  -110,    56,  -110,
      55,  -110,  -110,  -110,    43,    67,    89,   -12,   -12,  -110,
     108,   166,   119,   120,  -110,  -110,  -110,  -110,   132,  -110,
     192,  -110,   193,  -110,   137,  -110,   199,  -110,    60,  -110,
    -110,   197,  -110,   151,  -110
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,     0,     0,    53,    41,     3,
       0,    12,     0,     0,     5,     6,    10,    11,    46,     0,
      48,     0,     0,     0,    74,     0,     8,     0,     4,    18,
       0,     0,     0,     0,     0,    67,    67,     0,    72,    73,
      71,     0,     0,     9,     0,    39,    40,    42,     0,     0,
       0,    48,    50,    43,    67,     0,     0,     0,     0,     0,
       0,     0,    69,    74,    60,    19,    38,     0,     0,     0,
       0,     0,     0,    15,     0,    52,    47,     0,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,    68,     0,    35,    34,    36,    37,     0,
      17,    13,     0,     0,     0,    44,     0,     0,    67,    67,
      67,     2,     2,     2,    32,    33,     0,    28,     0,    29,
      26,    27,    70,     0,    16,     2,     0,    45,     0,     2,
      67,    66,    64,    63,     0,     0,     0,    30,    31,     2,
       0,     0,    50,     0,    62,    58,    59,    54,     0,    14,
       0,    49,     0,    20,    52,    57,    25,    51,    22,    21,
      24,     0,     2,     0,    23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -110,  -109,  -110,  -110,  -110,  -110,  -110,    53,  -110,  -110,
    -110,  -110,   -36,   -27,  -110,  -110,  -110,   162,    72,    58,
    -110,  -110,  -110,  -110,  -110,  -110,   -35,  -110,  -110,   -56,
    -110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    10,    43,    11,   125,    49,    26,    94,   156,
     159,   161,    60,    61,    12,    13,    14,    33,    78,   103,
      15,    23,    16,    34,   152,    17,    58,   107,   108,    41,
      92
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    59,   134,   135,   136,    52,    65,    93,    71,    67,
      86,    87,    19,    68,    69,    21,   140,    66,    38,    79,
     143,    18,    22,    85,     2,     3,    70,     4,     5,     6,
     148,    72,    67,    -7,    73,     7,   122,    69,    86,    87,
      95,    96,    97,    98,     3,    20,     4,     5,     6,    70,
     114,   115,    -7,   163,     7,    39,    40,   145,    55,    56,
      57,   117,   119,   120,   121,     8,    24,     9,     3,    25,
       4,     5,     6,   131,   132,   133,    -7,    27,     7,    28,
      29,   146,    44,    30,     8,   -55,     9,    35,    36,   137,
       3,   138,     4,     5,     6,   144,    45,    46,    -7,    31,
       7,   142,    37,   147,    32,    42,    48,    51,     8,     3,
       9,     4,     5,     6,    50,    53,    54,    -7,    62,     7,
      64,     3,   149,     4,     5,     6,    63,    74,    75,    -7,
       8,     7,     9,     3,   -56,     4,     5,     6,    31,    80,
      67,    -7,    81,     7,    68,    69,   153,    82,    83,     8,
      77,     9,     3,    84,     4,     5,     6,    70,    99,    69,
      -7,     8,     7,     9,   100,   164,    44,   101,   102,   104,
     105,   127,   -61,     8,    67,     9,   116,   106,    68,    69,
      45,    46,    88,    89,   111,    90,    44,   109,    91,   110,
     112,    70,     8,   113,     9,   129,   118,   123,   124,   128,
      45,    46,   126,   130,   139,   141,   150,   155,   154,   158,
     162,   160,   157,    76,   151
};

static const yytype_uint8 yycheck[] =
{
      27,    36,   111,   112,   113,    32,    42,    63,    15,    21,
      33,    34,     8,    25,    26,    41,   125,    44,     3,    54,
     129,    22,    41,    18,     0,     1,    38,     3,     4,     5,
     139,    38,    21,     9,    41,    11,    92,    26,    33,    34,
      67,    68,    69,    70,     1,    41,     3,     4,     5,    38,
      86,    87,     9,   162,    11,    40,    41,    14,     3,     4,
       5,    88,    89,    90,    91,    41,    17,    43,     1,     9,
       3,     4,     5,   108,   109,   110,     9,    36,    11,    22,
      17,    14,    26,    15,    41,    17,    43,    17,    17,   116,
       1,   118,     3,     4,     5,   130,    40,    41,     9,    31,
      11,   128,    17,    14,    36,    17,     3,    41,    41,     1,
      43,     3,     4,     5,    40,    22,    17,     9,    31,    11,
      18,     1,    14,     3,     4,     5,    31,    18,    16,     9,
      41,    11,    43,     1,    14,     3,     4,     5,    31,    41,
      21,     9,    41,    11,    25,    26,    14,    41,    18,    41,
      31,    43,     1,    18,     3,     4,     5,    38,    16,    26,
       9,    41,    11,    43,    41,    14,    26,    13,    31,    41,
      22,    22,    31,    41,    21,    43,    36,    18,    25,    26,
      40,    41,    29,    30,    13,    32,    26,    31,    35,    31,
      13,    38,    41,    13,    43,    13,    36,    18,    41,    36,
      40,    41,    41,    31,    13,    15,    40,    14,    16,    10,
      13,   158,   154,    51,   142
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     1,     3,     4,     5,    11,    41,    43,
      49,    51,    61,    62,    63,    67,    69,    72,    22,     8,
      41,    41,    41,    68,    17,     9,    54,    36,    22,    17,
      15,    31,    36,    64,    70,    17,    17,    17,     3,    40,
      41,    76,    17,    50,    26,    40,    41,    60,     3,    53,
      40,    41,    60,    22,    17,     3,     4,     5,    73,    73,
      59,    60,    31,    31,    18,    59,    60,    21,    25,    26,
      38,    15,    38,    41,    18,    16,    64,    31,    65,    73,
      41,    41,    41,    18,    18,    18,    33,    34,    29,    30,
      32,    35,    77,    76,    55,    60,    60,    60,    60,    16,
      41,    13,    31,    66,    41,    22,    18,    74,    75,    31,
      31,    13,    13,    13,    59,    59,    36,    60,    36,    60,
      60,    60,    76,    18,    41,    52,    41,    22,    36,    13,
      31,    73,    73,    73,    48,    48,    48,    60,    60,    13,
      48,    15,    60,    48,    73,    14,    14,    14,    48,    14,
      40,    65,    71,    14,    16,    14,    56,    66,    10,    57,
      54,    58,    13,    48,    14
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    49,    50,    48,
      48,    48,    48,    52,    51,    53,    53,    53,    53,    55,
      56,    54,    58,    57,    57,    57,    59,    59,    59,    59,
      59,    59,    59,    59,    60,    60,    60,    60,    60,    60,
      60,    61,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    68,    67,    70,    71,    69,    69,    69,
      72,    74,    73,    73,    73,    75,    73,    73,    76,    77,
      76,    76,    76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     2,     0,     0,     4,
       2,     2,     2,     0,     9,     2,     4,     3,     0,     0,
       0,    10,     0,     5,     2,     0,     3,     3,     3,     3,
       4,     4,     3,     3,     3,     3,     3,     3,     2,     1,
       1,     1,     3,     4,     6,     7,     2,     3,     0,     5,
       0,     6,     0,     0,     8,     0,     0,    10,     8,     8,
       4,     0,     5,     4,     4,     0,     4,     0,     3,     0,
       4,     1,     1,     1,     0
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
#line 65 "analyser_gram.yacc" /* yacc.c:1661  */
    {line_number++;}
#line 1437 "y.tab.c" /* yacc.c:1661  */
    break;

  case 4:
#line 66 "analyser_gram.yacc" /* yacc.c:1661  */
    {printf("YACC:egalite ok \n");}
#line 1443 "y.tab.c" /* yacc.c:1661  */
    break;

  case 7:
#line 69 "analyser_gram.yacc" /* yacc.c:1661  */
    {/*push_symb_zone();*/}
#line 1449 "y.tab.c" /* yacc.c:1661  */
    break;

  case 8:
#line 69 "analyser_gram.yacc" /* yacc.c:1661  */
    {/*pop_symb_zone();*/}
#line 1455 "y.tab.c" /* yacc.c:1661  */
    break;

  case 9:
#line 69 "analyser_gram.yacc" /* yacc.c:1661  */
    {printf("YACC:condition ok \n");}
#line 1461 "y.tab.c" /* yacc.c:1661  */
    break;

  case 10:
#line 70 "analyser_gram.yacc" /* yacc.c:1661  */
    {printf("FIN FUNCTION \n");}
#line 1467 "y.tab.c" /* yacc.c:1661  */
    break;

  case 13:
#line 75 "analyser_gram.yacc" /* yacc.c:1661  */
    {push_symb_zone();}
#line 1473 "y.tab.c" /* yacc.c:1661  */
    break;

  case 14:
#line 75 "analyser_gram.yacc" /* yacc.c:1661  */
    {pop_symb_zone(); printf("YACC:mon main\n");
				print_all_assembler_instructions();
				parse_and_modify_file("toto","tata");
}
#line 1482 "y.tab.c" /* yacc.c:1661  */
    break;

  case 19:
#line 87 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_nop();
	stack_push_nop();
	if_add_from_where(get_number_of_line());
}
#line 1492 "y.tab.c" /* yacc.c:1661  */
    break;

  case 20:
#line 91 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_fill_from_to(get_number_of_line()+1);
}
#line 1500 "y.tab.c" /* yacc.c:1661  */
    break;

  case 22:
#line 96 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_inv_cr();
	stack_push_add_cr(1);
	if_add_from_where(get_number_of_line());
}
#line 1510 "y.tab.c" /* yacc.c:1661  */
    break;

  case 23:
#line 100 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	if_fill_from_to(get_number_of_line()+2);
}
#line 1518 "y.tab.c" /* yacc.c:1661  */
    break;

  case 26:
#line 106 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	int tmp = ts_add_temp();
	(yyval.number) = tmp;
	stack_push_equ(tmp,(yyvsp[-2].number),(yyvsp[0].number));
}
#line 1528 "y.tab.c" /* yacc.c:1661  */
    break;

  case 28:
#line 112 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_sup((yyvsp[-2].number),(yyvsp[0].number),1);
}
#line 1536 "y.tab.c" /* yacc.c:1661  */
    break;

  case 29:
#line 115 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_inf((yyvsp[-2].number),(yyvsp[0].number),1);
}
#line 1544 "y.tab.c" /* yacc.c:1661  */
    break;

  case 32:
#line 120 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	int tmp = ts_add_temp();
	//stack_push_add_cr($1);
	//stack_push_add_cr($3);
	stack_push_add_cr((yyvsp[0].number));
	//stack_push_sup($3,1,1);
	stack_push_nop();
	//stack_push_jump_false_cr(get_number_of_line()+3);
}
#line 1558 "y.tab.c" /* yacc.c:1661  */
    break;

  case 33:
#line 129 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        int tmp = ts_add_temp();
        stack_push_add(tmp,(yyvsp[-2].number),(yyvsp[0].number));
        stack_push_equ(tmp,2,1);
        stack_push_jump_false_cr(get_number_of_line()+3);
}
#line 1569 "y.tab.c" /* yacc.c:1661  */
    break;

  case 34:
#line 137 "analyser_gram.yacc" /* yacc.c:1661  */
    { stack_push_add((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number)); ts_pop_addr((yyvsp[0].number));}
#line 1575 "y.tab.c" /* yacc.c:1661  */
    break;

  case 35:
#line 138 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_div((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1581 "y.tab.c" /* yacc.c:1661  */
    break;

  case 36:
#line 139 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_sub((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1587 "y.tab.c" /* yacc.c:1661  */
    break;

  case 37:
#line 140 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_mul((yyvsp[-2].number),(yyvsp[-2].number),(yyvsp[0].number));ts_pop_addr((yyvsp[0].number));}
#line 1593 "y.tab.c" /* yacc.c:1661  */
    break;

  case 38:
#line 141 "analyser_gram.yacc" /* yacc.c:1661  */
    {stack_push_mul((yyvsp[0].number),(yyvsp[0].number),-1);}
#line 1599 "y.tab.c" /* yacc.c:1661  */
    break;

  case 39:
#line 142 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				int tmp = ts_add_temp();
				(yyval.number) = tmp;
				stack_push_afc(tmp,(yyvsp[0].number));
				printf("YACC: tNOMBRE saved %d\n\n", tmp);
		}
#line 1610 "y.tab.c" /* yacc.c:1661  */
    break;

  case 40:
#line 148 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (exist((yyvsp[0].texte)) == -1 ){
					printf("YACC: tword ALREADY saved\n\n");
					int tmp = ts_add_temp();
                                        (yyval.number) = tmp;
                                        printf("YACC: avant push_cop\n");
                                        stack_push_cop(tmp,get_addr_from((yyvsp[0].texte)));
					printf("ici YACC: %d\n",get_addr_from((yyvsp[0].texte)));
					}
				else {
					printf("YACC: erreur debut else tWORD\n");
				}
	}
#line 1628 "y.tab.c" /* yacc.c:1661  */
    break;

  case 41:
#line 164 "analyser_gram.yacc" /* yacc.c:1661  */
    {	printf("YACC: dans LeftTerm\n");}
#line 1634 "y.tab.c" /* yacc.c:1661  */
    break;

  case 42:
#line 167 "analyser_gram.yacc" /* yacc.c:1661  */
    {	stack_push_cop(get_addr_from((yyvsp[-2].texte)),(yyvsp[0].number));
			//printf("YACC: ici dollar 1 vaut %d et son addresse %d et dollar 3 vaut %d\n\n", $1,get_addr_from($1),$3);
			//ts_display();
			ts_pop_addr((yyvsp[0].number));
			}
#line 1644 "y.tab.c" /* yacc.c:1661  */
    break;

  case 43:
#line 174 "analyser_gram.yacc" /* yacc.c:1661  */
    { 
				if (ts_push((yyvsp[-2].texte),(yyvsp[-3].texte))!=-1)
					printf("YACC:Declaration correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				}
#line 1655 "y.tab.c" /* yacc.c:1661  */
    break;

  case 44:
#line 180 "analyser_gram.yacc" /* yacc.c:1661  */
    { 
				if (ts_push((yyvsp[-4].texte),(yyvsp[-5].texte))!=-1)
					printf("YACC: Declaration avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				}
#line 1665 "y.tab.c" /* yacc.c:1661  */
    break;

  case 45:
#line 185 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-5].texte),(yyvsp[-6].texte))!=-1)
					printf("YACC: Declaration de tableau avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				}
#line 1675 "y.tab.c" /* yacc.c:1661  */
    break;

  case 46:
#line 190 "analyser_gram.yacc" /* yacc.c:1661  */
    {yyerror;
/* | tCHAR tWORD tCO tNOMBRE tCF tPOINTVIRG |
tCHAR tPOINTER tWORD tPOINTVIRG |
tCHAR tWORD DeclarationCharMemeLigne tPOINTVIRG |
tCHAR tWORD tEGAL tNOMBRE tPOINTVIRG |
tCHAR tWORD tEGAL tSQ tWORD tSQ tPOINTVIRG |
tCHAR tWORD tEGAL tCO tNOMBRE tCF tPOINTVIRG*/}
#line 1687 "y.tab.c" /* yacc.c:1661  */
    break;

  case 47:
#line 199 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-1].texte),"int")!=-1) 
					printf("YACC: Declaration ligne correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				}
#line 1698 "y.tab.c" /* yacc.c:1661  */
    break;

  case 49:
#line 208 "analyser_gram.yacc" /* yacc.c:1661  */
    {
				if (ts_push((yyvsp[-3].texte),"int")!=-1)
					stack_push_cop(get_addr_from((yyvsp[-3].texte)),(yyvsp[-1].number)) ;
				else
					printf("YACC: La variable existe déjà\n");
				}
#line 1709 "y.tab.c" /* yacc.c:1661  */
    break;

  case 53:
#line 220 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	while_add_from_to(get_number_of_line());
	}
#line 1717 "y.tab.c" /* yacc.c:1661  */
    break;

  case 54:
#line 223 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	while_fill_from_where(get_number_of_line());
	}
#line 1725 "y.tab.c" /* yacc.c:1661  */
    break;

  case 55:
#line 229 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	printf("add_function %s \n",(yyvsp[0].texte));
	add_function((yyvsp[0].texte),get_number_of_line());
	printf("end add_function \n");
}
#line 1735 "y.tab.c" /* yacc.c:1661  */
    break;

  case 56:
#line 234 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_pop_sp();
	stack_push_jump_return();
}
#line 1744 "y.tab.c" /* yacc.c:1661  */
    break;

  case 57:
#line 237 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	raz_empty_register();
}
#line 1752 "y.tab.c" /* yacc.c:1661  */
    break;

  case 60:
#line 244 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	printf("if try %d %s \n",function_exist((yyvsp[-3].texte)),(yyvsp[-3].texte));
	if(function_exist((yyvsp[-3].texte)) == 1){
		add_stack_value(get_number_of_line()+3);
		stack_push_afc(stack_pointer_adress,get_number_of_line()+4);
		stack_push_push_sp();
		stack_push_jump(get_addr_function((yyvsp[-3].texte)));
	}
}
#line 1766 "y.tab.c" /* yacc.c:1661  */
    break;

  case 61:
#line 255 "analyser_gram.yacc" /* yacc.c:1661  */
    {
        ts_push((yyvsp[0].texte),(yyvsp[-1].texte));
        stack_push_afc_from_register(get_addr_from((yyvsp[0].texte)),get_first_register());
}
#line 1775 "y.tab.c" /* yacc.c:1661  */
    break;

  case 65:
#line 262 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	ts_push((yyvsp[0].texte),(yyvsp[-1].texte));
	stack_push_afc_from_register(get_addr_from((yyvsp[0].texte)),get_first_register());
}
#line 1784 "y.tab.c" /* yacc.c:1661  */
    break;

  case 69:
#line 270 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_afc_register(get_empty_register(),(yyvsp[-1].number));
}
#line 1792 "y.tab.c" /* yacc.c:1661  */
    break;

  case 73:
#line 276 "analyser_gram.yacc" /* yacc.c:1661  */
    {
	stack_push_afc_register(get_empty_register(),(yyvsp[0].number));
}
#line 1800 "y.tab.c" /* yacc.c:1661  */
    break;


#line 1804 "y.tab.c" /* yacc.c:1661  */
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
#line 280 "analyser_gram.yacc" /* yacc.c:1906  */



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
