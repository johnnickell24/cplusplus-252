// File:      <output.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 7
// Date:      <10/31/18>
// This file contains the output function

// Function: output
// Description: The function will output the information from the array struct
// Input:  workers (array of int)
//         count (int) - the number of values in the array
//	  
// Output: all information will be outputted to the result file
// Preconditions:  data array is not empty
// Postconditions: payroll file is not empty

#include <iostream>
#include <iomanip>
#include <fstream>
#include "prototypes.h"
#include "struct.h"
using namespace std;

void output(newWorker workers[], int count)
{
  cout << fixed << showpoint << setprecision(2);
  
  ofstream myFile;
  myFile.open("payroll");
  
  myFile << setw(10) << left << "EmpID"
  << setw(15) << left << "Name" << 
  setw(10) << left << "Hours" << 
  setw(10) << left << "Wage" << 
  setw(10) << left << "Gross" <<endl;
  
  myFile << "-----------------------------------------------------" << endl;
  
  gross(workers, count);
  sort(workers, count);
  
  for (int i=0; i<count; i++)
  {
    myFile << setw(10) << left << workers[i].empID
    << setw(15) << left << workers[i].name << 
    setw(10) << left << workers[i].hours << 
    setw(10) << left << workers[i].wage <<
    setw(10) << left << workers[i].gross << fixed << setprecision(2) << endl;
  }
  
  myFile.close();
}
