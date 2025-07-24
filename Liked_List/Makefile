CC=gcc
CFLAGS=-Wall -Wextra

all: main

main: main.o list.o
	$(CC) $(CFLAGS) -o main main.o list.o

main.o: main.c list.h
list.o: list.c list.h

clean:
	rm -f *.o main
