// File:      <median.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the median function

void median(const int scores[], int count, int& medianScore)
{
    int medianCount;
    int tmpp;
    
    if (count % 2 != 0)
        medianScore = scores[count / 2];
    if (count % 2 == 0)
    {
        int tmpLow = scores[(count - 1) / 2];
        int tmpHigh = scores[(count + 1)/ 2];
        
        tmpp = tmpHigh+tmpLow;
        medianScore = tmpp / 2;
    }
}
