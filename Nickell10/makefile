#File:      <makefile>
#Name:      <John Nickell>
#Class:     CSIS 252
#Program:   Assignment 10
#Date:      <11/28/18>
#This file contains the make file

CC= g++

OBJECTS= main.o dateType.o timeType.o appointmentType.o read.o output.o

EXE= prog10

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 	main.cpp dateType.h timeType.h appointmentType.h arrayListType.h
		$(CC) -c main.cpp
		
dateType.o:	dateType.cpp dateType.h
		$(CC) -c dateType.cpp
		
timeType.o:	timeType.cpp timeType.h
		$(CC) -c timeType.cpp
		
appointmentType.o:	appointmentType.cpp appointmentType.h
		        $(CC) -c appointmentType.cpp
		        
read.o:		read.cpp appointmentType.h arrayListType.h
		$(CC) -c read.cpp
		
output.o:	output.cpp
		$(CC) -c output.cpp
		
clean:
		rm -rf $(EXE) $(OBJECTS) *~
