#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
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

    rotate(arr);

    cout << "Matrix after rotation: " << endl;
    for (auto i : arr)
    {
        for (auto it : i)
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}