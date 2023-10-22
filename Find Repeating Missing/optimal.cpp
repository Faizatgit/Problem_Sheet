// size of the array
// Find Sn and S2n:
// Calculate S and S2:
// S-Sn = X-Y:
// S2-S2n = X^2-Y^2:
// Find X+Y = (X^2-Y^2)/(X-Y):
// Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
// Here, X-Y = val1 and X+Y = val2:

#include <bits/stdc++.h>
using namespace std;

vector<int> findRepeatingMissing(vector<int> &arr)
{
    long long n = arr.size();

    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;
    long long S = 0;
    long long S2 = 0;
    for (int i = 0; i < n; i++)
    {
        S += arr[i];
        S2 += (long long)arr[i] * (long long)arr[i];
    }

    long long val1 = S - SN;
    long long val2 = S2 - S2N;

    val2 = val2 / val1;

    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}

int main()
{
    vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findRepeatingMissing(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}