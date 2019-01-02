// File:      <sort.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 7
// Date:      <10/31/18>
// This file contains the sort function
#include "struct.h"
using namespace std;

//Class example not my own
void sort(newWorker workers[], int n)
{
   newWorker temp;
   int large;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<n; j++)  // loop to find the smallest
         if (workers[j].gross > workers[large].gross)
            large=j;
      temp = workers[i];         // put biggest in proper position
      workers[i] = workers[large];
      workers[large] = temp;
   }
}
