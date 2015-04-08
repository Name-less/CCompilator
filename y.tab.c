/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "analyser_gram.yacc"

#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "instructions.h"
#include "jump_stack.h"
#include "function_stack.h"

int yyerror(char *s);
int yylex();
int line_number;
// int yywrap();



/* Line 268 of yacc.c  */
#line 87 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 39 "analyser_gram.yacc"

int number;
char * texte;



/* Line 293 of yacc.c  */
#line 222 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 234 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   216

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    14,    17,    18,    19,
      24,    25,    29,    32,    35,    36,    46,    49,    54,    58,
      59,    60,    61,    72,    73,    79,    82,    83,    87,    91,
      95,    99,   104,   109,   113,   117,   121,   125,   129,   133,
     136,   138,   140,   142,   146,   151,   158,   166,   169,   173,
     174,   180,   181,   188,   189,   190,   199,   200,   210,   211,
     221,   222,   232,   233,   239,   244,   249,   254,   255,   258,
     261,   263,   265
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    -1,    48,    43,    -1,    48,    63,    22,
      -1,    48,    64,    -1,    48,    68,    -1,    -1,    -1,    48,
      49,    55,    50,    -1,    -1,    48,    51,    70,    -1,    48,
      74,    -1,    48,    52,    -1,    -1,     3,     8,    17,    54,
      18,    13,    53,    48,    14,    -1,     3,    41,    -1,     3,
      15,    16,    41,    -1,     3,    38,    41,    -1,    -1,    -1,
      -1,     9,    56,    17,    60,    18,    13,    48,    14,    57,
      58,    -1,    -1,    10,    59,    13,    48,    14,    -1,    10,
      55,    -1,    -1,    61,    32,    61,    -1,    61,    35,    61,
      -1,    61,    29,    61,    -1,    61,    30,    61,    -1,    61,
      29,    36,    61,    -1,    61,    30,    36,    61,    -1,    60,
      33,    60,    -1,    60,    34,    60,    -1,    61,    25,    61,
      -1,    61,    21,    61,    -1,    61,    26,    61,    -1,    61,
      38,    61,    -1,    26,    61,    -1,    40,    -1,    41,    -1,
      41,    -1,    62,    36,    61,    -1,     3,    41,    65,    22,
      -1,     3,    41,    36,    61,    66,    22,    -1,     3,    41,
      15,    40,    16,    67,    22,    -1,     1,    22,    -1,    31,
      41,    65,    -1,    -1,    31,    41,    36,    61,    66,    -1,
      -1,    31,    41,    15,    40,    16,    67,    -1,    -1,    -1,
      11,    69,    17,    60,    18,    13,    48,    14,    -1,    -1,
       3,    41,    71,    17,    76,    18,    13,    48,    14,    -1,
      -1,     4,    41,    72,    17,    76,    18,    13,    48,    14,
      -1,    -1,     5,    41,    73,    17,    76,    18,    13,    48,
      14,    -1,    -1,    41,    75,    17,    77,    18,    -1,     3,
      41,    31,    76,    -1,     5,    41,    31,    76,    -1,     4,
      41,    31,    76,    -1,    -1,    41,    31,    -1,     3,    31,
      -1,    41,    -1,     3,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    61,    61,    63,    64,    65,    66,    67,    67,    67,
      68,    68,    69,    70,    73,    73,    77,    78,    79,    79,
      83,    83,    83,    86,    86,    87,    87,    90,    91,    92,
      93,    94,    95,    96,    97,   100,   101,   102,   103,   104,
     105,   111,   127,   130,   137,   143,   148,   153,   162,   167,
     171,   176,   180,   180,   183,   183,   192,   192,   195,   195,
     198,   198,   203,   203,   208,   209,   210,   210,   213,   214,
     215,   216,   216
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "tMOINS", "NEG", "$accept", "Input", "$@1", "$@2", "$@3", "Main", "$@4",
  "Arg", "If", "$@5", "$@6", "Else", "$@7", "Condition", "Exp", "LeftTerm",
  "Egalite", "Declaration", "DeclarationIntMemeLigne",
  "DeclarationIntEgalMemeLigne", "DeclarationIntTabMemeLigne", "While",
  "$@8", "Function", "$@9", "$@10", "$@11", "Appel_Function", "$@12",
  "Arguments_Declaration", "Arguments", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    48,    48,    48,    48,    49,    50,    48,
      51,    48,    48,    48,    53,    52,    54,    54,    54,    54,
      56,    57,    55,    59,    58,    58,    58,    60,    60,    60,
      60,    60,    60,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    62,    63,    64,    64,    64,    64,    65,    65,
      66,    66,    67,    67,    69,    68,    71,    70,    72,    70,
      73,    70,    75,    74,    76,    76,    76,    76,    77,    77,
      77,    77,    77
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     2,     0,     0,     4,
       0,     3,     2,     2,     0,     9,     2,     4,     3,     0,
       0,     0,    10,     0,     5,     2,     0,     3,     3,     3,
       3,     4,     4,     3,     3,     3,     3,     3,     3,     2,
       1,     1,     1,     3,     4,     6,     7,     2,     3,     0,
       5,     0,     6,     0,     0,     8,     0,     9,     0,     9,
       0,     9,     0,     5,     4,     4,     4,     0,     2,     2,
       1,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     0,     0,    54,    42,     3,     0,     0,
      13,     0,     0,     5,     6,    12,    47,     0,    49,     0,
       0,    20,     8,     0,     0,     0,    11,     0,     4,    19,
       0,     0,     0,     0,     0,    72,     0,     9,    56,    58,
      60,     0,    40,    41,    43,     0,     0,     0,    49,    51,
      44,     0,     0,    71,    70,     0,     0,     0,     0,     0,
      39,     0,     0,     0,     0,     0,     0,    16,     0,    53,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    68,    63,     0,    67,    67,    67,    36,    35,    37,
      38,     0,    18,    14,     0,     0,     0,    45,     2,    33,
      34,     0,    29,     0,    30,    27,    28,     0,     0,     0,
       0,     0,     0,     0,    17,     2,     0,    46,     0,     0,
      31,    32,     2,     0,     0,     0,     0,     0,     0,     0,
       0,    51,    55,     0,    67,    67,    67,     2,     2,     2,
      15,     0,    50,    21,    64,    66,    65,     0,     0,     0,
      53,    26,    57,    59,    61,    52,    23,    22,    25,     0,
       2,     0,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     8,    37,     9,    10,   115,    46,    22,    36,
     151,   157,   159,    51,    52,    11,    12,    13,    33,    72,
      95,    14,    19,    26,    57,    58,    59,    15,    20,   111,
      55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -98
