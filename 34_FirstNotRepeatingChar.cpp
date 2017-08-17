#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int FirstNotRepeatingChar(string str);

int main()
{
    return 0;
}

int FirstNotRepeatingChar(string str)
{
    if (str.empty())
        return -1;
    int times[256];
    memset(times, 0, sizeof(times));
    for (auto it = str.begin(); it != str.end(); it++)
        times[*it]++;
    for (int i = 0; i < str.size(); i++)
        if (times[str[i]] == 1)
            return i;
    return 0;
}