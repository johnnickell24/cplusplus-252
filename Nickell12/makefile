#File:      <makefile>
#Name:      <John Nickell>
#Class:     CSIS 252
#Program:   Assignment 12
#Date:      <12/12/18>
#This file contains the make file

CC= g++

OBJECTS= main.o infixToQueue.o infixToPostfix.o evaluateOutput.o token.o

CLEANOBJS= main.o infixToQueue.o infixToPostfix.o evaluateOutput.o

EXE= prog12

$(EXE):		$(OBJECTS)
		$(CC) -o $(EXE) $(OBJECTS)
		
main.o: 		main.cpp token.h queueType.h stackType.h
		$(CC) -c main.cpp
		
infixToQueue.o:		infixToQueue.cpp token.h queueType.h stackType.h
		$(CC) -c infixToQueue.cpp
		
infixToPostfix.o:	infixToPostfix.cpp token.h queueType.h stackType.h
		$(CC) -c infixToPostfix.cpp
		
evaluateOutput.o:	evaluateOutput.cpp token.h queueType.h stackType.h
		$(CC) -c evaluateOutput.cpp
		
clean:
		rm -rf $(EXE) $(CLEANOBJS) *~
