#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<int> &matrix, int target)
{
    int n = matrix.size();
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (matrix[mid] == target)
            return true;
        else if (matrix[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return false;
}

bool find(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++)
    {
        if (matrix[i][0] <= target && matrix[i][m - 1] >= target)
        {
            return binarySearch(matrix[i], target);
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