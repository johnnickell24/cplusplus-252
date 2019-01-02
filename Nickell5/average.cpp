// File:      <average.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   5
// Date:      <10/10/18>

//This file contains the average function
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double average(int numbers[], int count)
{
    //Preconditions: numbers[], count
    //Postconditions: returns avgScore
    //This function calculates the average of the given array
    int sumScore = 0;
    double avgScore;
    
    for (int num = 0; num < count; num++)
        sumScore += numbers[num];
    
    avgScore = (sumScore / count);
    
    return avgScore;
}
