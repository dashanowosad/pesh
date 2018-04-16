CXX=g++
CFLAGS =  -c -Wall -Werror
OBJECTS = build/main.o build/p_forward.o build/p_hack.o build/P_forward.o build/P_hack.o build/rook.o build/Rook.o build/horse.o build/Horse.o build/elephant.o build/Elephant.o build/king.o build/King.o

.PHONY: all clean

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog

build/main.o: scr/main.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/main.cpp -o build/main.o

build/p_forward.o: scr/p_forward.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/p_forward.cpp -o build/p_forward.o

build/p_hack.o: scr/p_hack.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/p_hack.cpp -o build/p_hack.o

build/P_forward.o: scr/P_forward.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/P_forward.cpp -o build/P_forward.o

build/P_hack.o: scr/P_hack.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/P_hack.cpp -o build/P_hack.o

build/rook.o: scr/rook.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/rook.cpp -o build/rook.o

build/Rook.o: scr/Rook.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/Rook.cpp -o build/Rook.o

build/horse.o: scr/horse.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/horse.cpp -o build/horse.o

build/Horse.o: scr/Horse.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/Horse.cpp -o build/Horse.o

build/elephant.o: scr/elephant.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/elephant.cpp -o build/elephant.o

build/Elephant.o: scr/Elephant.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/Elephant.cpp -o build/Elephant.o

build/king.o: scr/king.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/king.cpp -o build/king.o

build/King.o: scr/King.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/King.cpp -o build/King.o

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin 


	
	
