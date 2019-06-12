//
// Created by zy on 6/12/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_TEST5_2_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_TEST5_2_H

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x)
    {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Test5_2
{
public:
    void RunTest2();

    int minimumDiff(TreeNode *root);

    void insertNode(TreeNode *&root, int x);

    void dfs(TreeNode *root);

private:
    TreeNode *pre = nullptr;
    int res = INT32_MAX;

};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_TEST5_2_H
