//
// Created by zy on 6/14/2019.
//

/**
 * 第一部分 第五题
 * 以每组数据的第一个数字为标准进行排序，然后遍历数组，对符合条件的两个区间合并
 * 使用快速排序
 */
#include "Test6_1.h"

void Test6_1::RunTest1()
{

    int initN;
    cin >> initN;
    if (initN <= 0)
        return;
    this->nums = initN;
    data *array = new data[initN];
    for (int i = 0; i < initN; i++)
    {
        int initFirst;
        int initSecond;
        cin >> initFirst >> initSecond;
        if (initFirst > initSecond)
        {
            cout << "error, first num should less than second num" << endl;
            return;
        }
        array[i].first = initFirst;
        array[i].second = initSecond;
    }
    if (nums == 1)
    {
        cout << "[" << array[0].first << "," << array[0].second << "]" << endl;
        return;
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
