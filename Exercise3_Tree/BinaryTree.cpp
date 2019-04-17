//
// Created by zy on 4/16/2019.
//

#include "BinaryTree.h"

#include <iostream>

using namespace std;

BinaryTree::BinaryTree()
{

}

bool BinaryTree::isEmpty()
{
    return !(this->root);
}

void BinaryTree::InitBinaryTree()
{
    InsertTreeNode(this->root);
}

void BinaryTree::InsertTreeNode(TreeNode *&rootNode)
{
    int element;
    if (!rootNode)
    {
        cout << "Input Node, Input -1 means null" << endl;
        cin >> element;
        if (element == -1)
            return;
        rootNode = new TreeNode(element);
        InsertTreeNode(rootNode->leftChild);
        InsertTreeNode(rootNode->rightChild);
    }
    return;
}
