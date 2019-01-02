// File:      <median.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the median function


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double median(int numbers[], int count)
{
    //Preconditions: numbers[], count
    //Postconditions: returns medianScore
    //This function calculates the median of the given array
    double medianScore;
    int medianCount;
    int tmpp;
    
    if (count % 2 != 0)
        medianScore = numbers[count / 2];
    if (count % 2 == 0)
    {
        int tmpLow = numbers[(count - 1) / 2];
        int tmpHigh = numbers[(count + 1)/ 2];
        
        tmpp = tmpHigh+tmpLow;
        medianScore = tmpp / 2;
    }
    
    return medianScore;
}
