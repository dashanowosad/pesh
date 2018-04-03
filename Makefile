CXX=g++
CFLAGS =  -Wall -Werror
OBJECTS = build/main.o build/p_forward.o build/p_hack.o build/P_forward.o build/P_hack.o
R=-I scr
.PHONY: all clean

all: bin build bin/prog

bin/prog: $(OBJECTS)
	$(CXX) $(CFLAGS) $(OBJECTS) -o bin/prog

build/main.o: scr/main.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/main.cpp $(R) -o build/main.o
build/p_forward.o: scr/p_forward.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/p_forward.cpp $(R) -o build/p_forward.o
build/p_hack.o: scr/p_hack.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/p_hack.cpp $(R) -o build/p_hack.o
build/P_forward.o: scr/P_forward.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/P_forward.cpp $(R) -o build/P_forward.o
build/P_hack.o: scr/P_hack.cpp scr/functions.h
	$(CXX) $(CFLAGS) scr/P_hack.cpp $(R) -o build/P_hack.o

build:
	mkdir build -p
bin:
	mkdir bin -p
clean:
	-rm -rf *.o

	
	
