// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 9
// Date:      <11/15/18>
// This file contains the main function
#include <iostream>
#include "dateType.h"
#include "timeType.h"
using namespace std;
main()
{
  dateType t1;
  timeType d1;
  t1.setDate(9,45,1999);
  cout << t1;
  cout << endl << d1;
  return 0;
}
