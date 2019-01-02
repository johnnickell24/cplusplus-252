// File:      <gross.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 7
// Date:      <10/31/18>
// This file contains the gross function

// Function: gross
// Description: The function will calc gross pay
// Input:  workers (astruct array)
//         count (int) - the number of values in the array
//	  
// Output: gross pay is added to each employee
// Preconditions:  data array is not empty
// Postconditions: 

#include <iostream>
#include <iomanip>
#include "prototypes.h"
#include "struct.h"
using namespace std;

void gross(newWorker workers[], int count)
{
    double tmpRegular;
    double tmpOver;
    
    for (int i=0; i<count; i++)
    {
        if (workers[i].hours <= 40)
            workers[i].gross = workers[i].hours * workers[i].wage;
        
        if (workers[i].hours > 40){
            tmpRegular = 40 * workers[i].wage;
            tmpOver = (workers[i].hours - 40) * (workers[i].wage * 1.5);
            workers[i].gross = tmpRegular + tmpOver;
        }
    }
}
