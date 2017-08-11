#include <iostream>
#include <vector>
#include <stack>

using namespace std;

bool IsPopOrder(vector<int> pushV, vector<int> popV);

int main()
{
    vector<int> push = {1, 2, 3, 4, 5};
    vector<int> pop = {4, 3, 5, 1, 2};
    cout << IsPopOrder(push, pop) << endl;
    return 0;
}

bool IsPopOrder(vector<int> pushV, vector<int> popV)
{
    if (pushV.empty() || popV.empty())
        return false;
    stack<int> stk;
    stk.push(pushV.front());
    int i = 1;
    int j = 0;
    while (j < popV.size() && i <= pushV.size())
    {
        if (stk.top() != popV[j])
        {
            if (i == pushV.size())
                break;
            stk.push(pushV[i]);
            i++;
        }

        else
        {
            stk.pop();
            j++;
        }
    }
    return stk.empty() == true;
}