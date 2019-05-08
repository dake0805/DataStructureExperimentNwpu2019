//
// Created by zy on 5/8/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST3_1_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST3_1_H

//第一部分第六题

#include "TNode.h"
#include "Stack.h"

#include <iostream>

using namespace std;

class Test3_1
{
public:

    int SumNumbers(TNode *tree);

    void RunApplication();

private:
    struct LinkListNode
    {
        int val;
        LinkListNode *next = nullptr;

        LinkListNode(int x)
        {
            val = x;
        }
    };

    LinkListNode *resultLinkedList = new LinkListNode(0);
    LinkListNode *currPointer = resultLinkedList;

    void AddResult(int x);
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST3_1_H
