#include <iostream>
#include <limits>
#include <bitset>

using namespace std;

int NumberOf1(int n)
{
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = n & (n - 1);
    }
    return cnt;
}

int bitsetSolution(int n)
{
    const size_t sz = numeric_limits<unsigned int>::digits;
    bitset<sz> b(n);
    return b.count();
}

int main()
{
    cout << NumberOf1(10) << endl;
    cout << bitsetSolution(10) << endl;
    return 0;
}