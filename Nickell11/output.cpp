// File:      <output.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 11
// Date:      <12/5/18>
// This file contains the output function
#include <iomanip>
#include <iostream>
#include "appointmentType.h"
#include "binarySearchTree.h"
void output(bSearchTreeType<appointmentType> appointmentBook)
{
  cout << "Appointments: " << "\n";
  cout << setw(27)  << "Date" << setw(19) << "Time"
  << setw(31) << "Appointments" << "\n";
  appointmentBook.inorderTraversal();
}
