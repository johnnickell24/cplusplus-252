// File:      <output.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 6
// Date:      <10/24/18>
// This file contains the output function

// Function: output
// Description: The function will output the information from the array
// Input:  scores (array of int)
//         count (int) - the number of values in the array
//	   maxscore - maximum score
// Output: all information will be outputted to the result file
// Preconditions:  scores array is not empty
// Postconditions: result file is not empty

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

//Prototypes
void avg(const int scores[], int count, int& sumScore, double& avgScore);
void highLow(const int scores[], int count, int& highScore, int& lowScore);
void sort(int scores[], int count);
void median(const int scores[], int count, int& medianScore);
//void printOrder(const int scores[], const string names[], int count, int maxScore);

void output(int scores[], const string names[], int count, int maxScore)
{
  //initializing variables for output function
  int numProcessed;
  int highScore;
  int lowScore;
  int sumScore = 0;
  double avgScore;
  int medianScore;
  
  cout << fixed << setprecision(2);
  
  sort(scores, count);
  
  double stuPercent;
  char stuGrade;
    
    ofstream myFile;
    myFile.open("testresults");
  
    myFile << "Name" << setw(11) << "Score" << setw(12) << "Percent" << setw(12) << "Grade" << setw(14) << "\n";
    myFile<< "-------------------------------------------------" << "\n";
    
    for (int score = 0; score < count; score++)
    {
      stuPercent = (scores[score] / double(maxScore)) * 100;
      
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
       myFile.precision(2);
       myFile << left << setw(10) << names[score] << setw(10) << scores[score] << fixed << stuPercent << setw(10) << "    " << stuGrade  << "\n";
   }
   myFile.close();
  //printOrder(scores, names, count, maxScore);
  
  //writing to the summary
  ofstream myFile2;
  myFile2.open("testsummary");
  
  //Giving the max score
  myFile2 << "The max score was " << maxScore << endl;
  
  //Giving num of students numProcessed
  myFile2 << "The number of students processed was " << count << endl;
  
  //High and low scores
  highLow(scores, count, highScore, lowScore);
  myFile2 << "The high score was " << highScore << endl;
  myFile2 << "The low score was " << lowScore << endl;
  
  //Average score
  avg(scores, count, sumScore, avgScore);
  myFile2 << "The average score was " << avgScore << fixed << setprecision(2)<< endl;
  
  //Median Score
  median(scores, count, medianScore);
  myFile2 << "The median of the scores was " << medianScore << endl;
  
  myFile2.close();
}
