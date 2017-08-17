#include <iostream>

using namespace std;

int NumberOf1Between1AndN_Solution(int n);
int cnt4one(int n);

int main()
{
    return 0;
}

int NumberOf1Between1AndN_Solution(int n)
{
    if (n < 1)
        return 0;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += cnt4one(i);
    }
    return cnt;
}

int cnt4one(int n)
{
    int nums = 0;
    while (n)
    {
        if (n % 10 == 1)
            nums++;
        n /= 10;
    }
    return nums;
}