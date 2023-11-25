#include <iostream>
#include <vector>
using namespace std;

int count(int n, int m)
{
    int N = n + m - 2;
    int r = m - 1;
    double res = 1;
    for (int i = 1; i <= r; i++)
    {
        res = res * (N - r + i) / i;
    }
    return (int)res;
}

int main()
{
    int m = 3;
    int n = 7;
    int res = count(n, m);
    cout << "The total number of Unique Paths are " << res << endl;
    return 0;
}