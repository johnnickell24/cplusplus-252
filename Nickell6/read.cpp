// File:      <read.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the read function

// Function: read
// Description: The function fill the array with values
// Input:  scores (array of int)
//         count (int) - the number of values in the array
//	   maxscore - maximum score
// Output: scores will be filled with values, count will have the num of values
// Preconditions:  the file has a max score and at least one other number
// Postconditions: the array will not be empty, count and max score will not be empty

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "constants.h"

void read(int scores[], string names[], int& count, int& maxScore)
{
   int num;
   string name;
   ifstream infile;
   infile.open("testscores");
   count=0;
   infile >> num;
   maxScore = num;
   infile >> name;
   //getline(infile, name);
   while (!infile.eof() && count < arrayMax)
   {
      names[count] = name;
      infile >> num;
      scores[count] = num;
      infile >> name;
      //getline(infile, name);
      count++;
   }
   if (!infile.eof())
      cout << "Too many values entered\n";
   infile.close();
}
