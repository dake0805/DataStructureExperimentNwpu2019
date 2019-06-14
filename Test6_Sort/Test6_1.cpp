//
// Created by zy on 6/14/2019.
//

#include "Test6_1.h"

void Test6_1::RunTest1()
{

    int initN;
    cin >> initN;
    this->nums = initN;
    data *array = new data[initN];
    for (int i = 0; i < initN; i++)
    {
        int initFirst;
        int initSecond;
        cin >> initFirst >> initSecond;
        array[i].first = initFirst;
        array[i].second = initSecond;
    }
    merge(array);
}

void Test6_1::merge(data *array)
{
    this->qSort(array, nums);
//    for (int i = 0; i < nums; i++)
//    {
//        cout << array[i].first << array[i].second << endl;
//    }
    for (int i = 0; i < nums - 1; i++)
    {
        if (array[i].second >= array[i + 1].first)
        {
            array[i + 1].first = array[i].first;
            continue;
        } else if (array[i].second < array[i + 1].first)
        {
            cout << "[" << array[i].first << "," << array[i].second << "] ";
        }
    }
    cout << "[" << array[nums - 1].first << "," << array[nums - 1].second << "]" << endl;
}
