#include <iostream>
#include <vector>
#include "utility/BinaryTree.h"

using namespace std;

vector<vector<int>> FindPath(TreeNode *root, int expectNumber);
void FindPathCore(TreeNode *root, int expectNumber, vector<vector<int>> &path, vector<int> tmp, int val);

int main()
{
    auto t1 = creatTreeNode(10);
    auto t2 = creatTreeNode(5);
    auto t3 = creatTreeNode(4);
    auto t4 = creatTreeNode(7);
    auto t5 = creatTreeNode(12);

    connectTreeNode(t1, t2, t5);
    connectTreeNode(t2, t3, t4);

    auto root = t1;
    auto ans = FindPath(root, 22);

    for (auto &c : ans)
    {
        for (auto &r : c)
            cout << r << " ";
        cout << endl;
    }

    return 0;
}

vector<vector<int>> FindPath(TreeNode *root, int expectNumber)
{
    if (root == nullptr)
        return {};
    vector<vector<int>> path;
    vector<int> tmp;
    int val = 0;
    FindPathCore(root, expectNumber, path, tmp, val);
    return path;
}

void FindPathCore(TreeNode *root, int expectNumber, vector<vector<int>> &path, vector<int> tmp, int val)
{
    if (root == nullptr)
        return;
    val += root->val;
    tmp.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr)
        if (val == expectNumber)
        {
            path.push_back(tmp);
            return;
        }

    FindPathCore(root->left, expectNumber, path, tmp, val);
    FindPathCore(root->right, expectNumber, path, tmp, val);
}