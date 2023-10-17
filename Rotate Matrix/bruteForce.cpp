#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            rotated[j][n - 1 - i] = matrix[i][j];
        }
    }

    return rotated;
}

int main()
{
    vector<vector<int>> arr;
    arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "Matrix before rotation: " << endl;
    for (auto i : arr)
    {
        for (auto it : i)
        {
            cout << it << " ";
        }
        cout << endl;
    }
    vector<vector<int>> res = rotate(arr);
    cout << "Matrix after rotation: " << endl;
    for (auto i : res)
    {
        for (auto it : i)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}