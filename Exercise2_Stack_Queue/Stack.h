//
// Created by zy on 4/10/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H

struct StackNode
{
    int data = 0;
    StackNode *next = nullptr;

    StackNode(int x)
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

    void Push(int x);

    int Pop();

    int Top();

    void Clear();
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_STACK_H
