#Name: John Nickell
#CSIS 252: Assignment 5
#Makefile: prog5
#Date: 10/10/18
#This file contains the makefile

EXE = prog5

CC = g++

OBJECTS = main.o read.o sort.o outputScores.o outputSummary.o median.o average.o printOrder.o

LFLAGS =

CFLAGS =

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: main.cpp constants.h
	$(CC) $(CFLAGS) -c main.cpp

read.o: read.cpp constants.h
	$(CC) $(CFLAGS) -c read.cpp

sort.o: sort.cpp
	$(CC) $(CFLAGS) -c sort.cpp

outputScores.o: outputScores.cpp printOrder.cpp
	$(CC) $(CFLAGS) -c outputScores.cpp

outputSummary.o: outputSummary.cpp median.cpp average.cpp
	$(CC) $(CFLAGS) -c outputSummary.cpp

median.o: median.cpp
	$(CC) $(CFLAGS) -c median.cpp

average.o: average.cpp
	$(CC) $(CFLAGS) -c average.cpp

printOrder.o: printOrder.cpp
	$(CC) $(CFLAGS) -c printOrder.cpp

clean:
	rm -rf $(EXE) $(OBJECTS) *~
