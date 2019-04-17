//
// Created by zy on 4/17/2019.
//

/**
 * 145. 二叉树的后序遍历
 * 给定一个二叉树，返回它的 后序 遍历。

示例:

输入: [1,null,2,3]
   1
    \
     2
    /
   3

输出: [3,2,1]
 */

#include "LeetCode145.h"

using namespace std;

LeetCode145::LeetCode145()
{}

LeetCode145::~LeetCode145()
{}

void LeetCode145::RunApplication()
{
    BinaryTree binaryTree;
    binaryTree.InitBinaryTree();
    PostorderTraversal(binaryTree.getRoot());
    cout << endl;
}

void LeetCode145::PostorderTraversal(TreeNode *treeNode)
{
    if (treeNode)
    {
        PostorderTraversal(treeNode->leftChild);
        PostorderTraversal(treeNode->rightChild);
        cout << treeNode->data << " ";
    }
}