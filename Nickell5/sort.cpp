// File:      <sort.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the sort function
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Given by Dr. Brekke for use in the program.
void sort(int numbers[], int n)
{
   //Preconditions: numbers[], count
   //Postconditions: returns nothing
   //This function sorts the array from largest to smallest
   int temp;
   int large;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<n; j++)  // loop to find the largest
         if (numbers[j] > numbers[large])
            large=j;
      temp = numbers[i];         // put largest into proper position
      numbers[i] = numbers[large];
      numbers[large] = temp;
   }
}
