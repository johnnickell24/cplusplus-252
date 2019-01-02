// File:      <read.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the read function
#include <iostream>
#include <iomanip>
#include <cmath>
#include "constants.h"
using namespace std;

void read(int scores[], int& count, int &maxScore)
{
  //Preconditions: numbers[], count, maxScore
  //Postconditions: returns nothing but adds to the array, count, and picks the maxScore
  //This function reads input into the array and max score
  int stuScore;
  
  cout << "Please enter a max score: ";
  cin >> maxScore;
  cout << "Enter the Student's score, enter -1 to quit: ";
  cin >> stuScore;
  
  while (stuScore != sentinel && count < arraysize)
  {
      scores[count] = stuScore;
      count += 1;
      
      cout << "Enter the Student's score, enter -1 to quit: ";
      cin >> stuScore;
  }
}
