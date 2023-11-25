#include <iostream>
#include <vector>
using namespace std;

int count(int i, int j, int m, int n)
{
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    else if (i >= m || j >= n)
    {
        return 0;
    }
    else
    {
        return count(i + 1, j, m, n) + count(i, j + 1, m, n);
    }
}

int main()
{
    int m = 3;
    int n = 7;
    int res = count(0, 0, m, n);
    cout << "The total number of Unique Paths are " << res << endl;
    return 0;
}