//
// Created by zy on 5/22/2019.
//
/**
 * 第二部分 第四题
 */

/**
 * 思路：用 Floyd 算法计算到各点的距离
 * 求出到所有其他点的最短距离集合，最后求最短距离中的最大值
 */


#include "Test4_2.h"

void Test4_2::RunApplication2()
{
    getData();
    cout << networkDelay() << endl;
}

void Test4_2::getData()
{
    int initN, initK;
    cout << "input n and k" << endl;
    cin >> initN >> initK;
    n = initN;
    k = initK;
    times.nodeSum = n;
    cout << "input each two nodes and time, input 0 0 0 to end" << endl;
    string node1, node2;
    int time;
    while (true)
    {
        pair<pair<string, string>, int> pair;
        cin >> node1 >> node2 >> time;
        if (node1 == "0" && node2 == "0" && time == 0)
            break;

        pair.first.first = node1;
        pair.first.second = node2;
        pair.second = time;

        times.edges.push_back(pair);
        times.edgeSum++;
    }
}

int Test4_2::networkDelay()
{
    k--;
    //输入节点从1开始计算，故减1
    vector<int> disK(n);
    for (int i = 0; i < n; i++)
    {
        disK[i] = 1000;
        // 用1000标记为距离的最大值
    }
    disK[k] = 0;
    for (int i = 0; i < n; i++)
    {
        for (auto edge:times.edges)
        {
            int u, v, w;
            u = stoi(edge.first.first) - 1;
            v = stoi(edge.first.second) - 1;
            w = edge.second;
            if (disK[u] != 1000 && disK[v] > disK[u] + w)
            {
                disK[v] = disK[u] + w;
            }
        }
    }
    int result = -1;
    for (int r:disK)
    {
        if (result < r)
            result = r;
    }
    if (result != 1000)
        return result;
    return -1;
}
