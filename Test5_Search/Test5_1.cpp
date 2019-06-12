//
// Created by zy on 6/12/2019.
//

//第一部分 第一题

#include "Test5_1.h"


void Test5_1::RunTest1()
{
    int initN;
    cin >> initN;
    n = initN;
    nums = new int[n];
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        nums[i] = t;
    }
    int target;
    cin >> target;
    fourSum(target);

}

void Test5_1::fourSum(int target)
{
    __gnu_cxx::hash_map<int, int *> res;
    int res0 = 1;
    qSort(0, n - 1);
    for (int t = 0; t < n; t++)
    {
        if (t > 0 && nums[t] == nums[t - 1]) continue;
        int newTarget = target - nums[t];   // 将四数之和转化为3数

        for (int k = t + 1; k < n; k++)
        {   // 三数变成两数

            if (k > t + 1 && nums[k] == nums[k - 1]) continue;
            int newTarget2 = newTarget - nums[k];
            int i = k + 1, j = n - 1;
            while (i < j)
            {
                if (nums[i] + nums[j] == newTarget2)
                {
                    int result[4] = {nums[t], nums[k], nums[i], nums[j]};
                    res[res0] = result;
                    cout << nums[t] << " " << nums[k] << " " << nums[i] << " " << nums[j] << endl;
                    res0++;
                    while (i < j && nums[i] == nums[i + 1]) ++i;   //去重
                    while (i < j && nums[j] == nums[j - 1]) --j;
                    ++i;
                    --j;
                } else if (nums[i] + nums[j] < newTarget2) ++i;
                else --j;
            }
        }
    }

}

void Test5_1::qSort(int start, int end)
{
    if (start >= end)
        return;
    int mid = nums[end];
    int left = start;
    int right = end - 1;
    while (left < right)
    {
        while (nums[left] < mid && left < right)
        {
            left++;
        }
        while (nums[right] >= mid && left < right)
        {
            right--;
        }
        swap(left, right);
    }
    if (nums[left] >= nums[end])
        swap(left, end);
    else left++;
    qSort(start, left - 1);
    qSort(left + 1, end);
}