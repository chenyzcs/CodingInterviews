#include <iostream>
#include "utility/LinkedList.h"

using namespace std;

ListNode *ReverseList(ListNode *pHead);

int main()
{
    return 0;
}

ListNode *ReverseList(ListNode *pHead)
{
    if (pHead == nullptr)
        return nullptr;
    ListNode *p1 = pHead;
    ListNode *p2 = pHead->next;
    p1->next = nullptr;
    while (p2)
    {
        ListNode *tmp = p1;
        p1 = p2;
        p2 = p2->next;
        p1->next = tmp;
    }
    return p1;
}