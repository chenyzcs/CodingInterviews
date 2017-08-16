#include <iostream>
#include "utility/BinaryTree.h"

using namespace std;

TreeNode *Convert(TreeNode *pRootOfTree);
void ConvertCore(TreeNode *pNode, TreeNode **pLastNodeInList);

int main()
{
    return 0;
}

TreeNode *Convert(TreeNode *pRootOfTree)
{
    TreeNode *pLastNodeInLast = nullptr;
    ConvertCore(pRootOfTree, &pLastNodeInLast);
    TreeNode *pHeadOfList = pLastNodeInLast;
    while (pHeadOfList != nullptr && pHeadOfList->left != nullptr)
        pHeadOfList = pHeadOfList->left;
    return pHeadOfList;
}

void ConvertCore(TreeNode *pNode, TreeNode **pLastNodeInList)
{
    if (pNode == nullptr)
        return;
    TreeNode *pCurrent = pNode;
    if (pCurrent->left != nullptr)
        ConvertCore(pCurrent->left, pLastNodeInList);
    pCurrent->left = pLastNodeInList;
    if (*pLastNodeInList != nullptr)
        (*pLastNodeInList)->right = pCurrent;
    *pLastNodeInList = pCurrent;
    if (pCurrent->right != nullptr)
        ConvertCore(pCurrent->right, pLastNodeInList);
}