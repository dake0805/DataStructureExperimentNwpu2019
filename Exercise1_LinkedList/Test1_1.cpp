//
// Created by zy on 3/27/2019.
// Code in UTF-8
//
/**
 * 第一部分 第二题
 *
 * 输入非负整数数组L和非负整数i，求数组A=[L[i],L[L[i]],L[L[L[i]]],…]
及其长度，其中 A 中的元素在 L 中不重复。如
输入：[5,1,0,1,2,6,3]，2
输出：[0,5,6,3,1,1]，6

 */
#include <iostream>

using namespace std;

void Test1_1()
{
    cout << "Test1_1" << endl;
    int n;
    cout << "input length of array" << endl;        //输入数组的长度
    cin >> n;
    cout << "input elements of array" << endl;      //输入数组的元素

    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];

    int i;
    cout << "input i" << endl;
    cin >> i;

    if (i <= 0 || i >= n)
    {
        cout << "array [i] out of range exception" << endl;
        return;
    }

    int num = 0;
    int element;
/**
 * 数组的元素全部为非负整数，所以可以用 -1 作为标记。
 * A中元素在L中不重复，就是原数组里每个元素仅使用一次。
 * 当使用到该元素以后把该处赋值为-1
 * 如果再次查询到此处，值为-1，就是会出现重复元素，结束循环
 */
    while (array[i] > -1)
    {
        element = array[i];
        array[i] = -1;
        cout << element << " ";
        num++;
        i = element;
        /**
         * 如果L[i]的元素超过数组长度，下次访问L[L[i]]就会越界，此时结束程序
         */
        if (i >= n)
        {
            cout << "Exception:Array out of range" << endl;
            return;
        }
    }
    cout << endl << num << endl;
    delete[] array;             //回收堆数组的内存
}
