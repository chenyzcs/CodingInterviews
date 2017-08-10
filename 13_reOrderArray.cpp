#include <iostream>
#include <vector>

using namespace std;

void reOrderArray(vector<int> &array)
{
    if (array.empty())
        return;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < array.size(); i++)
    {
        if (array[i] % 2 == 0)
            v1.push_back(array[i]);
        else
            v2.push_back(array[i]);
    }
    array.clear();
    for (int i = 0; i < v2.size(); i++)
        array.push_back(v2[i]);
    for (int i = 0; i < v1.size(); i++)
        array.push_back(v1[i]);
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    reOrderArray(v);
    for (auto &c : v)
        cout << c << " ";
    return 0;
}
