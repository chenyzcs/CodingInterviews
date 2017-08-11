#include <iostream>
#include <vector>
#include <queue>
#include "utility/BinaryTree.h"

using namespace std;

vector<int> PrintFromTopToBottom(TreeNode *root);

int main()
{
    return 0;
}

vector<int> PrintFromTopToBottom(TreeNode *root)
{
    if (root == nullptr)
        return {};
    queue<TreeNode *> q;
    q.push(root);
    vector<int> ret;
    while (!q.empty())
    {
        TreeNode *tmp = q.front();
        ret.push_back(tmp->val);
        q.pop();
        if (tmp->left)
            q.push(tmp->left);
        if (tmp->right)
            q.push(tmp->right);
    }
    return ret;
}