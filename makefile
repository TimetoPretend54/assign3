
# Makefile for compiling Project 3
# Source files included: stack.cpp, main.cpp, list.cpp
# Header files included: stack.h, list.h
#
cc = g++
cflag = -c 
oflags = -o
stack: main.o list.o stack.o
	$(cc) $(oflags) test main.o list.o stack.o
main.o: main.cpp
	$(cc) $(cflags) main.cpp
list.o: link.cpp list.h
	$(cc) $(cflags) list.cpp
stack.o: stack.cpp stack.h
	$(cc) $(cflags) stack.cpp
clean: 
	rm -f *.o