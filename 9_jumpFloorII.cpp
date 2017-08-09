#include <iostream>

using namespace std;

int jumpFloorII(int number)
{
    if (number == 0)
        return 1;
    if (number == 1)
        return 1;
    int x = 1;
    for (int i = 0; i < number - 1; i++)
        x *= 2;
    return x;
}

int main()
{
    cout << jumpFloorII(4) << endl;
    return 0;
}