TARGETS=analyser
OBJECTS=tableSymbole.o instructions.o jump_stack.o function_stack.o analyser_gram.o analyser_lexical.o
LDFLAGS=
CFLAGS=-Wall

all: $(TARGETS)

analyser: $(OBJECTS)
	gcc $(LDFLAGS) -o $@ $^ -ll

tableSymbole.o: tableSymbole.c
	gcc $(CFLAGS) -Werror -c $^

intructions.o: instructions.c
	gcc $(CFLAGS) -Werror -c $^

jump_stack.o: jump_stack.c
	gcc $(CFLAGS) -Werror -c $^

function_stack.o: function_stack.c
	gcc $(CFLAGS) -Werror -c $^

analyser_gram.o: y.tab.c
	gcc $(CFLAGS) -c -o $@ $^

analyser_lexical.o: lex.yy.c
	gcc $(CFLAGS) -c -o $@ $^

y.tab.c: analyser_gram.yacc
	yacc -Wall -v -d $^

lex.yy.c: analyser_lexical.lex
	flex $^

clean:
	rm -f $(OBJECTS) $(TARGETS) lex.yy.c y.tab.c toto

run:
	./analyser

info:
	echo $(TARGETS) $(OBJECTS)
