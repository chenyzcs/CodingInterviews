#include <iostream>

using namespace std;

int jumpFloor(int number)
{
    if (number <= 0)
        return 1;
    if (number == 1)
        return 1;
    int pre = 1;
    int curr = 1;
    int val;
    for (int i = 2; i <= number; i++)
    {
        val = pre + curr;
        pre = curr;
        curr = val;
    }
    return val;
}

int main()
{
    return 0;
}