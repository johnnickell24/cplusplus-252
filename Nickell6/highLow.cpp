// File:      <highLow.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the highLow function

// Function: highLow
// Description: The function will find the highest and lowest values
// Input:  scores (array of int)
//         count (int) - the number of values in the array
//         highScore (int&) high value of array
//         lowScore (int&) low value of array
// Output: the high and low value
// Preconditions:  count contains the number of values store in the array
// Postconditions: The high and low values now have their respective numbers declared
void highLow(const int scores[], int count, int& highScore, int& lowScore)
{
  
  for (int i=0; i<count; i++)
  {
    if (i == 0)
    {
      highScore = scores[i];
      lowScore = scores[i];
    }
    if (scores[i] > highScore)
      highScore = scores[i];
    if (scores[i] < lowScore)
      lowScore = scores[i];
  }
}
