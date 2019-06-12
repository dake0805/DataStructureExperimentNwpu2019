//
// Created by zy on 6/12/2019.
//

//第二部分 第一题

#include "Test5_2.h"

void Test5_2::RunTest2()
{

    TreeNode *tree = nullptr;
    int initVal;
    cout << "insert nodes, input -1 to end" << endl;
    while (true)
    {
        cin >> initVal;
        if (initVal == -1)
            break;
        insertNode(tree, initVal);
    }
    cout << minimumDiff(tree) << endl;
}

int Test5_2::minimumDiff(TreeNode *root)
{
    dfs(root);
    return res;

}


/**
 * 递归插入BST的节点
 * @param root
 * @param x
 */
void Test5_2::insertNode(TreeNode *&root, int x)
{
    if (root == nullptr)
        root = new TreeNode(x);
    else if (root->val == x)
        return;
    else if (root->val > x)
    {
        insertNode(root->left, x);
    } else if (root->val < x)
    {
        insertNode(root->right, x);
    }
}

/**
 * dfs遍历树，计算结果
 * @param root
 */
void Test5_2::dfs(TreeNode *root)
{
    if (root == nullptr)
        return;
    dfs(root->left);
    if (pre != nullptr)
    {
        res = ((root->val - pre->val) < res) ? (root->val - pre->val) : res;
    }
    pre = root;
    dfs(root->right);
}
