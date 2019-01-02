// File:      <main5.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   1
// Date:      <9/6/18>

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Program Description
// This program gives a monthly payment, total amount paid, and total interest when given the loan amount, APR and term of the loan.

int main()
{
  cout << fixed << showpoint << setprecision(2);
  double loan_amount;
  double APR;
  int term_of_loan;
  double monthly_payment;
  double total_amount;
  double total_interest;
  
  cout << "Please enter the loan amount: ";
  cin >> loan_amount;
  
  cout << "Please enter the APR: ";
  cin >> APR;
  
  cout << "Please enter the term of the loan: ";
  cin >> term_of_loan;
  
  monthly_payment = ((APR * .01) * loan_amount) / 
  (1 - pow(1+(APR * .01),(-1 * term_of_loan)));
  
  total_amount = monthly_payment * term_of_loan;
  
  total_interest = total_amount - loan_amount;
  
  cout << "The monthly payment is " << monthly_payment << "\n";
  
  cout << "The total amount paid is " << total_amount << "\n";
  
  cout << "The total amount of interest paid is " << total_interest << "\n";
  
  return 0;
}