static const yytype_int16 yypact[] =
{
     -98,    19,   -98,    -9,     2,   -98,    -2,   -98,    22,   110,
     -98,     3,    16,   -98,   -98,   -98,   -98,    28,    -4,    44,
      47,   -98,   -98,    25,    29,    41,   -98,     7,   -98,    81,
      46,    51,     7,    72,     7,     5,    83,   -98,   -98,   -98,
     -98,     7,   -98,   -98,   104,   -12,    84,    88,    78,   158,
     -98,    65,   142,    89,    91,   105,     7,   114,   124,   128,
     121,     7,     7,     7,     7,   137,   116,   -98,   138,   130,
     -98,   129,   147,   160,     7,     7,   -24,    18,     7,     7,
     -98,   -98,   -98,   125,   182,   182,   182,   121,   -17,   104,
     121,   134,   -98,   -98,   140,   166,   146,   -98,   -98,    55,
      55,     7,   104,     7,   104,   104,   104,   177,   150,   152,
     154,   179,   180,   181,   -98,   -98,   185,   -98,     7,    64,
     104,   104,   -98,   170,   171,   172,   191,   192,   193,    76,
     167,   158,   -98,    92,   182,   182,   182,   -98,   -98,   -98,
     -98,   194,   -98,   -98,   -98,   -98,   -98,   107,   123,   135,
     130,   198,   -98,   -98,   -98,   -98,    22,   -98,   -98,   196,
     -98,   151,   -98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -98,   -97,   -98,   -98,   -98,   -98,   -98,   -98,    56,   -98,
     -98,   -98,   -98,    -3,   -27,   -98,   -98,   -98,   163,    82,
      66,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -98,   -79,
     -98
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -63
static const yytype_int16 yytable[] =
{
      44,   119,    41,    65,    61,    49,   112,   113,    53,    63,
      17,    30,   101,    16,    60,   -62,    42,    43,   129,     2,
       3,    64,     4,   -10,   -10,   133,    66,    31,    -7,    67,
       5,    21,    32,    41,    87,    88,    89,    90,    28,    27,
     147,   148,   149,    18,    41,    29,    54,    42,    43,   102,
     104,   105,   106,    83,   103,   144,   145,   146,    42,    43,
       6,    34,     7,   161,    35,     3,    38,     4,   -10,   -10,
      39,    99,   100,    -7,   120,     5,   121,     3,   132,     4,
     -10,   -10,    40,    73,    45,    -7,    47,     5,    74,    75,
     140,   131,    48,     3,    50,     4,   -10,   -10,    74,    75,
      56,    -7,    68,     5,    69,     6,   143,     7,     3,    31,
       4,   -10,   -10,    23,    24,    25,    -7,     6,     5,     7,
      80,   152,    81,    82,     3,    61,     4,   -10,   -10,    62,
      63,    84,    -7,     6,     5,     7,     3,   153,     4,   -10,
     -10,    85,    64,   107,    -7,    86,     5,    63,     6,   154,
       7,    93,     3,    91,     4,   -10,   -10,    92,    74,    75,
      -7,    94,     5,    61,     6,   162,     7,    62,    63,    97,
      96,    76,    77,    98,    78,   114,     6,    79,     7,    61,
      64,   116,   118,    62,    63,   108,   109,   110,   117,    71,
     122,   123,     6,   124,     7,   125,    64,   126,   127,   128,
     130,   134,   135,   136,   137,   138,   139,   141,   156,   160,
     150,    70,   158,   142,     0,     0,   155
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-98))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      27,    98,    26,    15,    21,    32,    85,    86,     3,    26,
       8,    15,    36,    22,    41,    17,    40,    41,   115,     0,
       1,    38,     3,     4,     5,   122,    38,    31,     9,    41,
      11,     9,    36,    26,    61,    62,    63,    64,    22,    36,
     137,   138,   139,    41,    26,    17,    41,    40,    41,    76,
      77,    78,    79,    56,    36,   134,   135,   136,    40,    41,
      41,    17,    43,   160,    17,     1,    41,     3,     4,     5,
      41,    74,    75,     9,   101,    11,   103,     1,    14,     3,
       4,     5,    41,    18,     3,     9,    40,    11,    33,    34,
      14,   118,    41,     1,    22,     3,     4,     5,    33,    34,
      17,     9,    18,    11,    16,    41,    14,    43,     1,    31,
       3,     4,     5,     3,     4,     5,     9,    41,    11,    43,
      31,    14,    31,    18,     1,    21,     3,     4,     5,    25,
      26,    17,     9,    41,    11,    43,     1,    14,     3,     4,
       5,    17,    38,    18,     9,    17,    11,    26,    41,    14,
      43,    13,     1,    16,     3,     4,     5,    41,    33,    34,
       9,    31,    11,    21,    41,    14,    43,    25,    26,    22,
      41,    29,    30,    13,    32,    41,    41,    35,    43,    21,
      38,    41,    36,    25,    26,     3,     4,     5,    22,    31,
      13,    41,    41,    41,    43,    41,    38,    18,    18,    18,
      15,    31,    31,    31,    13,    13,    13,    40,    10,    13,
      16,    48,   156,   131,    -1,    -1,   150
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    48,     0,     1,     3,    11,    41,    43,    49,    51,
      52,    62,    63,    64,    68,    74,    22,     8,    41,    69,
      75,     9,    55,     3,     4,     5,    70,    36,    22,    17,
      15,    31,    36,    65,    17,    17,    56,    50,    41,    41,
      41,    26,    40,    41,    61,     3,    54,    40,    41,    61,
      22,    60,    61,     3,    41,    77,    17,    71,    72,    73,
      61,    21,    25,    26,    38,    15,    38,    41,    18,    16,
      65,    31,    66,    18,    33,    34,    29,    30,    32,    35,
      31,    31,    18,    60,    17,    17,    17,    61,    61,    61,
      61,    16,    41,    13,    31,    67,    41,    22,    13,    60,
      60,    36,    61,    36,    61,    61,    61,    18,     3,     4,
       5,    76,    76,    76,    41,    53,    41,    22,    36,    48,
      61,    61,    13,    41,    41,    41,    18,    18,    18,    48,
      15,    61,    14,    48,    31,    31,    31,    13,    13,    13,
      14,    40,    66,    14,    76,    76,    76,    48,    48,    48,
      16,    57,    14,    14,    14,    67,    10,    58,    55,    59,
      13,    48,    14
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
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

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
      yychar = YYLEX;
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1806 of yacc.c  */
#line 63 "analyser_gram.yacc"
    {line_number++;}
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 64 "analyser_gram.yacc"
    {printf("YACC:egalite ok \n");}
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 67 "analyser_gram.yacc"
    {/*push_symb_zone();*/}
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 67 "analyser_gram.yacc"
    {/*pop_symb_zone();*/}
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 67 "analyser_gram.yacc"
    {printf("YACC:condition ok \n");}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 68 "analyser_gram.yacc"
    {/*push_symb_zone();*/}
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 68 "analyser_gram.yacc"
    {/*pop_symb_zone();*/}
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 73 "analyser_gram.yacc"
    {push_symb_zone();}
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 73 "analyser_gram.yacc"
    {pop_symb_zone(); printf("YACC:mon main\n");
				print_all_assembler_instructions();}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 83 "analyser_gram.yacc"
    {if_add_from_where(get_number_of_line());}
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 83 "analyser_gram.yacc"
    {if_fill_from_to(get_number_of_line());}
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 86 "analyser_gram.yacc"
    {if_add_from_where(get_number_of_line());}
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 100 "analyser_gram.yacc"
    { stack_push_add((yyvsp[(1) - (3)].number),(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number)); ts_pop_addr((yyvsp[(3) - (3)].number));}
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 101 "analyser_gram.yacc"
    {stack_push_div((yyvsp[(1) - (3)].number),(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));ts_pop_addr((yyvsp[(3) - (3)].number));}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 102 "analyser_gram.yacc"
    {stack_push_sub((yyvsp[(1) - (3)].number),(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));ts_pop_addr((yyvsp[(3) - (3)].number));}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 103 "analyser_gram.yacc"
    {stack_push_mul((yyvsp[(1) - (3)].number),(yyvsp[(1) - (3)].number),(yyvsp[(3) - (3)].number));ts_pop_addr((yyvsp[(3) - (3)].number));}
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 104 "analyser_gram.yacc"
    {stack_push_mul((yyvsp[(2) - (2)].number),(yyvsp[(2) - (2)].number),-1);}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 105 "analyser_gram.yacc"
    {
				int tmp = ts_add_temp();
				(yyval.number) = tmp;
				stack_push_afc(tmp,(yyvsp[(1) - (1)].number));
				printf("YACC: tNOMBRE saved %d\n\n", tmp);
		}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 111 "analyser_gram.yacc"
    {
				if (exist((yyvsp[(1) - (1)].texte)) == -1 ){
					printf("YACC: tword ALREADY saved\n\n");
					int tmp = ts_add_temp();
                                        (yyval.number) = tmp;
                                        printf("YACC: avant push_cop\n");
                                        stack_push_cop(tmp,get_addr_from((yyvsp[(1) - (1)].texte)));
					printf("ici YACC: %d\n",get_addr_from((yyvsp[(1) - (1)].texte)));
					}
				else {
					printf("YACC: erreur debut else tWORD\n");
				}
	}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 127 "analyser_gram.yacc"
    {	printf("YACC: dans LeftTerm\n");}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 130 "analyser_gram.yacc"
    {	stack_push_cop(get_addr_from((yyvsp[(1) - (3)].texte)),(yyvsp[(3) - (3)].number));
			printf("YACC: ici dollar 1 vaut %d et son addresse %d et dollar 3 vaut %d\n\n", (yyvsp[(1) - (3)].texte),get_addr_from((yyvsp[(1) - (3)].texte)),(yyvsp[(3) - (3)].number));
			ts_display();
			ts_pop_addr((yyvsp[(3) - (3)].number));
			ts_display();}
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 137 "analyser_gram.yacc"
    { 
				if (ts_push((yyvsp[(2) - (4)].texte),(yyvsp[(1) - (4)].texte))!=-1)
					printf("YACC:Declaration correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 143 "analyser_gram.yacc"
    { 
				if (ts_push((yyvsp[(2) - (6)].texte),(yyvsp[(1) - (6)].texte))!=-1)
					printf("YACC: Declaration avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 148 "analyser_gram.yacc"
    {
				if (ts_push((yyvsp[(2) - (7)].texte),(yyvsp[(1) - (7)].texte))!=-1)
					printf("YACC: Declaration de tableau avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 153 "analyser_gram.yacc"
    {yyerror;
/* | tCHAR tWORD tCO tNOMBRE tCF tPOINTVIRG |
tCHAR tPOINTER tWORD tPOINTVIRG |
tCHAR tWORD DeclarationCharMemeLigne tPOINTVIRG |
tCHAR tWORD tEGAL tNOMBRE tPOINTVIRG |
tCHAR tWORD tEGAL tSQ tWORD tSQ tPOINTVIRG |
tCHAR tWORD tEGAL tCO tNOMBRE tCF tPOINTVIRG*/}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 162 "analyser_gram.yacc"
    {
				if (ts_push((yyvsp[(2) - (3)].texte),"int")!=-1) 
					printf("YACC: Declaration ligne correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 171 "analyser_gram.yacc"
    {
				if (ts_push((yyvsp[(2) - (5)].texte),"int")!=-1)
					stack_push_cop(get_addr_from((yyvsp[(2) - (5)].texte)),(yyvsp[(4) - (5)].number)) ;
				else
					printf("YACC: La variable existe déjà\n");
				}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 183 "analyser_gram.yacc"
    {
	while_add_from_to(get_number_of_line());
	}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 186 "analyser_gram.yacc"
    {
	while_fill_from_where(get_number_of_line());
	}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 192 "analyser_gram.yacc"
    {
				function_add(get_number_of_line(),(yyvsp[(2) - (2)].texte));
				}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 195 "analyser_gram.yacc"
    {
			 function_add(get_number_of_line(),(yyvsp[(2) - (2)].texte));
			}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 198 "analyser_gram.yacc"
    {
			 function_add(get_number_of_line(),(yyvsp[(2) - (2)].texte));
			}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 203 "analyser_gram.yacc"
    {
		 stack_push_jump(function_get_addr((yyvsp[(1) - (1)].texte)));
		}
    break;



/* Line 1806 of yacc.c  */
#line 1906 "y.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 2067 of yacc.c  */
#line 218 "analyser_gram.yacc"



int yyerror(char *s){
printf("%s\n",s);
return 1;
}

//int yywrap() {
//	return 1;
//}

int main(void){
return yyparse();
}

