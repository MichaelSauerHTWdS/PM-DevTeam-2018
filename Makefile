PROGRAM=runme.notanexe
OBJECTS=menu.o scanflib.o
DEPENDFILE=.depend
CC=gcc
CFLAGS=-std=c99


.PHONY: all

all: dep $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROGRAM)

%.o : %.c
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: dep

dep: *.c
	gcc -MM *.c > $(DEPENDFILE)

-include $(DEPENDFILE)

.PHONY: clean

clean:
	rm *.o *.h.gch *.out *.notanexe .depend
