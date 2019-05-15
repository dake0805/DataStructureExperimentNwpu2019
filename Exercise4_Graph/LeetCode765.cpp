//
// Created by zy on 5/15/2019.
//

#include "LeetCode765.h"

LeetCode765::LeetCode765()
{

}

LeetCode765::~LeetCode765()
{

}

void LeetCode765::RunApplication2()
{
    int t;
    cin >> t;
    rowSize = t;
    for (int i = 0; i < rowSize; i++)
        cin >> row[i];
    cout << minSwapsCouples() << endl;


}

int LeetCode765::minSwapsCouples()
{
    int couples = 0;
    int result = 0;
    int loversPosition[100];
    for (int i = 0; i < rowSize; i++)
    {
        loversPosition[row[i]] = i;
    }

    for (int i = 0; i < rowSize; i += 2)
    {
        int personNow = row[i];
        if (personNow % 2 == 1)
        {
            couples = personNow - 1;
        } else if (personNow % 2 == 0)
        {
            couples = personNow + 1;
        }
        if (loversPosition[couples] != (i + 1))
        {
            swap(i + 1, loversPosition[couples]);       //通过下标交换两个人
            loversPosition[row[loversPosition[couples]]] = loversPosition[couples];
            loversPosition[couples] = i + 1;
            result++;
        }
    }
    return result;

}

void LeetCode765::swap(int i, int j)
{
    int t = row[i];
    row[i] = row[j];
    row[j] = t;
}
