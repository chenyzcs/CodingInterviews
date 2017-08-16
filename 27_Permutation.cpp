#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> Permutation(string str);
void PermutationCore(string &str, vector<string> &ret, int pos);

int main()
{
    string str = "aac";
    auto ans = Permutation(str);
    return 0;
}

vector<string> Permutation(string str)
{
    if (str.empty())
        return {};
    vector<string> ret;
    int pos = 0;
    PermutationCore(str, ret, pos);
    std::qsort(ret.begin(), ret.end());
    return ret;
}

void PermutationCore(string &str, vector<string> &ret, int pos)
{
    if (pos == str.size() - 1)
        ret.push_back(str);
    else
    {
        for (int i = pos; i < str.size(); i++)
        {
            if (str[i] == str[pos] && i != pos)
                continue;
            std::swap(str[pos], str[i]);
            //ret.push_back(str);
            PermutationCore(str, ret, pos + 1);
            std::swap(str[i], str[pos]);
        }
    }
}
