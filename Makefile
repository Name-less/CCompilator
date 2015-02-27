TARGETS=analyser
OBJECTS=analyser_gram.o analyser_lexical.o
LDFLAGS=
CFLAGS=-Wall -Werror

all: $(TARGETS)

analyser: $(OBJECTS)
	gcc $(LDFLAGS) -ll -o $@ $^

analyser_gram.o: y.tab.c
	gcc $(CFLAGS) -c $^

analyser_lexical.o: lex.yy.c
	gcc $(CFLAGS) -c $^	

y.tab.c: analyser_gram.yacc
	yacc -Wall -v -d $^

lex.yy.c: analyser_lexical.lex
	flex $^

clean:
	rm $(OBJECTS) $(TARGETS)

run:
	./analyser
