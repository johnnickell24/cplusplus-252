// File:      <dateType.h>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 10
// Date:      <11/28/18>
// This file contains the dateType header

#ifndef _dateType_h_
#define _dateType_h_
#include <iostream>
using namespace std;

class dateType
{

    
  public:
    // method - constructor
    // destriction - construct a new dateType object
    // preconditions - none
    // postconditions - dateType object created
    dateType(int month, int day, int year);
    dateType();
    
    // method - set date
    // destriction - set the date
    // preconditions - valid date is input
    // postconditions - new date is set
    void setDate(int month, int day, int year);
    
    // method - get year
    // destriction - returns the year
    // preconditions - none
    // postconditions - returns the year
    int getYear() const;
    
    // method - get month
    // destriction - returns the month
    // preconditions - none
    // postconditions - returned the month
    int getMonth() const;
    
    // method - constructor
    // destriction - construct a new dateType object
    // preconditions - none
    // postconditions - dateType object created
    int getDay() const;
    
    // method - operator==
    // destriction - checks if a date is equal
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator==(const dateType& x) const;
    
    // method - operator>=
    // destriction - checks if a date is greater than or equal to another
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator>=(const dateType& x) const;
    
    // method - operator<=
    // destriction - checks if a date is equal to or less than another
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator<=(const dateType& x) const;
    
    // method - operator!=
    // destriction - checks if a date is not equal to another
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator!=(const dateType& x) const;
    
    // method - operator<
    // destriction - checks if a date is less than another
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator<(const dateType& x) const;
    
    // method - operator>
    // destriction - checks if a date is greater than another
    // preconditions - two date objects
    // postconditions - returns a boolean
    bool operator>(const dateType& x) const;
    
    
  private:
    int month;
    int day;
    int year;
};
ostream& operator<<(ostream&, const dateType&);
//istream& operator>>(istream&, dateType&);
#endif
  
  
