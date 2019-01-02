# File:      <makefile>
# Name:      <John Nickell>
# Class:     CSIS 252
# Program:   Assignment 8
# Date:      <11/7/18>
#This file contains the makefile

CC= g++

OBJECTS= main.o dateType.o timeType.o

EXE= prog8

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 	main.cpp dateType.h timeType.h
		$(CC) -c main.cpp
		
dateType.o:	dateType.cpp dateType.h
		$(CC) -c dateType.cpp
		
timeType.o:	timeType.cpp timeType.h
		$(CC) -c timeType.cpp
		
clean:
		rm -rf $(EXE) $(OBJECTS) *~
