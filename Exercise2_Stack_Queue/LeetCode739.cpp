//
// Created by zy on 4/3/2019.
//
/**
 * LeetCode 739
 *
 根据每日 气温 列表，请重新生成一个列表，对应位置的输入是你需要再等待多久温度才会升高的天数。如果之后都不会升高，请输入 0 来代替。

例如，给定一个列表 temperatures = [73, 74, 75, 71, 69, 72, 76, 73]，你的输出应该是 [1, 1, 4, 2, 1, 1, 0, 0]。

提示：气温 列表长度的范围是 [1, 30000]。每个气温的值的都是 [30, 100] 范围内的整数。
 */

/**
 * Run Input Example
 * 8
 * 73 74 75 71 69 72 76 73
 */

#include "Stack.h"
#include <iostream>

using namespace std;

void dailyTemperatures(int T[], int n)
{
    Stack stack;
    int *result = new int[n];
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

void RunApplication()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = x;
    }
    dailyTemperatures(a, n);
}