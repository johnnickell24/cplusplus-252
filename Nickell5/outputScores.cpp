// File:      <outputScores.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//this file contains the outputScores function
#include <iostream>
#include <iomanip>
#include <cmath>
void printOrder(int scores[], int count, int maxScore);
using namespace std;
void outputScores(int numbers[], int count, int maxScore)
{
   //Preconditions: numbers[], count, maxScore
   //Postconditions: returns nothing
   //This function sets up the output columns and then calls the printOrder function
   
   cout << "Score" << setw(10) << "Percent" << setw(10) << "Grade" << setw(10) << "\n";
   cout << "-------------------------------------------------" << "\n";
   
   printOrder(numbers, count, maxScore);
}
