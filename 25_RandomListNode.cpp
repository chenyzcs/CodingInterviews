#include <iostream>
#include <vector>
#include "utility/LinkedList.h"

using namespace std;

RandomListNode *Clone(RandomListNode *pHead);
void CloneList(RandomListNode *pHead);
void ConnectRandom(RandomListNode *pHead);
RandomListNode *ReconnectList(RandomList *pHead);

int mian()
{
    return 0;
}

RandomListNode *Clone(RandomListNode *pHead)
{
    if (pHead == nullptr)
        return nullptr;
    CloneList(pHead);
    ConnectRandom(pHead);
    return ReconnectList(pHead);
}

void CloneList(RandomListNode *pHead)
{
    auto pNode = pHead;
    while (pNode)
    {
        auto pCloned = new RandomListNode(pNode->val);
        pCloned->next = pNode->next;
        pNode->next = pCloned;
        pNode = pCloned->next;
    }
}

void ConnectRandom(RandomListNode *pHead)
{
    auto pNode = pHead;
    while (pNode)
    {
        auto pCloned = pNode->next;
        if (pNode->random)
            pCloned->random = pNode->random->next;
        pNode = pCloned->next;
    }
}

RandomListNode *ReconnectList(RandomListNode *pHead)
{
    auto pNode = pHead;
    RandomListNode *pClonedHead = nullptr;
    RandomListNode *pClonedNode = nullptr;
    if (pNode)
    {
        pClonedHead = pClonedNode = pNode->next;
        pNode->next = pClonedNode->next;
        pNode = pNode->next;
    }
    while (pNode)
    {
        pClonedNode->next = pNode->next;
        pClonedNode = pClonedNode->next;
        pNode->next = pClonedNode->next;
        pNode = pNode->next;
    }
    return pClonedHead;
}
