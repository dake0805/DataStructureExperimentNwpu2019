//
// Created by zy on 4/3/2019.
//

/**
 * LeetCode 84
 * 给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。

求在该柱状图中，能够勾勒出来的矩形的最大面积。

以上是柱状图的示例，其中每个柱子的宽度为 1，给定的高度为 [2,1,5,6,2,3]。

图中阴影部分为所能勾勒出的最大矩形面积，其面积为 10 个单位。

 *
 * 使用栈的实现
 *
*/
#include "Stack.h"
#include <iostream>
//#include <algorithm>
using namespace std;

int largestRectangleArea(int heights[], int n)
{
    Stack stack;
    int maxarea = 0;
    for (int i = 0; i < n; i++)
    {
        while (!stack.isEmpty() && heights[i] < heights[stack.Top()])
        {
            int index = stack.Top();
            stack.Pop();
            maxarea = max(maxarea, heights[index] * (stack.isEmpty() ? i : (i - stack.Top() - 1)));
        }
        stack.Push(i);
    }
    return maxarea;
}

void RunApplication2()
{
    int n;
    cin >> n;
    int *heights = new int[n + 1];
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        heights[i] = x;
    }
    heights[n] = 0;
    cout << largestRectangleArea(heights, n) << endl;
}