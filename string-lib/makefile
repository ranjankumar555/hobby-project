CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -Iinclude

all: my_program

my_program: main.o my_strlen.o
	$(CC) $(CFLAGS) -o my_program main.o my_strlen.o

main.o: main.c include/my_string_lib.h
	$(CC) $(CFLAGS) -c main.c -o main.o

my_strlen.o: src/my_strlen.c include/my_string_lib.h
	$(CC) $(CFLAGS) -c src/my_strlen.c -o my_strlen


clean:
	rm -f *.o my_program

