// File:      <timeType.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the timeType class

#include "timeType.h"
#include <iostream>
#include <string>

ostream& operator<<(ostream& o,const timeType& peep)
{
  string tmpTime;
  int tmpMinutes;
  
  if (peep.getHours() >= 0 && peep.getHours() <= 11)
    tmpTime = "a.m.";
  else
    tmpTime = "p.m.";
  
  if (peep.getHours() > 12 && peep.getMinutes() < 10)
  {
    o << peep.getHours() - 12 << ":" << "0" << peep.getMinutes() << " " << tmpTime;
    return o;
  }
  else if (peep.getHours() > 12)
  {
    o << peep.getHours() - 12 << ":" << peep.getMinutes() << " " << tmpTime;
    return o;
  }
  else if (peep.getHours() == 0 && peep.getMinutes() < 10)
  {
    o << 12 << ":" << "0" << peep.getMinutes() << " " << "AM";
    return o;
  }
  else if (peep.getHours() == 0)
  {
    o << 12 << ":" << peep.getMinutes() << " " << tmpTime;
    return o;
  }
  else if (peep.getMinutes() < 10)
  {
    o << peep.getHours() << ":" << "0" << peep.getMinutes() << " " << tmpTime;
    return o;
  }
  else
  {
    o << peep.getHours() << ":" << peep.getMinutes() << " " << tmpTime;
    return o;
  }
}

/*
istream& operator>>(istream& in, timeType& peep)
{
   int tmpMin;
   int tmpHour;
   char tmp;
   string pmam;
   in >> tmpHour;
   in >> tmp;
   in >> tmpMin;
   in >> pmam;
   if (pmam == "PM" && tmpHour != 12)
     tmpHour += 12;
   peep.setTime(tmpHour, tmpMin);
   return in;
}
*/

//contructing new objects
timeType::timeType(int h = 0, int min = 0)
{
  setTime(h, min);
}
timeType::timeType()
{
  setTime(hours=0, minutes=0);
}
//setting a new time, if not valid then object is reset
void timeType::setTime(int h, int min)
{
  if (h >= 0 && h <= 23)
    hours = h;
  else
  {
    hours = 0;
    minutes = 0;
    cout << "Error in time entered, clock reset" << "\n";
    return;
  }
  if (min >= 0 && min < 60)
    minutes = min;
  else
  {
    hours = 0;
    minutes = 0;
    cout << "Error in time entered, clock reset" << "\n";
    return;
  }
}

//getter for hours
int timeType::getHours() const
{
  return hours;
}

//getter for minutes
int timeType::getMinutes() const
{
  return minutes;
}

//compares two objects to see if equal
bool timeType::operator==(const timeType& x) const
{
  if (getHours() == x.getHours() && getMinutes() == x.getMinutes())
    return true;
}

//compares two objects to see if not equal
bool timeType::operator!=(const timeType& x) const
{
  if (getHours() != x.getHours() or getMinutes() != x.getMinutes())
    return true;
}

//compares two objects to see if equal or greater than
bool timeType::operator>=(const timeType& x) const
{
  if (getHours() == x.getHours() && getMinutes() == x.getMinutes())
    return true;
  if (getHours() > x.getHours())
    return true;
  if (getHours() == x.getHours() && getMinutes() > x.getMinutes())
    return true;
  else
    return false;
}

//compares two objects to see if equal or less than
bool timeType::operator<=(const timeType& x) const
{
  if (getHours() == x.getHours() && getMinutes() == x.getMinutes())
    return true;
  if (getHours() < x.getHours())
    return true;
  if (getHours() == x.getHours() && getMinutes() < x.getMinutes())
    return true;
  else
    return false;
}

//compares two objects to see if greater than
bool timeType::operator>(const timeType& x) const
{
  if (getHours() > x.getHours())
    return true;
  if (getHours() == x.getHours() && getMinutes() > x.getMinutes())
    return true;
  else
    return false;
}

//compares two objects to see if less than
bool timeType::operator<(const timeType& x) const
{
  if (getHours() < x.getHours())
    return true;
  if (getHours() == x.getHours() && getMinutes() < x.getMinutes())
    return true;
  else
    return false;
}
