#include <iostream>
#include "utility/BinaryTree.h"

#include <vector>

using namespace std;

TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin);
TreeNode *reConstructCore(vector<int> &pre, vector<int> &vin, int pre_bg, int pre_end, int in_bg, int in_end);

int main()
{
    vector<int> pre = {1, 2, 4, 7, 3, 5, 6, 8};
    vector<int> in = {4, 7, 2, 1, 5, 3, 8, 6};
    auto tn = reConstructBinaryTree(pre, in);
    printTreePreOrder(tn);

    return 0;
}

TreeNode *reConstructBinaryTree(vector<int> pre, vector<int> vin)
{
    if (pre.empty() || vin.empty())
        return nullptr;
    return reConstructCore(pre, vin, 0, pre.size() - 1, 0, vin.size() - 1);
}

TreeNode *reConstructCore(vector<int> &pre, vector<int> &vin, int pre_bg, int pre_end, int in_bg, int in_end)
{
    auto root = new TreeNode(pre.at(pre_bg));
    if (pre_bg == pre_end)
    {
        if (in_bg == in_end && pre[pre_bg] == vin[in_bg])
            return root;
    }
    int tag = in_bg;
    while (tag <= in_end && pre[pre_bg] != vin[tag])
        tag++;
    int left_len = tag - in_bg;
    int right_len = in_end - tag;
    if (left_len > 0)
        root->left = reConstructCore(pre, vin, pre_bg + 1, pre_bg + left_len, in_bg, tag - 1);
    if (left_len < pre_end - pre_bg)
        root->right = reConstructCore(pre, vin, pre_bg + left_len + 1, pre_end, tag + 1, in_end);
    return root;
}