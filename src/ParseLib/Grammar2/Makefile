CFLAGS = -g -c -Wall -I../../AppliLib/include -I../include -I../../CommonLib/include

all: grammar

grammar: Grammar2.y Grammar2.l
	flex -F -o Grammar2.lex.c Grammar2.l
	bison -dy Grammar2.y
	gcc -c $(CFLAGS) Grammar2.lex.c Grammar2.parse.c Grammar2.c
	
clean: 
	rm -rf *.o
	rm -rf Grammar2.lex.c Grammar2.parse.c Grammar2.parse.h
