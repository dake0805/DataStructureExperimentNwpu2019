//
// Created by zy on 4/17/2019.
//

#ifndef DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE654_H
#define DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE654_H


struct TreeNode654
{
    int val;
    TreeNode654 *left;
    TreeNode654 *right;

    TreeNode654(int x) : val(x), left(nullptr), right(nullptr)
    {}
};


class LeetCode654
{
public:
    void RunApplication();

    TreeNode654 *constructMaximumBinaryTree(int nums[], int left, int right);

};


#endif //DATASTRUCTUREEXPERIMENTNWPU2019_LEETCODE654_H
