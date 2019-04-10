//
// Created by zy on 4/10/2019.
//

#include "Stack.h"
#include <iostream>

using namespace std;
/**
 * 第二部分 第一题
 * Given a list of daily temperatures T, return a list such that, for each day in the input, tells you how many days you would have to wait until a warmer temperature. If there is no future day for which this is possible, put 0 instead.
   For example, given the list of temperatures T = [73, 74, 75, 71, 69, 72, 76, 73], your output should be [1, 1, 4, 2, 1, 1, 0, 0].
 * @param T 温度
 * @param n 温度数组的长度
 */
//
void test2_2(const int T[], int n)
{
    Stack stack;
    int *result = new int[n]{0};

    for (int i = 0; i < n;)
    {
        if (stack.isEmpty() || T[stack.Top()] >= T[i])
        {
            stack.Push(i);
            i++;
            continue;
        } else
        {
            int index = stack.Pop();
            result[index] = i - index;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
}


//通过控制台输入数据运行
void RunTest2()
{
    int n;
    cout << "Input number of elements in Array" << endl;
    cin >> n;
    int *a = new int[n];
    cout << "Input elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        int element;
        cin >> element;
        if (element < 30 || element > 100)
        {
            cout << "Error.Each temperature will be an integer in the range [30, 100]." << endl;
            return;
        }
        a[i] = element;
    }
    test2_2(a, n);
}

//运行两个测试样例
void TestExample_Test2()
{
    int testArray0[] = {73, 74, 75, 71, 69, 72, 76, 73};
    test2_2(testArray0, 8);
    cout << "Correct answer should be [1,1,4,2,1,1,0,0]" << endl;
    int testArray1[] = {40, 60, 42, 71, 99, 34, 71, 62, 62, 80, 90};
    test2_2(testArray1, 11);
    cout << "Correct answer should be [1,2,1,1,0,1,3,2,1,1,0]" << endl;
    return;
}