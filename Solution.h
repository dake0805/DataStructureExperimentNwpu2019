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
        if (lists.size() < 1)
            return nullptr;
        int left;
        int right;
        while (lists.size() >= 2)
        {
            left = 0;
            right = lists.size() - 1;
            while (right - left >= 1)
            {
                lists[left] = mergeTwoLists(lists[left], lists[right]);
                left++;
                right--;
                lists.pop_back();
            }
        }
        return lists[0];
    }


    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
    {
        ListNode *listNode = new ListNode(-0xffffffff);
        ListNode *listNodeBegin = listNode;
        ListNode *l1Before;
        ListNode *l2Before;
        if (l1 == nullptr)
            return l2;
        if (l2 == nullptr)
            return l1;
        while (l1 != nullptr && l2 != nullptr)
        {
            {
                l2Before = l2;
                l1Before = l1;
                if (l1->val > l2->val)
                {
                    listNode->next = new ListNode(l2->val);
                    listNode = listNode->next;
                    l2 = l2->next;
                    delete l2Before;
                } else if (l1->val == l2->val)
                {
                    listNode->next = new ListNode(l2->val);
                    listNode = listNode->next;
                    listNode->next = new ListNode(l1->val);
                    listNode = listNode->next;
                    l1 = l1->next;
                    l2 = l2->next;
                    delete l1Before;
                    delete l2Before;
                } else
                {
                    listNode->next = new ListNode(l1->val);
                    listNode = listNode->next;
                    l1 = l1->next;
                    delete l1Before;
                }
                continue;
            }
        }

        if (l1 != nullptr)
        {
            listNode->next = l1;
        } else
        {
            listNode->next = l2;
        }

        listNodeBegin = listNodeBegin->next;
        return listNodeBegin;
    }
};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_SOLUTION_H
