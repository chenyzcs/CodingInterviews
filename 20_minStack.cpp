#include <iostream>
#include <stack>

class CMyMinStack
{
public:
  void push(int value)
  {
    if (stk1.empty())
    {
      stk1.push(value);
      stk2.push(value);
    }
    else
    {
      int tmp = stk1.top();
      if (value < tmp)
      {
        stk2.push(value);
      }
      else
        stk2.push(tmp);
      stk1.push(value);
    }
  }
  void pop()
  {
    stk1.pop();
    stk2.pop();
  }
  int top()
  {
    return stk1.top();
  }
  int min()
  {
    return stk2.top();
  }

private:
  stack<int> stk1;
  stack<int> stk2;
};