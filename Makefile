CXX=g++
CFLAGS =  -c -Wall -Werror
OBJECTS = main.o p_forward.o p_hack.o P_forward.o P_hack.o



prog: $(OBJECTS)
	$(CXX) $(OBJECTS) -o prog

main.o: main.cpp functions.h
	$(CXX) $(CFLAGS) main.cpp
p_forward.o: p_forward.cpp functions.h
	$(CXX) $(CFLAGS) p_forward.cpp
p_hack.o: p_hack.cpp functions.h
	$(CXX) $(CFLAGS) p_hack.cpp
P_forward.o: P_forward.cpp functions.h
	$(CXX) $(CFLAGS) P_forward.cpp
P_hack.o: P_hack.cpp functions.h
	$(CXX) $(CFLAGS) P_hack.cpp
clean:
	-rm -rf *.o

	
	
