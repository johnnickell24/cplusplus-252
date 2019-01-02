// File:      <dateType.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the dateType class

#include "dateType.h"
#include <string>
#include <iostream>
using namespace std;

// Author: Dan Brekke

// This function returns true if the year input to the
// function is a leap year.

bool leapyear(int year)
{
   if (year % 4 == 0 && year % 100 != 0)
      return true;
   if (year % 400 == 0)
      return true;
   return false;
}

ostream& operator<<(ostream& o,const dateType& peep)
{
  string tmpMonth;

  if (peep.getMonth() == 1)
    tmpMonth = "January";
  if (peep.getMonth() == 2)
    tmpMonth = "February";
  if (peep.getMonth() == 3)
    tmpMonth = "March";
  if (peep.getMonth() == 4)
    tmpMonth = "April";
  if (peep.getMonth() == 5)
    tmpMonth = "May";
  if (peep.getMonth() == 6)
    tmpMonth = "June";
  if (peep.getMonth() == 7)
    tmpMonth = "July";
  if (peep.getMonth() == 8)
    tmpMonth = "August";
  if (peep.getMonth() == 9)
    tmpMonth = "September";
  if (peep.getMonth() == 10)
    tmpMonth = "October";
  if (peep.getMonth() == 11)
    tmpMonth = "November";
  if (peep.getMonth() == 12)
    tmpMonth = "December";
  
  o  << tmpMonth << " " << peep.getDay() << ", " << peep.getYear();
      return o;  // don't forget to return the ostream!!!
}

/*
istream& operator>>(istream& in, dateType& peep)
{
  int tmpDay;
  int tmpMon;
  int tmpYear;
  char tmp;
  in >> tmpDay;
  in >> tmp;
  in >> tmpMon;
  in >> tmp;
  in >> tmpYear;
  peep.setDate(tmpDay, tmpMon, tmpYear);
  return in;
}
*/

//Constructing objects
dateType::dateType(int m = 1, int d = 1, int y = 2000)
{
  setDate(m,d,y);
}
dateType::dateType()
{
  setDate(month=1,day=1,year=2000);
}
//Setting a new date
void dateType::setDate(int m, int d, int y)
{
  bool tmpLeap;
  if (m < 13 && m > 0)
    month = m;
  else
  {
    cout << "Date Error, resetting date" << "\n";
    month = 1;
    day = 1;
    year = 2000;
    return;
  }
  
  tmpLeap = leapyear(y);
  
  if (month == 1)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 2 && tmpLeap == true)
  {
    if (d > 0 && d <= 29)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 2 && tmpLeap == false)
  {
    if (d > 0 && d <= 28)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 3)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 4)
  {
    if (d > 0 && d <= 30)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 5)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 6)
  {
    if (d > 0 && d <= 30)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 7)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 8)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 9)
  {
    if (d > 0 && d <= 30)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 10)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 11)
  {
    if (d > 0 && d <= 30)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  else if (month == 12)
  {
    if (d > 0 && d <= 31)
      day = d;
    else
    {
      cout << "Date Error, resetting date" << "\n";
      month = 1;
      day = 1;
      year = 2000;
      return;
    }
  }
  year = y;
}

//getter for year
int dateType::getYear() const
{
  return year;
}

//getter for month
int dateType::getMonth() const
{
  return month;
}

//getter for day
int dateType::getDay() const
{
  return day;
}

//compares two objects to see if equal
bool dateType::operator==(const dateType& x) const
{
  if (getDay() == x.getDay() && getMonth() == x.getMonth() && getYear() == x.getYear())
    return true;
}

//compares two objects to see if not equal
bool dateType::operator!=(const dateType& x) const
{
  if (getDay() != x.getDay() or getMonth() != x.getMonth() or getYear() != x.getYear())
    return true;
}

//compares two objects to see if greater than or equal to
bool dateType::operator>=(const dateType& x) const
{
  if (getDay() == x.getDay() && getMonth() == x.getMonth() && getYear() == x.getYear())
    return true;
  if (getYear() > x.getYear())
    return true;
  if (getYear() == x.getYear() && getMonth() > x.getMonth())
    return true;
  if (getYear() == x.getYear() && getMonth() == x.getMonth() && getDay() > x.getDay())
    return true;
  else
    return false;
}

//compares two objects to see if less than or equal to
bool dateType::operator<=(const dateType& x) const
{
  if (getDay() == x.getDay() && getMonth() == x.getMonth() && getYear() == x.getYear())
    return true;
  if (getYear() < x.getYear())
    return true;
  if (getYear() == x.getYear() && getMonth() < x.getMonth())
    return true;
  if (getYear() == x.getYear() && getMonth() == x.getMonth() && getDay() < x.getDay())
    return true;
  else
    return false;
}

//compares two objects to see if greater than
bool dateType::operator>(const dateType& x) const
{
  if (getYear() > x.getYear())
    return true;
  if (getYear() == x.getYear() && getMonth() > x.getMonth())
    return true;
  if (getYear() == x.getYear() && getMonth() == x.getMonth() && getDay() > x.getDay())
    return true;
  else
    return false;
}

//compares two objects if less than
bool dateType::operator<(const dateType& x) const
{
  if (getYear() < x.getYear())
    return true;
  if (getYear() == x.getYear() && getMonth() < x.getMonth())
    return true;
  if (getYear() == x.getYear() && getMonth() == x.getMonth() && getDay() < x.getDay())
    return true;
  else
    return false;
}
