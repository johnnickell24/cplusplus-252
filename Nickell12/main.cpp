// File:      <main.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 12
// Date:      <12/12/18>
// This file contains the main function

#include "token.h"
#include "stackType.h"
#include "queueType.h"
#include <iostream>
#include <string>
using namespace std;

void infixToQueue(queueType<Token>& q, Token& t, queueType<Token>& post);
void infixToPostfix(queueType<Token>& q, queueType<Token>& post);
void evaluateOutput(queueType<Token> q);

int main()
{
   Token t;
   queueType<Token> q;
   queueType<Token> post;
   
   
   infixToQueue(q,t, post);
   infixToPostfix(q, post);
   evaluateOutput(q);
   return 0;
}
