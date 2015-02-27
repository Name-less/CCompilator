%{
#include <stdlib.h>
#include <stdio.h>
#include <tableSymbole.h>
%}

%token tINTEGER tCHAR tVOID tNULL tCONST

%token tMAIN

%token tIF tELSE tWHILE tFOR

%token tAO tAF tCO tCF tPO tPF tSQ tDQ

%token tDIV tPOINTVIRG tARROW tPOINT tPLUS tMINUS tMOD tEXP tSUP tINF tVIRG

%token tEGALEGAL tEGAL tOR tAND tNOTEGAL

%token tADDR tPOINTER

%token tNOMBRE tSPACE tWORD tLETTRE

%token tRETURN

%token tNEWLINE

%token tCOMMENT

%start Input

%right tEGAL
%left tPLUS tMOINS
%left tPOINTER tDIV


%%

Input: 
|Input tNEWLINE|
Input Egalite tPOINTVIRG {printf("egal ok \n");} |
Input Declaration {printf("declaration ok \n");} |
Input If {printf("condition ok \n");}|
Input Main;

Main :
tINTEGER tMAIN tPO Arg tPF tAO Input tAF;

Arg :
tINTEGER tWORD |
tINTEGER tCO tCF tWORD | 
tINTEGER tPOINTER tWORD |;

If :
tIF tPO Condition tPF tAO Input tAF Else;

Else :
tELSE tAO Input tAF | 
tELSE If |;

Condition :
Exp tEGALEGAL Exp |
Exp tNOTEGAL Exp |
Exp tSUP Exp |
Exp tINF Exp |
Exp tSUP tEGAL Exp|
Exp tINF tEGAL Exp |
Condition tOR Condition |
Condition tAND Condition;

Exp :
Exp tPLUS Exp|
Exp tDIV Exp |
Exp tMINUS Exp |
Exp tPOINTER Exp |
tNOMBRE |
tWORD;

Egalite :
Exp tEGAL Exp;

Declaration :
tINTEGER tWORD DeclarationIntMemeLigne tPOINTVIRG |
tINTEGER tWORD tEGAL Exp DeclarationIntEgalMemeLigne tPOINTVIRG |
tINTEGER tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne 
tPOINTVIRG |
tCHAR tWORD tCO tNOMBRE tCF tPOINTVIRG |
tCHAR tPOINTER tWORD tPOINTVIRG |
tCHAR tWORD DeclarationCharMemeLigne tPOINTVIRG |
tCHAR tWORD tEGAL tNOMBRE tPOINTVIRG |
tCHAR tWORD tEGAL tSQ tLETTRE tSQ tPOINTVIRG |
tCHAR tWORD tEGAL tCO tNOMBRE tCF tPOINTVIRG;

DeclarationIntMemeLigne :
tVIRG tWORD DeclarationIntMemeLigne | ;

DeclarationIntEgalMemeLigne :
tVIRG tWORD tEGAL Exp DeclarationIntEgalMemeLigne |;

DeclarationIntTabMemeLigne :
tVIRG tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne | ;

DeclarationCharMemeLigne :
tVIRG tWORD DeclarationCharMemeLigne | ;

%%
int yyerror(char *s){
printf("%s\n",s);
}

int main(void){
yyparse();
}
