#include <iostream>
#include <vector>
using namespace std;

bool find(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int target = 8;
    if (find(matrix, target))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not found!";
    }
    return 0;
}