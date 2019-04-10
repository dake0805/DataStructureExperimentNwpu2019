//
// Created by zy on 4/3/2019.
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


void Stack::Push(int x)
{
    StackNode *newNode = new StackNode(x);
    newNode->next = stackNode;
    stackNode = newNode;
    return;
}

int Stack::Pop()
{
    if (isEmpty())
    {
        cout << "Stack is empty now" << endl;
        return (-1);
    }
    int element = stackNode->data;
    StackNode *oldPtr = stackNode;
    stackNode = stackNode->next;
    delete oldPtr;
    return element;
}

int Stack::Top()
{
    if (isEmpty())
    {
        cout << "Stack is empty now" << endl;
        return (-1);
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