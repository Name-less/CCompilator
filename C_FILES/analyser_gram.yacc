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
int line_number = 1;
int if_to_fill = 0;
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
%type <number> Condition
%type <texte> LeftTerm
%type <number> For

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
Input Egalite tPOINTVIRG  |
Input Declaration |
Input {
	push_symb_zone();
}While{
	pop_symb_zone();
} |
Input{
	push_symb_zone();
} For{
	pop_symb_zone();
} |
Input {
push_symb_zone();
} If {
	pop_symb_zone();
}|
Input Function |
Input Appel_Function |
Input Main;

Main :
tINTEGER tMAIN tPO Arg tPF tAO {push_symb_zone();} Input tAF {pop_symb_zone();
				print_all_assembler_instructions();
				parse_and_modify_file("toto","asm_with_jump");
} ;

Arg :
tINTEGER tWORD |
tINTEGER tCO tCF tWORD | 
tINTEGER tPOINTER tWORD |
;

If :
tIF tPO {
	stack_push_afc_cr(0);
} Condition {
	if_add_from_where(get_number_of_line());
	stack_push_push_cr();
} tPF tAO Input tAF{
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
} Else;

Else :
tELSE {
	stack_push_inv_cr();
	stack_push_add_cr(1);
	if_add_from_where(get_number_of_line());
} tAO Input tAF {
	if_fill_from_to(get_number_of_line()+2);
} | 
tELSE{
  	stack_push_inv_cr();
        stack_push_add_cr(1);
        if_add_from_where(get_number_of_line());
} If {
	if_fill_from_to(get_number_of_line()+2);
}|;

Condition :
Exp tEGALEGAL Exp {
	int tmp = ts_add_temp();
	$$ = tmp;
	stack_push_equ_t(tmp,$1,$3);
	stack_push_add_cr(tmp);

}|
Exp tNOTEGAL Exp |
Exp tSUP Exp {
	stack_push_sup($1,$3,1);
} |
Exp tINF Exp {
	stack_push_inf($1,$3,1);
}|
Exp tSUP tEGAL Exp|
Exp tINF tEGAL Exp |
Condition tOR Condition {
	//int tmp = ts_add_temp();
	//stack_push_add_cr($1);
	//stack_push_add_cr($3);
	//stack_push_sup($3,1,1);
	//stack_push_nop();
	//stack_push_jump_false_cr(get_number_of_line()+3);
}  |
Condition tAND Condition {
        int tmp = ts_add_temp();
        stack_push_add(tmp,$1,$3);
        stack_push_equ(tmp,2,1);
        if_add_from_where(get_number_of_line());
	if_to_fill++;
};

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

		} |
tWORD {
				if (exist($1) == -1 ){
					int tmp = ts_add_temp();
                                        $$ = tmp;
                                        stack_push_cop(tmp,get_addr_from($1));
					}
				else {
					yyerror("Bad affectation at ligne ");
                                	return 1;
				}
	};


LeftTerm :
tWORD;

Egalite :
LeftTerm tEGAL Exp {	
			if(get_addr_from($1) != -1){
				stack_push_cop(get_addr_from($1),$3);
				ts_pop_addr($3);

			}else{
				yyerror("Bad affectation at ligne ");
				return 1;
			}
};

Declaration :
tINTEGER tWORD DeclarationIntMemeLigne tPOINTVIRG { 
				if (ts_push($2,$1)==-1){
					yyerror("Variable already exist at ligne ");
					return 1;
				}} |
tINTEGER tWORD tEGAL Exp DeclarationIntEgalMemeLigne tPOINTVIRG { 
				if (ts_push($2,$1)==-1){
					yyerror("Variable already exist at ligne ");
                                        return 1;
				}} |
tINTEGER tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne tPOINTVIRG {
				if (ts_push($2,$1)==-1){
                                        yyerror("Variable already exist at ligne ");
                                        return 1;
				}
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
				if (ts_push($2,"int")==-1){ 
					yyerror("Variable already exist at ligne ");
					return 1;
				}} |
				;

DeclarationIntEgalMemeLigne :
tVIRG tWORD tEGAL Exp DeclarationIntEgalMemeLigne {
				if (ts_push($2,"int")!=-1)
					stack_push_cop(get_addr_from($2),$4) ;
				else{
					yyerror("Variable already exist at ligne ");
					return 1;
				}} |
				;

DeclarationIntTabMemeLigne :
tVIRG tWORD tCO tNOMBRE tCF DeclarationIntTabMemeLigne | ;

While :
tWHILE{
	while_add_from_to(get_number_of_line());
	}
	tPO {
	stack_push_afc_cr(0);
} Condition {
	if_add_from_where(get_number_of_line());
	stack_push_push_cr();
} tPF tAO Input tAF {
		stack_push_pop_cr();
		stack_push_nop();
	while_fill_from_where(get_number_of_line());
	if_fill_from_to(get_number_of_line()+1);
};

For :
tFOR tPO Egalite tPOINTVIRG {
	stack_push_afc_cr(0);
	while_add_from_to(get_number_of_line());
} Condition {
        if_add_from_where(get_number_of_line());
        stack_push_push_cr();
} tPOINTVIRG tWORD tEGAL Exp tPF tAO Input tAF{
         if(get_addr_from($9) != -1){
                     stack_push_cop(get_addr_from($9),$11);
                     ts_pop_addr($11);
         }else{
                     yyerror("Bad affectation at ligne ");
                     return 1;
         }

	stack_push_pop_cr();
        stack_push_nop();
        
	while_fill_from_where(get_number_of_line());
        if_fill_from_to(get_number_of_line()+1);
};

Function :
tINTEGER tWORD {
	push_symb_zone();
	printf("add_function %s \n",$2);
	add_function($2,get_number_of_line());
	printf("end add_function \n");
}
 tPO Arguments_Declaration tPF tAO Input {
	stack_push_pop_sp();
	stack_push_jump_return();
} tAF {
	raz_empty_register();
	pop_symb_zone();
} |
tCHAR tWORD tPO Arguments_Declaration tPF tAO Input tAF |
tVOID tWORD tPO Arguments_Declaration tPF tAO Input tAF;

Appel_Function :
tWORD tPO Arguments tPF {
	printf("if try %d %s \n",function_exist($1),$1);
	if(function_exist($1) == 1){
		add_stack_value(get_number_of_line()+3);
		stack_push_afc_sp(get_number_of_line()+4);
		stack_push_push_sp();
		stack_push_jump(get_addr_function($1));
	}
};

Arguments_Declaration :
tINTEGER tWORD {
        ts_push($2,$1);
        stack_push_afc_from_register(get_addr_from($2),get_first_register());
}
tVIRG Arguments_Declaration |
tVOID tWORD tVIRG Arguments_Declaration |
tCHAR tWORD tVIRG Arguments_Declaration |
tINTEGER tWORD{
	ts_push($2,$1);
	stack_push_afc_from_register(get_addr_from($2),get_first_register());
} Arguments_Declaration|
;

Arguments :
tWORD tVIRG Arguments |
tNOMBRE tVIRG {
	stack_push_afc_register(get_empty_register(),$1);
}
Arguments |
tWORD  |
tINTEGER |
tNOMBRE {
	stack_push_afc_register(get_empty_register(),$1);
}|;

%%


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
