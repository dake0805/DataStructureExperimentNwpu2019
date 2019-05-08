//
// Created by zy on 4/10/2019.
//
#include <iostream>
#include "Stack.h"

using namespace std;

Stack::Stack()
{
    stackNode = nullptr;
}

Stack::~Stack()
{
    Stack::Clear();
}


void Stack::Push(TNode *x)
{
    StackNode *newNode = new StackNode(x);
    newNode->next = stackNode;
    stackNode = newNode;
    return;
}

TNode *Stack::Pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty now" << endl;
        return nullptr;
    }
    TNode *element = stackNode->data;
    StackNode *oldPtr = stackNode;
    stackNode = stackNode->next;
    delete oldPtr;
    return element;
}

TNode *Stack::Top()
{
    if (isEmpty())
    {
        cout << "Stack is empty now" << endl;
        return nullptr;
    }
    return stackNode->data;
}

bool Stack::isEmpty()
{
    return (!stackNode);
}

void Stack::Clear()
{
    while (!isEmpty())
        Pop();
}