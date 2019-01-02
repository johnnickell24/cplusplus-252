// File:      <read.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the read function

#include "appointmentType.h"
#include "arrayListType.h"
#include <fstream>
using namespace std;

void read(arrayListType<appointmentType>& appointments)
{
  string tmp = "";
  appointmentType appt;
  ifstream inf;
  inf.open("data");
  //getline(inf, tmp);
  //cout << tmp;
  //inf >> appt; 
  while ( inf >> appt && !appointments.isFull() )
  {
     appointments.insert(appt);
     //getline(inf, tmp);
     //inf >> appt;
  }
  inf.close();
}
