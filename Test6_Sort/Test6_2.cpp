//
// Created by zy on 6/14/2019.
//

#include "Test6_2.h"

void Test6_2::RunTest2()
{
    string *array;
    int initN;
    cin >> initN;
    this->n = initN;
    array = new string[n];
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        array[i] = s;
    }

}

string Test6_2::LargestNumber(string *array)
{

}

void Test6_2::qSort2(string *&array, int start, int end)
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
    qSort2(array, start, left - 1);
    qSort2(array, left + 1, end);
}

void Test6_2::sort(int *&array, int i, int j)
{
    int t = array[i];
    array[i] = array[j];
    array[j] = t;
}
