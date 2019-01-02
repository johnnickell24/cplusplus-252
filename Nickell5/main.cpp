// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will allow the user to input a max score, then input multiple student scores and give back grades and other pieces of info such as the average score.
#include "constants.h"

void read(int scores[], int &count, int &maxScore);
void sort(int scores[], int count);
void outputScores(int scores[], int count, int maxScore);
void outputSummary(int scores[], int count, int maxScore);

int main()
{
   int scores[arraysize];
   int count = 0;
   int sumScore = 0;
   int avgScore;
   int maxScore;
   
   read(scores,count,maxScore);
   sort(scores,count);
   outputScores(scores,count,maxScore);
   outputSummary(scores,count,maxScore);

   return 0;
}
