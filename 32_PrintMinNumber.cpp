#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string PrintMinNumber(vector<int> numbers);
bool cmp(const string &s1, const string &s2);

int main()
{
    return 0;
}

string PrintMinNumber(vector<int> numbers)
{
    if (numbers.empty())
        return "";
    vector<string> str;
    for (auto &c : numbers)
        str.push_back(to_string(c));
    sort(str.begin(), str.end(), cmp);
    string ret;
    for (auto &c : str)
        ret += c;
    return ret;
}

bool cmp(const string &s1, const string &s2)
{
    return s1 + s2 < s2 + s1;
}