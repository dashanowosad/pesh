CXX=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = build/main.o build/p_forward.o build/p_hack.o build/P_forward.o build/P_hack.o build/rook.o build/Rook.o build/horse.o build/Horse.o build/elephant.o build/Elephant.o build/king.o build/King.o build/queen.o build/Queen.o

OB = build/main_test.o build/p_forward.o build/p_hack.o build/P_forward.o build/P_hack.o build/rook.o build/Rook.o build/horse.o build/Horse.o build/elephant.o build/Elephant.o build/king.o build/King.o build/queen.o build/Queen.o

.PHONY: clean all bin build default test

all: bin build default test

default: bin/prog

test: bin/prog_test
	bin/prog_test

bin/prog: $(OBJECTS) 
	$(CXX) $(FLAGS) $(OBJECTS) -o bin/prog

build/main.o: scr/main.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/main.c  -o build/main.o

build/p_forward.o: scr/p_forward.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/p_forward.c -o build/p_forward.o

build/p_hack.o: scr/p_hack.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/p_hack.c -o build/p_hack.o

build/P_forward.o: scr/P_forward.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/P_forward.c -o build/P_forward.o

build/P_hack.o: scr/P_hack.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/P_hack.c -o build/P_hack.o

build/rook.o: scr/rook.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/rook.c -o build/rook.o

build/Rook.o: scr/Rook.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/Rook.c -o build/Rook.o

build/horse.o: scr/horse.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/horse.c -o build/horse.o

build/Horse.o: scr/Horse.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/Horse.c -o build/Horse.o

build/elephant.o: scr/elephant.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/elephant.c -o build/elephant.o

build/Elephant.o: scr/Elephant.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/Elephant.c -o build/Elephant.o

build/king.o: scr/king.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/king.c -o build/king.o

build/King.o: scr/King.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/King.c -o build/King.o

build/queen.o: scr/queen.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/queen.c -o build/queen.o 

build/Queen.o: scr/Queen.c scr/functions.h 
	$(CXX) $(CFLAGS) scr/Queen.c -o build/Queen.o


bin/prog_test: $(OB) 
	$(CXX) $(FLAGS) $(OB) -o bin/prog_test

build/main_test.o: test/main.c thirdparty/ctest.h scr/functions.h 
	$(CXX) $(CFLAGS) -I thirdparty -I scr -c test/main.c -o build/main_test.o

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin


	
	
