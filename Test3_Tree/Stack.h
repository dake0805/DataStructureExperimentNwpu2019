//
// Created by zy on 4/10/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H

#include "TNode.h"

struct StackNode
{
    TNode *data = 0;
    StackNode *next = nullptr;

    StackNode(TNode *x)
    {
        data = x;
    }
};

class Stack
{
private:
    StackNode *stackNode;
public:
    Stack();

    ~Stack();

    bool isEmpty();

    void Push(TNode* x);

    TNode* Pop();

    TNode* Top();

    void Clear();
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H
