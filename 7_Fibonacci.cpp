#include <iostream>

using namespace std;

int Fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    int pre = 0;
    int curr = 1;
    int val;
    for (int i = 1; i < n; i++)
    {
        val = pre + curr;
        pre = curr;
        curr = val;
    }
    return val;
}

int main()
{
    cout << Fibonacci(0) << endl;
    return 0;
}