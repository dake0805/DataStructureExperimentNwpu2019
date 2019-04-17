//
// Created by zy on 4/17/2019.
//

#include "LeetCode654.h"
#include "BinaryTree.h"
#include <iostream>

using namespace std;

void LeetCode654::RunApplication()
{
    int n;
    cin >> n;
    int *array = new int[n];
    for (int i = 0; i < n; i++)
        cin >> array[i];
    TreeNode654 *treeNode654 = constructMaximumBinaryTree(array, 0, n - 1);

    return;
}

int findMaxIndex(int *array, int left, int right)
{
    int maxIndex = -1;
    int max = -0xffffffff;
    for (int i = left; i <= right; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

TreeNode654 *LeetCode654::constructMaximumBinaryTree(int *nums, int left, int right)
{
    if (right < left)
        return nullptr;
    else if (right == left)
    {
        TreeNode654 *treeNode = new TreeNode654(nums[left]);
        return treeNode;
    }
    int maxElementIndex = findMaxIndex(nums, left, right);
    TreeNode654 *treeNode = new TreeNode654(nums[maxElementIndex]);
    treeNode->left = constructMaximumBinaryTree(nums, left, maxElementIndex - 1);
    treeNode->right = constructMaximumBinaryTree(nums, maxElementIndex + 1, right);
    return treeNode;
}
