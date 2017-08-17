#include <iostream>
#include <vector>

using namespace std;

long long GetUglyNumber_Solution(int index);

int main()
{
    cout << GetUglyNumber_Solution(7) << endl;
    return 0;
}

long long GetUglyNumber_Solution(int index)
{
    if (index < 2)
        return index;

    vector<long long> nums = {2, 3, 4, 5};
    if (index <= nums.size() + 1)
        return nums[index - 2];
    while (nums.size() < index - 1)
    {
        long long tmp;
        long long ref = nums.back();
        long long min = 0xfffffffff;
        for (long long i = 0; i < nums.size(); i++)
        {
            for (long long j = 0; j < nums.size(); j++)
            {
                tmp = nums[i] * nums[j];
                if (tmp > ref)
                {
                    if (tmp < min)
                        min = tmp;
                }
                if (tmp > min)
                    break;
            }
        }
        nums.push_back(min);
    }
    return nums.back();
}