PROGRAM=Projekt.out
OBJECTS=scanflib.o

CC=gcc
CFLAGS= -Wall -pedantic -std=c99

.PHONY: all

all: $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $(OPJECTS)\
	-o $(PROGRAM)

%o: %.c %.h make.c
	$(CC) $(CFLAGS) -c *.c

.PHONY: clean

clean:
	rm	*.o
	rm	*.out