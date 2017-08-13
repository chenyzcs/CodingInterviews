#include <iostream>
#include <vector>

using namespace std;

bool VerifySquenceOfBST(vector<int> sequence);
bool VerifyCore(vector<int> sequence, int root);

int main()
{
    return 0;
}

bool VerifySquenceOfBST(vector<int> sequence)
{
    if (sequence.empty())
        return false;
    return VerifyCore(sequence, sequence.size() - 1);
}

bool VerifyCore(vector<int> sequence, int root)
{

    int left_end = 0;
    while (sequence[left_end] < sequence[root])
        left_end++;
    if (left_end == root)
        return true;

    for (int i = 0; i < left_end; i++)
    {
        if (sequence[i] >= sequence[root])
            return false;
    }
    for (int i = left_end; i < root; i++)
    {
        if (sequence[i] <= sequence[root])
            return false;
    }
    return VerifyCore(sequence, left_end) && VerifyCore(sequence, root - 1);
}