// File:      <main1.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   1
// Date:      <9/6/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program will take the miles driven and amount of gas used and give the user back the MPG

int main()
{
  cout << fixed << showpoint << setprecision(2);
  double kilo_traveled;
  double liter_gas;
  double mpg;
  
  cout << "Enter Kilometers Traveled: ";
  cin >> kilo_traveled;
  
  cout << "Enter Liters of Gas used: ";
  cin >> liter_gas;
  
  liter_gas = liter_gas / 3.785411784;
  kilo_traveled = kilo_traveled * .62137;
  mpg = kilo_traveled / liter_gas;
  
  cout << "Your MPG is " << mpg << "\n";
  
  return 0;
}
