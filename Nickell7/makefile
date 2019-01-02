#Name: John Nickell
#CSIS 252: Assignment 7
#Makefile: prog7
#Date: 10/31/18
#This file contains the makefile

EXE = prog7

CC = g++

OBJECTS = main.o read.o output.o sort.o gross.o

LFLAGS =

CFLAGS =

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: main.cpp constants.h struct.h prototypes.h
	$(CC) $(CFLAGS) -c main.cpp

read.o: read.cpp constants.h struct.h
	$(CC) $(CFLAGS) -c read.cpp

output.o: output.cpp struct.h prototypes.h prototypes.h
	$(CC) $(CFLAGS) -c output.cpp
	
sort.o: sort.cpp
	$(CC) $(CFLAGS) -c sort.cpp
	
gross.o: gross.cpp
	$(CC) $(CFLAGS) -c gross.cpp
	
clean:
	rm -rf $(EXE) $(OBJECTS) *~
