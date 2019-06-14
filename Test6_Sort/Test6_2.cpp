//
// Created by zy on 6/14/2019.
//
/**
 * 第二部分第五题
 * 以string存储数据，对每两个元素满足 a+b>b+a 使a在b的前面
 * string的大于号重载类似字典序，满足题目从高位到低位比较的条件
 * 使用冒泡排序
 */
#include "Test6_2.h"

void Test6_2::RunTest2()
{
    string *array;
    int initN;
    cin >> initN;
    if (initN <= 0)
        return;
    this->n = initN;

    array = new string[n];
    for (int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        array[i] = to_string(s);
    }

    cout << LargestNumber(array) << endl;
}

string Test6_2::LargestNumber(string *array)
{
    Sort2(array, n);
    string result;
    for (int i = 0; i < n; i++)
        result += array[i];
    return result;
}

void Test6_2::Sort2(string *&array, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = i + 1; j < n; j++)
        {
            string t1 = array[i];
            string t2 = array[j];
            if (t1 + t2 < t2 + t1)
            {
                array[i] = t2;
                array[j] = t1;
                flag = true;
            }
        }
        if (!flag)
            break;
    }
}
