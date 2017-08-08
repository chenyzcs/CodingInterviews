#include <iostream>
#include <vector>
#include "utility/LinkedList.h"

using namespace std;

vector<int> printListFromTailToHead(ListNode *head);

int main()
{
    vector<int> vals = {1, 2, 3, 4};
    LinkedList l;
    l.creatList(vals);
    auto h = l.getHead();
    auto ans = printListFromTailToHead(h);
    for (auto &c : ans)
        cout << c << "-->";
    cout << endl;
    return 0;
}

vector<int> printListFromTailToHead(ListNode *head)
{
    vector<int> stk;
    ListNode *p = head;
    while (p)
    {
        stk.push_back(p->val);
        p = p->next;
    }
    int sz = stk.size();
    for (int i = 0; i < sz / 2; i++)
        std::swap(stk[i], stk[sz - i - 1]);
    return stk;
}