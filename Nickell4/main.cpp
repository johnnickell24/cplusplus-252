// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   4
// Date:      <10/3/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will allow the user to input a max score, then input multiple student scores and give back grades and other pieces of info such as the average score.

const int arraysize = 30;
const int sentinel = -1;
static double maxScore;

double median(int numbers[], int count)
{
    double medianScore;
    int medianCount;
    int tmpp;
    
    if (count % 2 != 0)
        medianScore = numbers[count / 2];
    if (count % 2 == 0)
    {
        int tmpLow = numbers[(count - 1) / 2];
        int tmpHigh = numbers[(count + 1)/ 2];
        cout << tmpLow<<endl;
        cout <<tmpHigh<<endl;
        cout << tmpHigh+tmpLow<<endl;
        tmpp = tmpHigh+tmpLow;
        medianScore = tmpp / 2;
    }
    
    return medianScore;
}

double average(int numbers[], int count)
{
    int sumScore = 0;
    double avgScore;
    
    for (int num = 0; num < count; num++)
        sumScore += numbers[num];
    
    avgScore = (sumScore / count);
    
    return avgScore;
}

void printOrder(int numbers[], int count)
{
    double stuPercent = 0;
    char stuGrade;
    
    for (int score = 0; score < count; score++)
   {
       
   stuPercent = (numbers[score] / maxScore) * 100;
   
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
       cout.precision(2);
       cout << fixed << numbers[score] << setw(10) << stuPercent << setw(10) << stuGrade << setw(10) << "\n";
   }
    
}

void read(int scores[], int& count)
{
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

// Given by Dr. Brekke for use in the program.
void sort(int numbers[], int n)
{
   int temp;
   int large;
   for (int i=0; i<n-1; i++)  // put n-1 ints in their correct spot
   {
      large=i;
      for (int j=i+1; j<n; j++)  // loop to find the largest
         if (numbers[j] > numbers[large])
            large=j;
      temp = numbers[i];         // put largest into proper position
      numbers[i] = numbers[large];
      numbers[large] = temp;
   }
}

void outputScores(int numbers[], int count)
{
   
   
   cout << "Score" << setw(10) << "Percent" << setw(10) << "Grade" << setw(10) << "\n";
   cout << "-------------------------------------------------" << "\n";
   
   printOrder(numbers, count);
}

void outputSummary(int numbers[], int count)
{
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


int main()
{
   int scores[arraysize];
   int count = 0;
   
   
   int sumScore = 0;
   int avgScore;
   

   read(scores,count);
   sort(scores,count);
   outputScores(scores,count);
   outputSummary(scores,count);

   return 0;
}
