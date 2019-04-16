//
// Created by zy on 4/16/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_BINARYTREE_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_BINARYTREE_H


class BinaryTree
{
private:
    struct TreeNode
    {
        TreeNode(int x)
        {
            data = x;
        }

        int data;
        TreeNode *leftChild = nullptr;
        TreeNode *rightChild = nullptr;
    };

    TreeNode *root = nullptr;
    TreeNode *current = nullptr;

public:
    BinaryTree();

    bool isEmpty();

    void PreorderTraversal();

    void InorderTraversal();

    void PostorderTraversal();


};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_BINARYTREE_H
