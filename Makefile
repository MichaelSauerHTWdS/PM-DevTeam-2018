PROGRAM=runme
OBJECTS=menu.o scanflib.o
DEPENDFILE=.depend
CC=gcc
CFLAGS=-std=c99


.PHONY: all

all: dep $(PROGRAM)

$(PROGRAM): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(PROGRAM)

%.o : %.cpp
	$(CC) -c $(CFLAGS) $< -o $@

.PHONY: dep

dep: *.cpp
	gcc -MM *.cpp > $(DEPENDFILE)

-include $(DEPENDFILE)

.PHONY: clean

clean:
	rm *.o *.h.gch *.out
