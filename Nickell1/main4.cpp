// File:      <main4.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   1
// Date:      <9/6/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program finds the hypotenuse of a right triangle when given sides A and B

int main()
{
  cout << fixed << showpoint << setprecision(2);
  double side1;
  double side2;
  double hypot;
  
  cout << "Please enter the length of sides A and B: ";
  cin >> side1 >> side2;
  
  hypot = sqrt( pow(side1,2) + pow(side2,2) );
  
  cout << "The length of the hypotenuse is " << hypot << "\n";

  return 0;
}
