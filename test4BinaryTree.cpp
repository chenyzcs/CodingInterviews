#include <iostream>
#include "utility/BinaryTree.h"

using namespace std;

int main()
{
    auto t1 = creatTreeNode(1);
    auto t2 = creatTreeNode(2);
    auto t3 = creatTreeNode(3);
    auto t4 = creatTreeNode(4);
    auto t5 = creatTreeNode(5);
    auto t6 = creatTreeNode(6);
    auto t7 = creatTreeNode(7);
    auto t8 = creatTreeNode(8);
    connectTreeNode(t1, t2, t3);
    connectTreeNode(t2, t4, nullptr);
    connectTreeNode(t3, t5, t6);
    connectTreeNode(t4, nullptr, t7);
    connectTreeNode(t6, t8, nullptr);

    auto root = t1;
    printTreePreOrder(root);

    return 0;
}