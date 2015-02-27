#!/bin/bash

yacc -d -v analyser_gram.yacc ; 
flex analyser_lexical.lex ; 
gcc y.tab.c lex.yy.c -ll -o analyser ; 
./analyser < test.c

