#include <iostream>

using namespace std;

double Power(double base, int exponent)
{
    int tmp = abs(exponent);
    if (tmp == 0)
        return 1;
    if (tmp == 1)
        return base;
    double res;
    if (tmp % 2 == 0)
        res = Power(base, tmp / 2) * Power(base, tmp / 2);

    if (tmp % 2 == 1)
        res = Power(base, (tmp - 1) / 2) * Power(base, (tmp - 1) / 2) * base;
    return exponent > 0 ? res : 1.0 / res;
}

int main()
{
    cout << Power(2, 4) << endl;
    return 0;
}