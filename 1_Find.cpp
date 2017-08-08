#include <iostream>
#include <vector>

using namespace std;

bool Find(int target, vector<vector<int>> array);

int main()
{
    vector<vector<int>> v =
        {
            {1, 2, 8, 9},
            // {2, 4, 9, 12},
            {4, 7, 10, 13},
            {6, 8, 11, 15}};
    cout << Find(1, v) << endl;
    return 0;
}

bool Find(int target, vector<vector<int>> array)
{
    size_t rows = array.size();
    size_t cols = (array.front().size()) ? array.front().size() : 0;
    int i = 0, j = cols - 1;
    bool find = false;
    while (i < rows && j >= 0)
    {
        if (i < rows && j >= 0 && array[i][j] > target)
            j--;
        else if (i < rows && j >= 0 && array[i][j] < target)
            i++;
        else
        {
            find = true;
            break;
        }
    }
    return find;
}