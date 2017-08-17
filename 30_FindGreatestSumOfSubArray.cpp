#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int FindGreatestSumOfSubArray(vector<int> array);

int main()
{
    vector<int> v = {-2, -8, -1, -5, -9};
    cout << FindGreatestSumOfSubArray(v);
    return 0;
}

int FindGreatestSumOfSubArray(vector<int> array)
{
    if (array.empty())
        return 0;
    int sum = array.front();
    int max = sum;
    for (int i = 1; i < array.size(); i++)
    {
        if (sum <= 0)
            sum = array[i];
        else
            sum += array[i];
        if (max < sum)
            max = sum;
    }
    return max;
}