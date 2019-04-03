//
// Created by zy on 3/20/2019.
//

/**
 *
 * 23. Merge k Sorted Lists
 * Merge k sorted linked lists and return it as one sorted list.
 * Analyze and describe its complexity.
 */
/**
 *  n个元素的数组中存了n个链表
 *  其中每个链表内的元素都由小到大排序
 *  将这n个链表内所有的元素由小到大的顺序合并成一个链表
 */

#include <iostream>

using namespace std;

struct ListNode;
typedef ListNode *List;

List mergeKLists(List lists[], int n);

List mergeTwoLists(List l1, List l2);

struct ListNode
{
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(nullptr)
    {}
};

List mergeKLists(List lists[], int size)
{
    if (size < 1)
        return nullptr;
    int left;
    int right;
    while (size >= 2)
    {
        left = 0;
        right = size - 1;
        while (right - left >= 1)
        {
            lists[left] = mergeTwoLists(lists[left], lists[right]);
            left++;
            right--;
            size--;
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

List InitLinkedList(int n)
{
    int x;
    cin >> x;
    List list = new ListNode(x);
    List list1 = list;
    n--;
    while (n--)
    {
        cin >> x;
        list->next = new ListNode(x);
        list = list->next;
    }
    return list1;
}

void PrintList(List list)
{
    while (list != nullptr)
    {
        cout << list->val << " ";
        list = list->next;
    }
}

/*
void RunApplication()
{
    List lists[3] = {nullptr};
    lists[0] = InitLinkedList(3);
    lists[1] = InitLinkedList(3);
    lists[2] = InitLinkedList(4);
    PrintList(mergeKLists(lists, 3));
}
*/
