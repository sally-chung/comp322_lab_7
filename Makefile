# Name: Sally Chung
# Project: Lab 7: Asynchronous Elephant

EXECUTABLES=matrix_gen
SRC=matrix_gen.c matrix_add.c
OBJ=matrix_gen.o matrix_add.o

CC=gcc
CFLAGS=-g

all: $(EXECUTABLES)

	$(EXECUTABLES): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC)
	$(CC) $(CFLAGS) -o $@ $(OBJ) -lpthread -lrt

matrix_gen: matrix_gen.c
	gcc -g -c matrix_gen.c
	gcc -g -o $@ matrix_gen.o -lpthread -lrt

matrix_add: matrix_add.c
	gcc -g -c matrix_add.c
	gcc -g -o $@ matrix_add.o -lpthread -lrt

clean:
	rm -f $(EXECUTABLES) $(OBJ) 