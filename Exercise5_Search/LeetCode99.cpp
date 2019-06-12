//
// Created by zy on 5/29/2019.
//

#include <iostream>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {}
};


void recoverTree(TreeNode *root)
{

    inOrder(root);
    auto temp = first->val;
    first->val = last->val;
    last->val = temp;
}

TreeNode *pre = NULL;
TreeNode *first = NULL;
TreeNode *last = NULL;

void inOrder(TreeNode *root)
{
    if (!root) return;
    inOrder(root->left);
    if (pre && root->val < pre->val)
    {
        if (!first) first = pre;
        last = root;
    }
    pre = root;
    inOrder(root->right);
}

int main()
{
    TreeNode *treeNode = new TreeNode(0);
    recoverTree(treeNode);
}