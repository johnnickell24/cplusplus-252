// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   2
// Date:      <9/14/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will allow the user to input a max score, then input multiple student scores and give back grades and other pieces of info such as the average score.

int main()
{
  const int sentinel = -1;
  static double maxScore;
  static double stuScore;
  double stuPercent = 0;
  string stuGrade;
  int numA = 0;
  int numB = 0;
  int numC = 0;
  int numD = 0;
  int numF = 0;
  int stuMax;
  int numProc = 0;
  int highScore;
  int lowScore;
  int sumScore = 0;
  int avgScore;
  double sumPercent = 0;
  double avgPercent;
  
  cout << "Please enter a max score: ";
  cin >> maxScore;
  cout << "Enter the Student's score, enter -1 to quit: ";
  cin >> stuScore;
  lowScore = stuScore;
  highScore = stuScore;
  while (stuScore != sentinel)
  {
    stuPercent = (stuScore / maxScore) * 100;
    if (stuPercent >= 90)
    {
      stuGrade = "A";
      numA = numA + 1;
    }
    else if (stuPercent < 90 && stuPercent >= 80)
    {
      stuGrade = "B";
      numB = numB + 1;
    }
    else if (stuPercent < 80 && stuPercent >= 70)
    {
      stuGrade = "C";
      numC = numC + 1;
    }
    else if (stuPercent < 70 && stuPercent >= 60)
    {
      stuGrade = "D";
      numD = numD + 1;
    }
    else if (stuPercent < 60)
    {
      stuGrade = "F";
      numF = numF + 1;
    }
    
    numProc = numProc + 1;
    
    if (stuScore > highScore)
      highScore = stuScore;
    if (stuScore < lowScore)
      lowScore = stuScore;
    
    sumScore = sumScore + stuScore;
    sumPercent = sumPercent +stuPercent;
    
    cout << "Student Score: " << stuScore << "\n";
    cout << "Student Percent: " << stuPercent << setprecision(2) << "\n";
    cout << "Student Grade: " << stuGrade << "\n";
    cout << "Enter the Student's score, enter -1 to quit: ";
    cin >> stuScore;
  }
  cout << "Maximum Score: " << fixed << maxScore << "\n";
  cout << "Number Processed: " << numProc << "\n";
  cout << "High Score: " << highScore << "\n";
  cout << "Low Score: " << lowScore << "\n";
  cout << "Average Score: " << sumScore / numProc << setprecision(2) << "\n";
  cout << "Average Percent: " << sumPercent / numProc << setprecision(2) << "\n";
  cout << "Number of A's: " << numA << "\n";
  cout << "Number of B's: " << numB << "\n";
  cout << "Number of C's: " << numC << "\n";
  cout << "Number of D's: " << numD << "\n";
  cout << "Number of F's: " << numF << "\n";
      
  return 0; 
}
