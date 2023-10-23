#include <bits/stdc++.h>
using namespace std;

int numberOfInversion(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {5, 4, 3, 2, 1};
    int res = numberOfInversion(a);
    cout << "Number of pairs of inversion: " << res << endl;
    return 0;
}