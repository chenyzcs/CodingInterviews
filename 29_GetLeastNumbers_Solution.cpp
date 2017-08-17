#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> GetLeastNumbers_Solution(vector<int> input, int k);

int main()
{
    return 0;
}

vector<int> GetLeastNumbers_Solution(vector<int> input, int k)
{
    if (input.empty())
        return {};
    size_t sz = input.size();
    if (k > sz)
        return {};
    sort(input.begin(), input.end());
    vector<int> ret;
    for (int i = 0; i < k; i++)
        ret.push_back(input[i]);
    return ret;
}