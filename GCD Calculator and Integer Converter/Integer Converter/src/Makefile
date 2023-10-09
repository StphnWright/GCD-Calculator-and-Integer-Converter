CC = gcc
CFLAGS = -g -Wall -Werror -pedantic-errors

all: convert

convert: convert.c
	$(CC) $(CFLAGS) convert.c -o convert

.PHONY: clean
clean:
	rm -f convert
