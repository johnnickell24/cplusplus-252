// File:      <read.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 7
// Date:      <10/31/18>
// This file contains the read function

// Function: read
// Description: The function fill the array with values
// Input:  workers (array of struct)
//         count (int) - the number of values in the array
//	   
//        
// Output: workers will be filled with values, count will have the num of values
// Preconditions:  tdata isn't empty
// Postconditions: the array will not be empty, count 

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
#include "constants.h"
#include "struct.h"

void read(newWorker workers[],int& count)
{
   int num;
   string tmp;
   
   ifstream infile;
   infile.open("data");
   
   infile >> workers[count].empID;
   infile >> workers[count].name;
   infile.ignore(80, '\n');
   infile >> workers[count].hours;
   infile >> workers[count].wage;
   
   while (!infile.eof() && count < arrayMax)
   {
     count ++;
     infile >> workers[count].empID;
     infile >> workers[count].name;
     infile.ignore(80, '\n');
     infile >> workers[count].hours;
     infile >> workers[count].wage;
   }
   infile.close();
}
