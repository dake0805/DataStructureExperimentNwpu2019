//
// Created by zy on 5/8/2019.
//

#include "Test3_2.h"

using namespace std;

/**
 * 通过队列，每层的所有节点进入队列，比较获得最大值，每层的最大值放入 vector 内作为结果
 * @param tree  树的根节点
 * @return      返回的结果vector
 */
vector<int> Test3_2::LargestValue(TNode *tree)
{
    queue<TNode *> queue;
    int maxval;
    vector<int> result;
    if (tree == nullptr)
        return result;
    queue.push(tree);
    while (!queue.empty())
    {
        int size = queue.size();
        TNode *t = queue.front();
        maxval = t->value;
        for (int i = 0; i < size; i++)
        {
            queue.pop();
            if (t->value > maxval)
                maxval = t->value;
            if (t->leftSubT)
                queue.push(t->leftSubT);
            if (t->rightSubT)
                queue.push(t->rightSubT);
            t = queue.front();
        }
        result.push_back(maxval);
    }
    return result;
}

void Test3_2::RunApplication2()
{
    TNode *tree = new TNode(1);
    tree->leftSubT = new TNode(3);
    tree->rightSubT = new TNode(2);
    tree->leftSubT->leftSubT = new TNode(5);
    tree->leftSubT->rightSubT = new TNode(3);
    tree->rightSubT->rightSubT = new TNode(9);
    vector<int> result = LargestValue(tree);
    for (int x:result)
        cout << x << " ";
    cout << endl;
}