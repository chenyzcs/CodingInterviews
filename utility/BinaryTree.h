#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include <vector>

#define INF 0xffff

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x = INF) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode *creatTreeNode(int val)
{
    TreeNode *tn = new TreeNode(val);
    return tn;
}

void connectTreeNode(TreeNode *root, TreeNode *left, TreeNode *right)
{
    if (root == nullptr)
        return;
    root->left = left;
    root->right = right;
}

void printTreePreOrder(TreeNode *root)
{
    if (root == nullptr)
        return;
    std::cout << root->val << "-->";
    printTreePreOrder(root->left);
    printTreePreOrder(root->right);
}

#endif // BINARYTREE_H