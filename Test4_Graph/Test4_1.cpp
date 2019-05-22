//
// Created by zy on 5/22/2019.
//

/**
 * 第一部分
 * 第四题
 */

/**
 * dfs判断，成环则不满足条件
 *
 */

#include "Test4_1.h"

vector<int> Test4_1::findOrder()
{
    pre = vector<vector<int>>(courseNum);
    record = vector<int>(courseNum, 0);

    for (auto g:graph.edges)
    {
        (pre[stoi(g.first.first)]).push_back(stoi(g.first.second));
    }

    for (int i = 0; i < courseNum; i++)
    {
        if (record[i] == 0 && !dfs(i))
        {
            result.clear();
            break;
        }
    }
    return result;
}

void Test4_1::RunApplication1()
{
    getData();

    vector<int> res = findOrder();
    for (auto r:res)
        cout << r << " ";

    cout << endl;

}

bool Test4_1::dfs(int i)
{
    if (record[i] == 2) return true;
    if (record[i] == 1) return false;
    record[i] = 1;
    for (auto p : pre[i])
        if (!dfs(p))
            return false;

    result.push_back(i);
    record[i] = 2;
    return true;
}


void Test4_1::getData()
{
    int initCourseNum;
    cout << "input course number" << endl;
    cin >> initCourseNum;
    courseNum = initCourseNum;
    graph.nodeSum = courseNum;

    cout << "input each two nodes, input 0 0 to end" << endl;
    string node1, node2;
    while (true)
    {
        pair<pair<string, string>, int> pair;
        cin >> node1 >> node2;

        if (node1 == "0" && node2 == "0")
            break;

        pair.first.first = node1;
        pair.first.second = node2;

        graph.edges.push_back(pair);
        graph.edgeSum++;
    }
}

