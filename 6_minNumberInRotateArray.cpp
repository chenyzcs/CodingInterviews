#include <iostream>
#include <vector>

using namespace std;

int minNumberInRotateArray(vector<int> rotateArray);

int main()
{
    vector<int> v = {3, 4, 5, 1, 2};
    cout << minNumberInRotateArray(v) << endl;
    return 0;
}

int minNumberInRotateArray(vector<int> rotateArray)
{
    int tag = rotateArray.size() - 1;
    while (rotateArray[tag] <= rotateArray.front())
        tag--;
    return rotateArray[++tag];
}