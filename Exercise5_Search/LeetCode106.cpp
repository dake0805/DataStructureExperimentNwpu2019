//
// Created by zy on 5/29/2019.
//

#include <iostream>
#include <vector>

using namespace std;


struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL)
    {}
};

TreeNode *buildTree(vector<int> &postorder, int s1, int e1, vector<int> &inorder, int s2, int e2);

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder);

TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
{
    int len = inorder.size();
    if (len == 0) return NULL;
    return buildTree(postorder, 0, len - 1, inorder, 0, len - 1);
}

TreeNode *buildTree(vector<int> &postorder, int s1, int e1, vector<int> &inorder, int s2, int e2)
{
    if (s1 > e1 || s2 > e2) return NULL;
    int root_val = postorder[e1];
    TreeNode *root = new TreeNode(root_val);
    int k = 0;
    for (int i = s2; i <= e2; i++)
    {
        if (inorder[i] == root_val)
        {
            k = i;
            break;
        }
    }
    root->left = buildTree(postorder, s1, k - s2 + s1 - 1, inorder, s2, k - 1);
    root->right = buildTree(postorder, e1 - e2 + k, e1 - 1, inorder, k + 1, e2);
    return root;
}

int main()
{
    int a, b;
    vector<int> inorder;
    vector<int> postorder;
    int t;
    cin >> a >> b;
    for (int i = 0; i < a; i++)
    {
        cin >> t;
        inorder.push_back(t);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> t;
        inorder.push_back(t);
    }
    TreeNode *tree = buildTree(inorder, postorder);
    return 0;
}