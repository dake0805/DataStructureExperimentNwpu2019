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
    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *list = nullptr;
        ListNode *listBegin = list;
        for (int i = 0; i < lists.size(); i++)
        {

        }

    }

    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *listNode = new ListNode(-0xffffffff);
        ListNode *listNodeBegin = listNode;
        while (l1 != nullptr || l2 != nullptr)
        {
            if (l1 != nullptr && l2 != nullptr)
            {
                if (l1->val > l2->val)
                {
                    listNode->next = new ListNode(l2->val);
                    listNode = listNode->next;
                    listNode->next = new ListNode(l1->val);
                } else
                {
                    listNode->next = new ListNode(l1->val);
                    listNode = listNode->next;
                    listNode->next = new ListNode(l2->val);
                }
                l1 = l1->next;
                l2 = l2->next;
            } else
            {
                if (l1 != nullptr)
                {
                    listNode->next = l1;
                } else
                {
                    listNode->next = l2;
                }
            }
        }
        listNodeBegin = listNodeBegin->next;
        return listNodeBegin;
    }
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_SOLUTION_H
