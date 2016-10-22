cc = g++

exe: main.o link.o stack.o
	$(cc) -o stack main.o link.o stack.o

link.o: list.h link.cpp
	$(cc) -c link.cpp

stack.o: stack.h stack.cpp
	$(cc) -c stack.cpp

main.o: main.cpp
	$(cc) -c main.cpp

clean:
	rm *.o
