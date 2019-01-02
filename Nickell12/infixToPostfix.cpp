// File:      <infixToPostfix.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 12
// Date:      <12/12/18>
// This file contains the infixToPostfix function

#include "token.h"
#include "stackType.h"
#include "queueType.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;


void infixToPostfix(queueType<Token>& q, queueType<Token>& post)
{
    stackType<Token> stack;
    Token tok;
    
    while (not post.isEmptyQueue()){
        tok = post.front();
        //cout << tok<<endl;
        if (tok.IsOperand()){
            //cout << "operand" <<endl;
            q.addQueue(tok);}
        
        else if (tok.IsLeftParen())
            stack.push(tok);
        
        else if (tok.IsRightParen()){
            while (not stack.top().IsLeftParen()){
                q.addQueue(stack.top());
                stack.pop();
            }
            if (stack.top().IsLeftParen())
                stack.pop();
        }
        
        else if (tok.IsOperator()){
            //cout<<tok.Precedence()<<endl;
            while (stack.isEmptyStack() == false and stack.top().IsLeftParen() == false and tok.Operator() != '^' and stack.top().Precedence() >= tok.Precedence()){
                q.addQueue(stack.top());
                stack.pop();
            }
            stack.push(tok);
        }
        post.deleteQueue();
    }
    while (not stack.isEmptyStack()){
        q.addQueue(stack.top());
        stack.pop();
    }
}
    
