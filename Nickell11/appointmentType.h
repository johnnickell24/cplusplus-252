// File:      <appointmentType.h>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 11
// Date:      <12/5/18>
// This file contains the appointmentType header


#ifndef _appointmentType_h_
#define _appointmentType_h_
#include <iostream>
#include "string"
#include "dateType.h"
#include "timeType.h"
using namespace std;

class appointmentType: public dateType, public timeType
{

    
  public:
    // method - constructor
    // destriction - construct a new appointmentType object
    // preconditions - none
    // postconditions - appointmentType object created
    appointmentType(dateType date, timeType time, string message);
    appointmentType();
    
    // method - set appointment
    // destriction - set the appointment
    // preconditions - given good info or will give abck an error
    // postconditions - new appointment is set or if bad info not set
    void setAppointment(dateType d, timeType t, string m);
    void setDate(const dateType d);
    void setTime(const timeType t);
    void setMessage(const string m);
    
    // method - get date
    // destriction - returns the date
    // preconditions - none
    // postconditions - returns the date
    dateType getDate() const;
    
    // method - get time
    // destriction - returns the time
    // preconditions - none
    // postconditions - returned the time
    timeType getTime() const;
    
    // method - get message
    // destriction - returns the string message
    // preconditions - none
    // postconditions - return the message
    string getMessage() const;
    
    // method - operator==
    // destriction - checks if a appointment is equal
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator==(const appointmentType& x) const;
    
    // method - operator>=
    // destriction - checks if a appointment is greater than or equal to another
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator>=(const appointmentType& x) const;
    
    // method - operator<=
    // destriction - checks if a appointment is equal to or less than another
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator<=(const appointmentType& x) const;
    
    // method - operator!=
    // destriction - checks if a appointment is not equal to another
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator!=(const appointmentType& x) const;
    
    // method - operator<
    // destriction - checks if a appointment is less than another
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator<(const appointmentType& x) const;
    
    // method - operator>
    // destriction - checks if a appointment is greater than another
    // preconditions - two appointment objects
    // postconditions - returns a boolean
    bool operator>(const appointmentType& x) const;
    
    
  private:
    dateType date;
    timeType time;
    string message;
};
ostream& operator<<(ostream&, const appointmentType&);
istream& operator>>(istream&, appointmentType&);
#endif
