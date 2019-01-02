// File:      <appointmentType.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <12/5/18>
// This file contains the appointmentType cpp

#include "appointmentType.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;


ostream& operator<<(ostream& o, const appointmentType& x)
{
  //Taking the attributes and outputing them in order of date-time-message
  o << setw(18) << x.getDate() << setw(12) << x.getTime() << setw(30) << x.getMessage();
      return o;  // don't forget to return the ostream!!!
      //do formatting
}

istream& operator>>(istream& in, appointmentType& x)
{
  //Declaring variables
  int tmpDay;
  int tmpMon;
  int tmpYear;
  char tmp;
  int tmpMin;
  int tmpHour;
  string pmam;
  dateType d;
  timeType t;
  string tmpMessage;
  
  //Taking the date line from the input file
  in >> tmpMon;
  in >> tmp;
  in >> tmpDay;
  in >> tmp;
  in >> tmpYear;
  d.setDate(tmpMon, tmpDay, tmpYear);
  
  //Taking the time line from the input file
  in >> tmpHour;
  in >> tmp;
  in >> tmpMin;
  t.setTime(tmpHour, tmpMin);
  
  //using get line to get the entire message onto a string
  getline(in,tmpMessage);
  
  x.setAppointment(d, t, tmpMessage);
  return in;
}

//Constructing objects
appointmentType::appointmentType(dateType d, timeType t, string m)
{
  //calls the setter
  setAppointment(d,t,m);
}

appointmentType::appointmentType()
{
  //defaults are garbage as listed in intructions
  dateType d;
  timeType t;
  string m;
  setAppointment(d,t,m);
}
//Setting a new appointment
void appointmentType::setAppointment(dateType d, timeType t, string m)
{
  //variables can be changed since error checking was done in the making of date/time objects
  date = d;
  time = t;
  message = m;
}

//Setting a date
void appointmentType::setDate(dateType d)
{
  //setting a new date by calling the set date with the attributes of a given date object
  d.setDate(d.getMonth(),d.getDay(),d.getYear());
}

//Setting a time
void appointmentType::setTime(timeType t)
{
  //setting a new time by calling the set date with the attributes of a given time object
  t.setTime(t.getHours(),t.getMinutes());
}

//Setting a message
void appointmentType::setMessage(string m)
{
  //setting a new message no error checking as it is just a string
  message = m;
}

//getter for date
dateType appointmentType::getDate() const
{
  //returns the dateType object
  return date;
}

//getter for time
timeType appointmentType::getTime() const
{
  //returns the timeType object
  return time;
}

//getter for message
string appointmentType::getMessage() const
{
  //returns the string message
  return message;
}

//compares two objects to see if equal
bool appointmentType::operator==(const appointmentType& x) const
{
  //determines if an appointment is the same date and time
  if (getDate() == x.getDate() && getTime() == x.getTime())
    return true;
  else
    return false;
}

//compares two objects to see if not equal
bool appointmentType::operator!=(const appointmentType& x) const
{
  //determines if an appointment isn't at the same time
  if (getDate() != x.getDate() or getTime() != x.getTime())
    return true;
  else
    return false;
}

//compares two objects to see if greater than or equal to
bool appointmentType::operator>=(const appointmentType& x) const
{
  //determines if an appointment is after or equal to another
  if (getDate() == x.getDate() && getTime() == x.getTime())
    return true;
  if (getDate() == x.getDate() && getTime() > x.getTime())
    return true;
  if (getDate() > x.getDate())
    return true;
  else
    return false;
}

//compares two objects to see if less than or equal to
bool appointmentType::operator<=(const appointmentType& x) const
{
  //determines if an appointment is before or equal to another
  if (getDate() == x.getDate() && getTime() == x.getTime())
    return true;
  if (getDate() == x.getDate() && getTime() < x.getTime())
    return true;
  if (getDate() < x.getDate())
    return true;
  else
    return false;
}

//compares two objects to see if greater than
bool appointmentType::operator>(const appointmentType& x) const
{
  //determines if an appointment is after another
  if (getDate() == x.getDate() && getTime() > x.getTime())
    return true;
  if (getDate() > x.getDate())
    return true;
  else
    return false;
}

//compares two objects if less than
bool appointmentType::operator<(const appointmentType& x) const
{
  //determines if an appointment is before another
  if (getDate() == x.getDate() && getTime() < x.getTime())
    return true;
  if (getDate() < x.getDate())
    return true;
  else
    return false;
}
