%{
#include <stdlib.h>
#include <stdio.h>
#include "y.tab.h"
int line = 1;
%}

NOMBRE [0-9]+
SPACE [ \t]
NEWLINE [\n]
WORD [a-zA-Z][a-zA-Z0-9]*
LETTRE [a-zA-Z]

%x COMMENT

%%

"/*" {BEGIN COMMENT;}
<COMMENT>\n {line++;}
<COMMENT>[.]* {}
<COMMENT>"*/" {BEGIN INITIAL;printf("\n");}

"//" return tCOMMENT;

"const" return tCONST;
"int" return tINTEGER;
"char" return tCHAR;
"void" return tVOID;
"NULL" return tNULL;

"main" return tMAIN;

"if" return tIF;
"else"  return tELSE;
"while" return tWHILE;
"for" return tFOR;

"{" return tAO;
"}" return tAF;
"[" return tCO;
"]" return tCF;
"(" return tPO;
")" return tPF;

";"  return tPOINTVIRG;
"->" return tARROW;
"."  return tPOINT;
"+"  return tPLUS;
"-" return tMINUS;
"%" return tMOD;
"^" return tEXP;
"<" return tINF;
">" return tSUP;
"/" return tDIV;
"," return tVIRG;

"==" return tEGALEGAL;
"!=" return tNOTEGAL;
"=" return tEGAL;
"||" return tOR;
"&&" return tAND;

"&" return tADDR;
"*" return tPOINTER;

\" return tDQ;
"'" return tSQ;

"return" return tRETURN;

{NEWLINE} return tNEWLINE;
{NOMBRE} return tNOMBRE;
{LETTRE} return tLETTRE;
{WORD}  yylval.string=strdup(yytext);return tWORD;

%%
