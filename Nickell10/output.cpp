// File:      <output.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the output function
#include <iomanip>
#include <iostream>
#include "appointmentType.h"
#include "arrayListType.h"
void output(const arrayListType<appointmentType>& appointments)
{
  appointments.print();
}
