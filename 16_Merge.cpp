#include <iostream>
#include "utility/LinkedList.h"

using namespace std;

ListNode *Merge(ListNode *pHead1, ListNode *pHead2);

int main()
{
    return 0;
}

ListNode *Merge(ListNode *pHead1, ListNode *pHead2)
{
    if (pHead1 == nullptr && pHead2 == nullptr)
        return nullptr;
    ListNode *p1 = pHead1;
    ListNode *p2 = pHead2;
    ListNode *dummy = new ListNode();
    ListNode *curr = dummy;
    while (p1 && p2)
    {
        if (p1->val < p2->val)
        {
            ListNode *tmp = new ListNode(p1->val);
            curr->next = tmp;
            curr = curr->next;
            p1 = p1->next;
        }
        else
        {
            ListNode *tmp = new ListNode(p2->val);
            curr->next = tmp;
            curr = curr->next;
            p2 = p2->next;
        }
    }
    while (p1)
    {
        ListNode *tmp = new ListNode(p1->val);
        curr->next = tmp;
        curr = curr->next;
        p1 = p1->next;
    }
    while (p2)
    {
        listNode *tmp = new ListNode(p2->val);
        curr->next = tmp;
        curr = curr->next;
        p2 = p2->next;
    }
    return dummy->next;
}