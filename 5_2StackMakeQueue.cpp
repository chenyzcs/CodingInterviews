#include <iostream>
#include <stack>

using namespace std;

class CMyQueue
{
  public:
    void push(int node);
    int pop();

  private:
    stack<int> stack1;
    stack<int> stack2;
};

void CMyQueue::push(int node)
{
    stack1.push(node);
}

int CMyQueue::pop()
{
    if (stack2.empty())
    {
        while (!stack1.empty())
        {
            int top = stack1.top();
            stack1.pop();
            stack2.push(top);
        }
    }

    int top = stack2.top();
    stack2.pop();
    return top;
}

int main()
{
    CMyQueue a;

    return 0;
}