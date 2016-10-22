
# Makefile for compiling Project 3
# Source files included: stack.cpp, main.cpp, list.cpp
# Header files included: stack.h, list.h
#
cc = g++
cflag = -c -g
oflags = -o
program: main.o list.o stack.o
	$(cc) $(oflags) program main.o list.o stack.o

stack.o: stack.cpp stack.h
	$(cc) $(cflags) stack.cpp
list.o: link.cpp list.h
	$(cc) $(cflags) link.cpp
main.o: main.cpp
	$(cc) $(cflags) main.cpp
clean: 
	rm -f *.o