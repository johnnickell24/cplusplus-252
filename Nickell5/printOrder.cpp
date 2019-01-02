// File:      <printOrder.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the printOrder fucntion
#include <iostream>
#include <iomanip>
#include <cmath>
#include "constants.h"
using namespace std;

void printOrder(int numbers[], int count, int maxScore)
{
    //Preconditions: numbers[], count, maxScore
    //Postconditions: returns nothing but outputs grade and percentages
    //This function calculates and outputs the grades with percentages
    double stuPercent;
    char stuGrade;
    
    for (int score = 0; score < count; score++)
    {
      stuPercent = (numbers[score] / double(maxScore)) * 100;
      
      if (stuPercent >= 90)
      {
         stuGrade = 'A';
      }
      else if (stuPercent < 90 && stuPercent >= 80)
      {
         stuGrade = 'B';
      }
      else if (stuPercent < 80 && stuPercent >= 70)
      {
         stuGrade = 'C';
      }
      else if (stuPercent < 70 && stuPercent >= 60)
      {
         stuGrade = 'D';
      }
      else if (stuPercent < 60)
      {
         stuGrade = 'F';
      }
       cout.precision(2);
       cout << left << setw(8) << numbers[score] << fixed << stuPercent << "        " << stuGrade  << "\n";
   }
}
