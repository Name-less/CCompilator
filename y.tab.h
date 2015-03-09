/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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
     tEGAL = 288,
     tOR = 289,
     tAND = 290,
     tNOTEGAL = 291,
     tADDR = 292,
     tPOINTER = 293,
     tSPACE = 294,
     tNOMBRE = 295,
     tWORD = 296,
     tRETURN = 297,
     tNEWLINE = 298,
     tCOMMENT = 299,
     tMOINS = 300
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
#define tEGAL 288
#define tOR 289
#define tAND 290
#define tNOTEGAL 291
#define tADDR 292
#define tPOINTER 293
#define tSPACE 294
#define tNOMBRE 295
#define tWORD 296
#define tRETURN 297
#define tNEWLINE 298
#define tCOMMENT 299
#define tMOINS 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 34 "analyser_gram.yacc"

int number;
char * texte;



/* Line 2068 of yacc.c  */
#line 147 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


