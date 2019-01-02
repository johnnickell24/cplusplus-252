// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the main function

#include "appointmentType.h"
#include "arrayListType.h"
#include "dateType.h"
#include "timeType.h"
#include "string"
using namespace std;
#include <iostream>
void read(arrayListType<appointmentType>&);
void output(const arrayListType<appointmentType>&);

int main()
{
  arrayListType<appointmentType> appointments;
  read(appointments);
  output(appointments);
  return 0;
}
