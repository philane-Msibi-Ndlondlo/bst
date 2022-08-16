COMPILER = gcc
INCLUDES = 
SOURCES = *.c src/*.c
FLAGS = -Wall -ggdb3 -o
OUTPUT = a.out

all:
	$(COMPILER) $(SOURCES) $(FLAGS) $(OUTPUT)

mem:

clean:
	rm -rf *.o a.out


