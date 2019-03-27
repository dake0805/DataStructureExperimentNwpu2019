//
// Created by zy on 3/20/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_SOLUTION_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_SOLUTION_H

#include <vector>

using namespace std;


struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL)
    {}
};


class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        ListNode *nextTemp;
        while (curr != nullptr)
        {
            nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
        return curr;
    }
};

#endif //DATASTRUCTUREEXPERIMENTNWPU2019_SOLUTION_H
