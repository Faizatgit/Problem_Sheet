// variant 1
#include <bits/stdc++.h>
using namespace std;

string twoSumProb(vector<int> &arr, int target)
{
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                return "Yes";
            }
        }
    }

    return "No";
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string res = twoSumProb(arr, target);
    cout << res << endl;
    return 0;
}