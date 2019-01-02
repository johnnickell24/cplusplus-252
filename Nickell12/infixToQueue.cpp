// File:      <infixToQueue.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 12
// Date:      <12/12/18>
// This file contains the infixToQueue function

#include "token.h"
#include "stackType.h"
#include "queueType.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void infixToQueue(queueType<Token>& q, Token& t, queueType<Token>& post)
{
    Token tmp;
    
    cout << "enter your infix expression ";
    cin >> tmp;
   
    while (tmp.Valid()){
        q.addQueue(tmp);
        post.addQueue(tmp);
        cin >> tmp;
    }
    cout << "My infix is: ";
    while (not q.isEmptyQueue()){
        cout << q.front() << " ";
        q.deleteQueue();
        }
    
    cout << endl;
}
