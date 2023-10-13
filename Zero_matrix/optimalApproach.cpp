#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int col0 = 1;

    // Step 1: Traverse the matrix and mark the first row and column accordingly

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {

                matrix[i][0] = 0;
            
            if (j != 0)
            
                matrix[0][j] = 0;
            
            else
            
                col0 = 0;
            }
        }
    }
    //Step 2: Mark with 0 from (1,1) to (n-1,m-1)
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (matrix[i][j] != 0)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }

    //Step 3: Finally mark first column and then first row

    if (matrix[0][0] == 0)
    {
        for (int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if (col0 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};

    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> res = zeroMatrix(matrix, n, m);

    cout << "Matrix after marking: " << endl;
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