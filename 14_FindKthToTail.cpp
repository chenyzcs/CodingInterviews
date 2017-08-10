#include <iostream>
#include "utility/LinkedList.h"

using namespace std;

ListNode *FindKthToTail(ListNode *pListHead, unsigned int k);

int main()
{
    return 0;
}

ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
{
    if (pListHead == nullptr)
        return nullptr;
    ListNode *p1 = pListHead;
    ListNode *p2 = pListHead;
    for (int i = 0; i < k; i++)
    {
        if (p1 == nullptr)
            return nullptr;
        p1 = p1->next;
    }
    while (p1)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    return p2;
}
