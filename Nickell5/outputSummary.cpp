// File:      <outputSummary.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the outputSummary function
#include <iostream>
#include <iomanip>
#include <cmath>
#include "constants.h"
double median(int scores[], int count);
double average(int scores[], int count);

using namespace std;

void outputSummary(int numbers[], int count, int maxScore)
{
    //Preconditions: numbers[], count, maxScore
    //Postconditions: no return, but outputs information during the function
    //This function outputs a summary of info for an array
    double avgScore;
    double medianScore;
    
    avgScore = average(numbers, count);
    medianScore = median(numbers, count);
    
    cout.precision(2);
    
    //One line to output each piece of information
    cout <<  "Maximum Score: " << maxScore << "\n";
    cout <<  "Number processed: " << count << "\n";
    cout <<  "High Score: " << numbers[0] << "\n";
    cout <<  "Low Score: " << numbers[count-1] << "\n";
    cout <<  "Average Score: " << fixed << avgScore << "\n";
    cout <<  "Median Score: " << fixed << medianScore << "\n";
}

