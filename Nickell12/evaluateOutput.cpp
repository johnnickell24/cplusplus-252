// File:      <evaluateOutput.cpp>
// Name:      <John Nickell>
// Class:     CSIS 252
// Program:   Assignment 12
// Date:      <12/12/18>
// This file contains the evaluateOutput function

#include "token.h"
#include "stackType.h"
#include "queueType.h"
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

void evaluateOutput(queueType<Token> q){
    stackType<Token> resultStack;
    queueType<Token> copy = q;
  
    Token resultTok;
    
    
    while (not q.isEmptyQueue()){
        resultTok = q.front();
        if (resultTok.IsOperand())
            resultStack.push(resultTok);
        
        else if (resultTok.IsOperator()){
            int tmp1 = resultStack.top().Operand();
            resultStack.pop();
            int tmp2 = resultStack.top().Operand();
            resultStack.pop();
            
            if (resultTok.Operator() == '+')
                resultStack.push(tmp2+tmp1);
            if (resultTok.Operator() == '-')
                resultStack.push(tmp2-tmp1);
            if (resultTok.Operator() == '*')
                resultStack.push(tmp2*tmp1);
            if (resultTok.Operator() == '/')
                resultStack.push(tmp2/tmp1);
            if (resultTok.Operator() == '^')
                resultStack.push(tmp2^tmp1);
        }
        q.deleteQueue();
    }
    
    cout << "The postfix expression is: ";
    while (not copy.isEmptyQueue()){
        cout << copy.front() << " ";
        copy.deleteQueue();
    }
    cout<<endl;
    
    int result = resultStack.top().Operand();
    cout << "The result is: " << result << "\n";
}
