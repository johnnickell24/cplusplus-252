// File:      <main2.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   1
// Date:      <9/6/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will give the user a diameter, circumference, and area of a circle based on the radius given.


int main()
{
  cout << fixed << showpoint << setprecision(2);
  double radius;
  double diameter;
  double circum;
  double area;
  double pi;
  pi = 3.14159;
  
  cout << "Please enter the radius of a circle: ";
  cin >> radius;
  
  diameter = radius * 2;
  circum = diameter * pi;
  area = pow(radius,2) * pi;
  
  cout << "The diameter is " << diameter << "\n";
  cout << "The circumference is " << circum << "\n";
  cout << "The area is " << area << "\n";
  
  return 0;
}
