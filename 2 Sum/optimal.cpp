#include <bits/stdc++.h>
using namespace std;

string twoSum(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int left = 0;
    int rigth = n - 1;
    int sum = 0;

    while (left < rigth)
    {
        sum = arr[left] + arr[rigth];
        if (sum == target)
        {
            return "Yes";
        }
        else if (sum > target)
        {
            rigth--;
        }
        else
        {
            left++;
        }
    }

    return "No";
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string res = twoSum(arr, target);
    cout << res << endl;
    return 0;
}