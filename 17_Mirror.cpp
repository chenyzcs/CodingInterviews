#include <iostream>
#include "utility/BinaryTree.h"

using namespace std;

void Mirror(TreeNode *pRoot);

int main()
{
    return 0
}

void Mirror(TreeNode *pRoot)
{
    if (pRoot == nullptr)
        return nullptr;

    TreeNode *tmp = pRoot->left;
    pRoot->left = pRoot->right;
    pRoot->right = tmp;
    Mirror(pRoot->left);
    Mirror(pRoot->right);
}