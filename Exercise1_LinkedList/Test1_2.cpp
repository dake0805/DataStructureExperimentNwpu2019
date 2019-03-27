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
        /**
         * 从第i个柱子向左找，找到所有大于等于array[i]的柱子
         * 下一个循环向右找
         * 这样就可以找到以i为中心 高度为array[i]的长方形的面积
         * 然后与当前最大值max比较，循环结束找到最大值
         * 时间复杂度为 O(n2)
         *
         */

        //如果第i个柱子相邻的柱子高度相同，结果相同，可以跳过
        int privous = 0;
        if (privous == array[i])
            continue;

        int left;
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
        privous = array[i];
    }
    cout << max << endl;
    delete[] array;
}