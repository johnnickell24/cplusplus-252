// File:      <read.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 11
// Date:      <12/5/18>
// This file contains the read function

#include "appointmentType.h"
#include "binarySearchTree.h"
#include <fstream>
#include <iostream>

using namespace std;

void read(const char *argv[], bSearchTreeType<appointmentType>& appointmentBook)
{
  appointmentType tmp;
  bool success=true;
  ifstream inf;
  inf.open(argv[1]);
  if (inf.fail())
   {
      cerr << "error opening inputfile: '" 
           << argv[1] << "' doesn't exist?\n";
   }
   
  else{
    inf >> tmp;
    while ( !inf.eof() )
    {
        appointmentBook.insert(tmp);
        inf >> tmp;
    }
  }
}


