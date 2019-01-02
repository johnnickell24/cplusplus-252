// File:      <avg.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the avg function

// Function: avg
// Description: The function will find the avg value
// Input:  scores (array of int)
//         count (int) - the number of values in the array
//         sumScore (int&) sum of all scores
//         avgScore (int&) average of all scores
// Output: the avg value
// Preconditions:  count contains the number of values store in the array
// Postconditions: The sum and avg values now have their respective numbers declared
void avg(const int scores[], int count, int& sumScore, double& avgScore)
{
  for (int i = 0; i < count; i = i + 1)
      sumScore = sumScore + scores[i];
  avgScore = sumScore / double(count);
}
