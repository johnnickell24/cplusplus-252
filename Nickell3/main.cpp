// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 3
// Date:      <9/26/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will take an array as an input and output various modifications such as the average and the array in reverse.

const int arraymax = 10;
const int sentinel = 0;

int main()
{
// Variables
int numbers[arraymax];
int evenNumbers[arraymax];
int oddNumbers[arraymax];
int evenCount = 0;
int oddCount = 0;
int count = 0;
int num;
int sum = 0;
double avg;
int belowCount = 0;
int aboveCount = 0;

// Step 1
cout << "Enter a number, " << sentinel << " to quit: ";
cin >> num;
while (num!= sentinel && count < arraymax)
{
  if (num > 0)
  {
    numbers[count] = num;
    count = count + 1;
    cin >> num;
  }
  else if(num < 0)
  {
    cout << "Error: Please enter a positive number";
    cin >> num;
  }
}
if (num != sentinel)
  cout << "You have gone above the Arraymax";

// Step 2
for (int i = 0; i < count; i = i + 1)
  cout << numbers[i] << ' ';
cout << endl;

// Step 3
for (int i = count - 1; i >= 0; i = i - 1)
  cout << numbers[i] << ' ';
cout << endl;

// Step 4
cout << "The average is: ";
for (int i = 0; i < count; i = i + 1)
  sum = sum + numbers[i];
avg = sum / double(count);
cout << avg << setprecision(2);
cout << endl;

// Step 5
cout << "First number below the average are: ";
for (int i = 0; i < count; i = i + 1)
  if (numbers[i] <= avg)
  {
    cout << numbers[i] << ' ';
    break;
  }
cout << endl;

// Step 6
cout << "First number above the average are: ";
for (int i = 0; i < count; i = i + 1)
  if (numbers[i] >= avg)
  {
    cout << numbers[i] << ' ';
    break;
  }
cout << endl;

// Step 7
for (int i = 0; i < count; i = i + 1)
  if (numbers[i] < avg)
    belowCount = belowCount + 1;
cout << "The number of values below the avg is: " << belowCount;
cout << endl;
for (int i = 0; i < count; i = i + 1)
  if (numbers[i] > avg)
    aboveCount = aboveCount + 1;
cout << "The number of values above the avg is: " << aboveCount;
cout << endl;

// Step 8
for (int i = 0; i < count; i = i + 1)
  if (numbers[i] % 2 != 0)
  {
    oddNumbers[oddCount] = numbers[i];
    oddCount = oddCount + 1;
  }
  else if (numbers[i] % 2 == 0)
  {
    evenNumbers[evenCount] = numbers[i];
    evenCount = evenCount + 1;
  }
cout << "Even Array: ";
for (int i = 0; i < evenCount; i = i + 1)
  cout << evenNumbers[i] << ' ';
  cout << endl;
cout << "Odd Array: ";
for (int i = 0; i < oddCount; i = i + 1)
  cout << oddNumbers[i] << ' ';
  cout << endl;
    
return 0;
}
