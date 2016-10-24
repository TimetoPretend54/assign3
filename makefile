
# Makefile for compiling Project 3
# Source files included: stack.cpp, main.cpp, list.cpp
# Header files included: stack.h, list.h
#
cc = g++
rename_flag = -o
cflags = -c -g
program: main.o list.o stack.o
	$(cc) $(rename_flag) program main.o link.o stack.o
#Depndencies ---------------------------------------

list.o: link.cpp list.h
	$(cc) $(cflags) link.cpp

stack.o: stack.cpp stack.h
	$(cc) $(cflags) stack.cpp

main.o: main.cpp
	$(cc) $(cflags) main.cpp


clean: 
	rm -f *.o
