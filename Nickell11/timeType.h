// File:      <timeType.h>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 11
// Date:      <12/5/18>
// This file contains the timeType header

#ifndef _timeType_h_
#define _timeType_h_
#include <iostream>
using namespace std;

class timeType
{
  friend ostream& operator<<(ostream&, const timeType&);
  //friend istream& operator>>(istream&, timeType&);
  public:
    // method - constructor
    // description - construct a new timeType object
    // preconditions - none
    // postconditions - timeType object created
    timeType();
    timeType(int hours, int minutes);
    
    // method - time setter
    // description - set a new time
    // preconditions - valid time or will spit out a message
    // postconditions - timeType object created or error message given
    void setTime(int hours, int minutes);
    
    // method - get hour
    // description - returns the hours
    // preconditions - none
    // postconditions - returned hours
    int getHours() const;
    
    // method - get minutes
    // description - returns the minutes
    // preconditions - none
    // postconditions - returned minutes
    int getMinutes() const;
    
    // method - operator==
    // description - see if object is equal to another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator==(const timeType& x) const;
    
    // method - operator>=
    // description - see if object is equal or greater than another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator>=(const timeType& x) const;
    
    // method - operator<=
    // description - see if object is equal or less than another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator<=(const timeType& x) const;
    
    // method - operator!=
    // description - see if object is not equal to another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator!=(const timeType& x) const;
    
    // method - operator<
    // description - see if object is less than another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator<(const timeType& x) const;
    
    // method - operator>
    // description - see if object is greater than another
    // preconditions - two time objects
    // postconditions - boolean
    bool operator>(const timeType& x) const;
    
  private:
    int hours;
    int minutes;
};

#endif
