//
// Created by zy on 4/10/2019.
//

#include <iostream>
#include "Stack.h"

using namespace std;

int find(int x, int *num2, int n);

void test2_1()
{
    int n1, n2;
    cin >> n1 >> n2;
    int *nums1 = new int[n1];
    int *nums2 = new int[n2];
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];
    for (int i = 0; i < n1; i++)
    {
        cout << find(nums1[i], nums2, n2) << " ";
    }
}

int find(int x, int *nums2, int n)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums2[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        return index;
    for (int i = index; i < n; i++)
    {
        if (nums2[i] > x)
            return nums2[i];
    }
    return -1;
}