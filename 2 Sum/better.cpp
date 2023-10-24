// variant 1
#include <bits/stdc++.h>
using namespace std;

string twoSumProb(vector<int> &arr, int target)
{
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int req = target - num;
        if (mp.find(req) != mp.end())
        {
            return "Yes";
        }
        else
        {
            mp[num] = i;
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