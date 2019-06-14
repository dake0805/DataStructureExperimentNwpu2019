//
// Created by zy on 6/14/2019.
//
/**
 * 第一部分第五题
 * 快速排序
 * 递归实现
 */

#include"Test6_1.h"

void Test6_1::qSort(data *&array, int n)
{
    qSortRecursion(array, 0, n - 1);
}

void Test6_1::qSortRecursion(data *&array, int start, int end)
{
    if (start >= end)
        return;
    int mid = array[end].first;
    int left = start;
    int right = end - 1;
    while (left < right)
    {
        while (array[left].first < mid && left < right)
        {
            left++;
        }
        while (array[right].first >= mid && left < right)
        {
            right--;
        }
        swap(array, left, right);
    }
    if (array[left].first >= array[end].first)
        swap(array, left, end);
    else left++;
    qSortRecursion(array, start, left - 1);
    qSortRecursion(array, left + 1, end);
}

void Test6_1::swap(data *&array, int i, int j)
{
    data t = array[i];
    array[i] = array[j];
    array[j] = t;
}

