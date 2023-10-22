#include <bits/stdc++.h>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int n = arr.size();
    int freq[n + 1] = {0};

    for (int i = 0; i < n; i++)
    {
        if (freq[arr[i]] == 0)
        {
            freq[arr[i]]++;
        }
        else
        {
            return arr[i];
        }
    }
}

int main()
{
    vector<int> arr;
    arr = {1, 3, 4, 2, 2};
    int res = findDuplicate(arr);
    cout << "The duplicate element is: " << res << endl;
    return 0;
}