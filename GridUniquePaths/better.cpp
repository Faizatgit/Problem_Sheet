#include <iostream>
#include <vector>
using namespace std;

int count(int i, int j, int n, int m, vector<vector<int>> &dp)
{
    if (i == (n - 1) && j == (m - 1))
    {
        return 1;
    }
    else if (i >= n || j >= m)
    {
        return 0;
    }
    else if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    else
    {
        return dp[i][j] = count(i + 1, j, n, m, dp) + count(i, j + 1, n, m, dp);
    }
}

int main()
{
    int m = 3;
    int n = 7;
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int res = count(0, 0, n, m, dp);
    cout << "The total number of Unique Paths are " << res << endl;
    return 0;
}