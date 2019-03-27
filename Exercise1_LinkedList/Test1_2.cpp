//
// Created by zy on 3/27/2019.
//
/**
 * 第二部分 第二题
 * 输入正整数数组 L，其元素值表示高度，元素位表示宽度，求 L 区域中的最
大长方形面积。如
输入：[2,1,5,6,2,3]
输出：10
 */
#include <iostream>

using namespace std;

void test1_2()
{
    int n;
    cout << "test1_2" << endl;
    cout << "input array length" << endl;
    cin >> n;                 //数组的元素个数
    cout << "input array elements" << endl;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int max = 0;              //最大面积

    for (int i = 0; i < n; i++)         //从0开始 第i个柱子
    {
        int left;
        /**
         * 从第i个柱子向左找，找到
         *
         */
        for (left = i - 1; left >= 0; left--)
        {
            if (array[left] < array[i])
                break;
        }
        int right;
        for (right = i + 1; right < n; right++)
        {
            if (array[right] < array[i])
                break;
        }
        int tmp = (right - left - 1) * array[i];
        max = (max > tmp) ? max : tmp;
    }
    cout << max << endl;
    delete[] array;
}