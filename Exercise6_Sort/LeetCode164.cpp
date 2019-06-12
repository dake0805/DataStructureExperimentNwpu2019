//
// Created by zy on 6/12/2019.
//

#include "LeetCode164.h"

void LeetCode164::qSort(int start, int end)
{
    if (start >= end)
        return;
    int mid = array[end];
    int left = start;
    int right = end - 1;
    while (left < right)
    {
        while (array[left] < mid && left < right)
        {
            left++;
        }
        while (array[right] >= mid && left < right)
        {
            right--;
        }
        swap(left, right);
    }
    if (array[left] >= array[end])
        swap(left, end);
    else left++;
    qSort(start, left - 1);
    qSort(left + 1, end);
}

void LeetCode164::RunApplication1()
{
    int n;
    cin >> n;
    array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    if (n < 2)
    {
        cout << 0;
        return;
    }
    qSort(0, n - 1);
    int maxGap = -INT32_MAX;
    for (int i = 1; i < n; i++)
    {
        maxGap = max(array[i] - array[i - 1], maxGap);
    }
    cout << maxGap << endl;
}

void LeetCode164::swap(int i, int j)
{
    int t = array[i];
    array[i] = array[j];
    array[j] = t;
}

int LeetCode164::max(int a, int b)
{
    if (a >= b)
        return a;
    else return b;
}
