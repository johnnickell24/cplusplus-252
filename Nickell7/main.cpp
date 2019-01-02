// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 7
// Date:      <10/31/18>
// This file contains the main function

#include <iostream>
using namespace std;
#include "constants.h"
#include "struct.h"
#include "prototypes.h"

int main()
{
   newWorker workers[arrayMax];
   int count = 0;
   
   read(workers, count);
   output(workers,count);
   
   
   return 0;
}
