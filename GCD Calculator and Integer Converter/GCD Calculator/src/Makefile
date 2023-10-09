CC = gcc
CFLAGS = -g -Wall -Werror -pedantic-errors

all: gcd

gcd: gcd.o iterative.o recursive.o
	$(CC) $(CFLAGS) gcd.o iterative.o recursive.o -o gcd

gcd.o: gcd.c
	$(CC) $(CFLAGS) -c gcd.c

iterative.o: iterative.c iterative.h
	$(CC) $(CFLAGS) -c iterative.c

recursive.o: recursive.c recursive.h
	$(CC) $(CFLAGS) -c recursive.c

.PHONY: clean
clean:
	rm -f gcd *.o
