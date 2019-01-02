// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the main function

// Function: main
// Description: The function is the main
// Input:  none
// Output: calls the function read and output
// Preconditions:  the text file isn't empty
// Postconditions: both functions were called

#include <iostream>
using namespace std;
#include "constants.h"

// prototypes
void read(int scores[], string names[],int& count, int& maxScore);
void output(int scores[], const string names[], int count, int maxScore);

int main()
{
   int scores[arrayMax];
   string names[arrayMax];
   int count;
   int maxScore;
   
   read(scores, names, count, maxScore);
   output(scores, names, count, maxScore);
   
   
   return 0;
}
