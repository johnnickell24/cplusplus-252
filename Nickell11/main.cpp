// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 11
// Date:      <12/5/18>
// This file contains the main function

#include "appointmentType.h"
#include "binarySearchTree.h"
#include "dateType.h"
#include "timeType.h"
#include "string"
using namespace std;
#include <iostream>

void read(const char *argv[] ,bSearchTreeType<appointmentType>&);
void output(bSearchTreeType<appointmentType>);

int main(int argc, const char *argv[])
{
  bSearchTreeType<appointmentType> appointmentBook;
  
  read(argv ,appointmentBook);
  
  output(appointmentBook);
  
  return 0;
}
