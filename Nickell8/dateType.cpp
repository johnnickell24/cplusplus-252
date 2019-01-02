// File:      <dateType.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 8
// Date:      <11/7/18>
// This file contains the dateType class

#include "dateType.h"
#include <string>
#include <iostream>

//Constructing objects
dateType::dateType(int m = 1, int d = 1, int y = 2000)
{
  setDate(m,d,y);
}

//Setting a new date
void dateType::setDate(int m, int d, int y)
{
  month = m;
  day = d;
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

//prints the date with the name of month rather than number
void dateType::print() const
{
  string tmpMonth;
  
  if (month == 1)
    tmpMonth = "January";
  if (month == 2)
    tmpMonth = "February";
  if (month == 3)
    tmpMonth = "March";
  if (month == 4)
    tmpMonth = "April";
  if (month == 5)
    tmpMonth = "May";
  if (month == 6)
    tmpMonth = "June";
  if (month == 7)
    tmpMonth = "July";
  if (month == 8)
    tmpMonth = "August";
  if (month == 9)
    tmpMonth = "September";
  if (month == 10)
    tmpMonth = "October";
  if (month == 11)
    tmpMonth = "November";
  if (month == 12)
    tmpMonth = "December";
  
  cout << "The date is: " << tmpMonth << " " << day << " , " << year << "\n";
}

/*
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
*/
