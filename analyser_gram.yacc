%{
#include <stdlib.h>
#include <stdio.h>
#include "tableSymbole.h"
#include "instructions.h"
#include "jump_stack.h"
#include "function_stack.h"

int stack_pointer_adress = 1000;
int yyerror(char *s);
int yylex();
int line_number;
// int yywrap();

%}

%token <texte> tINTEGER

%token tCHAR tVOID tNULL tCONST

%token tMAIN

%token tIF tELSE tWHILE tFOR

%token tAO tAF tCO tCF tPO tPF tSQ tDQ

%token tDIV tPOINTVIRG tARROW tPOINT tPLUS tMINUS tMOD tEXP tSUP tINF tVIRG

%token tEGALEGAL tOR tAND tNOTEGAL tEGAL

%token tADDR tPOINTER

%token tSPACE

%token <number> tNOMBRE
%token <texte> tWORD
%type <number> Exp
%type <texte> LeftTerm

%union{
int number;
char * texte;
}


%token tRETURN

%token tNEWLINE

%token tCOMMENT

%start Input

%right tEGAL
%left tPLUS tMOINS
%left tPOINTER tDIV
%left NEG


%%

Input: 
 |
Input tNEWLINE {line_number++;} |
Input Egalite tPOINTVIRG {printf("YACC:egalite ok \n");} |
Input Declaration |
Input While |
Input {/*push_symb_zone();*/} If {/*pop_symb_zone();*/} {printf("YACC:condition ok \n");}|
Input {/*push_symb_zone();*/} Function {/*pop_symb_zone();*/} |
Input Appel_Function|
Input Main;

Main :
tINTEGER tMAIN tPO Arg tPF tAO {push_symb_zone();} Input tAF {pop_symb_zone(); printf("YACC:mon main\n");
				print_all_assembler_instructions();} ;

Arg :
tINTEGER tWORD |
tINTEGER tCO tCF tWORD | 
tINTEGER tPOINTER tWORD |
;

If :
tIF{if_add_from_where(get_number_of_line());} tPO Condition tPF tAO Input tAF{if_fill_from_to(get_number_of_line());} Else;

Else :
tELSE {if_add_from_where(get_number_of_line());} tAO Input tAF | 
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
Exp tPLUS Exp { stack_push_add($1,$1,$3); ts_pop_addr($3);}|
Exp tDIV Exp {stack_push_div($1,$1,$3);ts_pop_addr($3);}|
Exp tMINUS Exp {stack_push_sub($1,$1,$3);ts_pop_addr($3);} |
Exp tPOINTER Exp {stack_push_mul($1,$1,$3);ts_pop_addr($3);} |
tMINUS Exp %prec NEG {stack_push_mul($2,$2,-1);} |
tNOMBRE {
				int tmp = ts_add_temp();
				$$ = tmp;
				stack_push_afc(tmp,$1);
				printf("YACC: tNOMBRE saved %d\n\n", tmp);
		} |
tWORD {
				if (exist($1) == -1 ){
					printf("YACC: tword ALREADY saved\n\n");
					int tmp = ts_add_temp();
                                        $$ = tmp;
                                        printf("YACC: avant push_cop\n");
                                        stack_push_cop(tmp,get_addr_from($1));
					printf("ici YACC: %d\n",get_addr_from($1));
					}
				else {
					printf("YACC: erreur debut else tWORD\n");
				}
	};


LeftTerm :
tWORD {	printf("YACC: dans LeftTerm\n");};

Egalite :
LeftTerm tEGAL Exp {	stack_push_cop(get_addr_from($1),$3);
			printf("YACC: ici dollar 1 vaut %d et son addresse %d et dollar 3 vaut %d\n\n", $1,get_addr_from($1),$3);
			ts_display();
			ts_pop_addr($3);
			ts_display();};

Declaration :
tINTEGER tWORD DeclarationIntMemeLigne tPOINTVIRG { 
				if (ts_push($2,$1)!=-1)
					printf("YACC:Declaration correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				} |
tINTEGER tWORD tEGAL Exp DeclarationIntEgalMemeLigne tPOINTVIRG { 
				if (ts_push($2,$1)!=-1)
					printf("YACC: Declaration avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				} |
tINTEGER tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne tPOINTVIRG {
				if (ts_push($2,$1)!=-1)
					printf("YACC: Declaration de tableau avant instanciation correcte\n");
				else printf("YACC: La variable exite déjà\n");
				} |
error tPOINTVIRG {yyerror;
/* | tCHAR tWORD tCO tNOMBRE tCF tPOINTVIRG |
tCHAR tPOINTER tWORD tPOINTVIRG |
tCHAR tWORD DeclarationCharMemeLigne tPOINTVIRG |
tCHAR tWORD tEGAL tNOMBRE tPOINTVIRG |
tCHAR tWORD tEGAL tSQ tWORD tSQ tPOINTVIRG |
tCHAR tWORD tEGAL tCO tNOMBRE tCF tPOINTVIRG*/};

DeclarationIntMemeLigne :
tVIRG tWORD DeclarationIntMemeLigne {
				if (ts_push($2,"int")!=-1) 
					printf("YACC: Declaration ligne correcte\n"); 
				else
					printf("YACC: La variable existe déjà\n"); 
				} |
				;

DeclarationIntEgalMemeLigne :
tVIRG tWORD tEGAL Exp DeclarationIntEgalMemeLigne {
				if (ts_push($2,"int")!=-1)
					stack_push_cop(get_addr_from($2),$4) ;
				else
					printf("YACC: La variable existe déjà\n");
				} |
				;

DeclarationIntTabMemeLigne :
tVIRG tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne | ;

While :
tWHILE{
	while_add_from_to(get_number_of_line());
	}
	tPO Condition tPF tAO Input tAF {
	while_fill_from_where(get_number_of_line());
	}
	;

Function :
tINTEGER tWORD {
	add_function($1,get_number_of_line());
}
 tPO Arguments_Declaration tPF tAO Input {
	stack_push_jump_return();
} tAF |
tCHAR tWORD tPO Arguments_Declaration tPF tAO Input tAF |
tVOID tWORD tPO Arguments_Declaration tPF tAO Input tAF;

Appel_Function :
tWORD tPO Arguments tPF {
	if(function_exist($1) == 1){
		add_stack_value(get_number_of_line()+1);
		stack_push_afc(stack_pointer_address,get_number_of_line()+1);
		stack_push_jump(get_addr_function($1);
		stack_push_afc(stack_pointer_address,pop_stack_pointer());
	}
};

Arguments_Declaration :
tINTEGER tWORD tVIRG Arguments_Declaration |
tVOID tWORD tVIRG Arguments_Declaration |
tCHAR tWORD tVIRG Arguments_Declaration |;

Arguments :
tWORD tVIRG |
tINTEGER tVIRG |
tWORD |
tINTEGER |;

%%


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
