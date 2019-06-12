//
// Created by zy on 6/12/2019.
//

//第二部分 第一题

#include "Test5_2.h"

void Test5_2::RunTest2()
{

    TreeNode *tree;
    int initVal;
    cout << "insert nodes, input -1 to end" << endl;
    while (true)
    {
        cin >> initVal;
        if (initVal == -1)
            break;
        insertNode(tree, initVal);
    }
    minimumDiff(tree);
}

int Test5_2::minimumDiff(TreeNode *root)
{


}

void Test5_2::insertNode(TreeNode *root, int val)
{
    if (root == nullptr)
        root = new TreeNode(val);
    else if (root->val == x)
        return;
    else if (root->val > x)
    {
        insertNode(root->left, val);
    } else if (root->val < x)
    {
        insertNode(root->right, val);
    }
}

void Test5_2::dfs(TreeNode *root)
{

}
