// File:      <timeType.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 8
// Date:      <11/7/18>
// This file contains the timeType class

#include "timeType.h"
#include <iostream>
#include <string>
//contructing new objects
timeType::timeType(int h = 0, int min = 0)
{
  setTime(h, min);
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
  }
  if (min >= 0 && min <= 60)
    minutes = min;
  else
  {
    hours = 0;
    minutes = 0;
    cout << "Error in time entered, clock reset" << "\n";
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

//prints the time and formats with 12 hour clock and am/pm
void timeType::print() const
{
  string tmpTime;
  if (hours >= 0 && hours <= 11)
    tmpTime = "a.m.";
  else
    tmpTime = "p.m.";
  if (hours >= 12)
  {
    cout << "The current time is: " << hours - 12 << ":" << minutes << " " << tmpTime << "\n";
  }
  else if (hours == 0)
  {
    cout << "The current time is: " << 12 << ":" << minutes << " " << tmpTime << "\n";
  }
  else
  {
    cout << "The current time is: " << hours << ":" << minutes << " " << tmpTime << "\n";
  }
}

/*
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
*/
