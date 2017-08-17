#include <iostream>
#include <vector>
#include <algorithm>

int MoreThanHalfNum_Solution(vector<int> numbers);

int main()
{
    return 0;
}

int MoreThanHalfNum_Solution(vector<int> numbers)
{
    if (numbers.empty())
        return 0;
    sort(numbers.begin(), numbers.end());
    size_t half_sz = numbers.size() / 2;
    for (int i = 0; i <= half_sz; i++)
    {
        if (numbers[i] == numbers[i + half_sz])
            return numbers[i];
    }
    return 0;
}