#include <iostream>
#include <vector>

using namespace std;

vector<int> printMatrix(vector<vector<int>> matrix);

int main()
{
    vector<vector<int>> v = {
        {1, 2, 3, 4}};

    auto ans = printMatrix(v);
    for (auto &c : ans)
        cout << c << " ";
    cout << endl;
    return 0;
}

vector<int> printMatrix(vector<vector<int>> matrix)
{
    size_t rows = matrix.size();
    size_t cols = matrix.front().size();
    cout << rows << " " << cols << endl;
    vector<vector<bool>> isPrint(rows, vector<bool>(cols, false));

    int pts = 0;
    vector<int> ret;
    while (pts < rows && pts < cols)
    {
        int i = pts, j = pts;
        bool flag = false;
        while (i < rows && j < cols && i >= 0 && j >= 0 && !isPrint[i][j])
        {
            isPrint[i][j] = true;
            ret.push_back(matrix[i][j++]);
            flag = true;
        }
        if (flag)
            j--, i++, flag = false;
        ;
        while (i < rows && j < cols && i >= 0 && j >= 0 && !isPrint[i][j])
        {
            isPrint[i][j] = true;
            ret.push_back(matrix[i++][j]);
            flag = true;
        }
        if (flag)
            i--, j--, flag = false;
        while (i < rows && j < cols && i >= 0 && j >= 0 && !isPrint[i][j])
        {
            isPrint[i][j] = true;
            ret.push_back(matrix[i][j--]);
            flag = true;
        }
        if (flag)
            j++, i--, flag = false;
        while (i < rows && j < cols && i >= 0 && j >= 0 && !isPrint[i][j])
        {
            isPrint[i][j] = true;
            ret.push_back(matrix[i--][j]);
            flag = true;
        }
        if (flag)
            i++, flag = false;
        pts++;
    }
    return ret;
}
