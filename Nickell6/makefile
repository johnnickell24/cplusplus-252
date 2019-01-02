#Name: John Nickell
#CSIS 252: Assignment 6
#Makefile: prog6
#Date: 10/24/18
#This file contains the makefile

EXE = prog6

CC = g++

OBJECTS = main.o read.o output.o avg.o highLow.o sort.o median.o #printOrder.o

LFLAGS =

CFLAGS =

$(EXE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(EXE) $(OBJECTS) $(LFLAGS)

main.o: main.cpp constants.h
	$(CC) $(CFLAGS) -c main.cpp

read.o: read.cpp constants.h
	$(CC) $(CFLAGS) -c read.cpp

output.o: output.cpp avg.cpp highLow.cpp sort.cpp median.cpp
	$(CC) $(CFLAGS) -c output.cpp
	
avg.o: avg.cpp
	$(CC) $(CFLAGS) -c avg.cpp
	
highLow.o: highLow.cpp
	$(CC) $(CFLAGS) -c highLow.cpp
	
sort.o: sort.cpp
	$(CC) $(CFLAGS) -c sort.cpp
	
median.o: median.cpp
	$(CC) $(CFLAGS) -c median.cpp
	
#printOrder.o: printOrder.cpp
	#$(CC) $(CFLAGS) -c printOrder.cpp
	
clean:
	rm -rf $(EXE) $(OBJECTS) *~
