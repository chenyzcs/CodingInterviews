#include <iostream>
#include "utility/BinaryTree.h"

using namespace std;

bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2);

bool Tree1HasTree2(TreeNode *pRoot1, TreeNode *pRoot2);

int main()
{
    return 0;
}

bool HasSubtree(TreeNode *pRoot1, TreeNode *pRoot2)
{
    if (pRoot1 == nullptr || pRoot2 == nullptr)
        return false;
    bool result = false;
    if (pRoot1 != nullptr && pRoot2 != nullptr)
    {
        if (pRoot1->val == pRoot2->val)
            result = Tree1HasTree2(pRoot1, pRoot2);
        if (!result)
            result = HasSubtree(pRoot1->left, pRoot2);
        if (!result)
            result = HasSubtree(pRoot1->right, pRoot2);
    }
    return result;
}

bool Tree1HasTree2(TreeNode *pRoot1, TreeNode *pRoot2)
{
    if (pRoot2 == nullptr)
        return true;
    if (pRoot1 == nullptr)
        return false;
    if (pRoot1->val != pRoot2->val)
        return false;

    return Tree1HasTree2(pRoot1->left, pRoot2->left) && Tree1HasTree2(pRoot1->right, pRoot2->right);
}