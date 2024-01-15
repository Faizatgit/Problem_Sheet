#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int col, vector<string> &board, vector<vector<string>> &ans, vector<int> &leftrow, vector<int> &lowerdiagonal, vector<int> &upperdiagonal, int n)
{
    if (col == n)
    {
        ans.push_back(board);
        return;
    }

    for (int row = 0; row < n; row++)
    {
        if (leftrow[row] == 0 && lowerdiagonal[row + col] == 0 && upperdiagonal[n - 1 + col - row] == 0)
        {
            board[row][col] = 'Q';
            leftrow[row] = 1;
            upperdiagonal[n - 1 + col - row] = 1;
            lowerdiagonal[row + col] = 1;
            solve(col + 1, board, ans, leftrow, lowerdiagonal, upperdiagonal, n);
            board[row][col] = '.';
            leftrow[row] = 0;
            upperdiagonal[n - 1 + col - row] = 0;
            lowerdiagonal[row + col] = 0;
        }
    }
}

vector<vector<string>> solveQueens(int n)
{
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n, '.');
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    vector<int> leftrow(n, 0);
    vector<int> upperdiagonal(2 * n - 1, 0);
    vector<int> lowerdiagonal(2 * n - 1, 0);
    solve(0, board, ans, leftrow, lowerdiagonal, upperdiagonal, n);
    return ans;
}

int main()
{
    int n = 4; // we are taking 4*4 grid and 4 queens
    vector<vector<string>> ans;
    ans = solveQueens(n);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << "Arrangement " << i + 1 << "\n";
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j];
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}