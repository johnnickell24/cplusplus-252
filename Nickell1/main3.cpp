// File:      <main3.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   1
// Date:      <9/6/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program gives the area of a triangle with the input of the lengths of the sides

int main()
{
  cout << fixed << showpoint << setprecision(2);
  double side1;
  double side2;
  double side3;
  double area;
  double halfp;
  
  cout << "Enter lengths of the three sides: ";
  cin >> side1 >> side2 >> side3;
  
  halfp = (side1 + side2 + side3) / 2;
  area = sqrt(halfp*(halfp-side1)*(halfp-side2)*(halfp-side3));
  
  cout << "The area is " << area << "\n";
  
  return 0;
}
