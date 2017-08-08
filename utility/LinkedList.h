#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <vector>

#define INF 0xffff

struct ListNode
{
    int val;
    struct ListNode *next;
    ListNode(int x = INF) : val(x), next(nullptr) {}
};

class LinkedList
{
    friend void printList(LinkedList &rhs);

  public:
    LinkedList();
    ~LinkedList() = default;

    void creatList(std::vector<int> &vals);
    ListNode *getHead();

  private:
    ListNode *head = nullptr;
};

void printList(LinkedList &rhs)
{
    ListNode *p = rhs.head;
    while (p)
    {
        std::cout << p->val << "-->";
        p = p->next;
    }
    std::cout << std::endl;
}

LinkedList::LinkedList()
{
    if (head == nullptr)
        head = new ListNode();
}

void LinkedList::creatList(std::vector<int> &vals)
{
    ListNode *p = head;

    for (auto &c : vals)
    {
        ListNode *tmp = new ListNode(c);
        p->next = tmp;
        p = tmp;
    }
}

ListNode *LinkedList::getHead()
{
    return this->head;
}

#endif // LINKEDLIST_H