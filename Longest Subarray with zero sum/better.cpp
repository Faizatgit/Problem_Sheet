#include <iostream>
#include <vector>
#include <unordered_map>
#include <climits>
using namespace std;

int find(vector<int> &nums)
{
    int n = nums.size();
    int maxi = INT_MIN;
    int sum = 0;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if (sum == 0)
        {
            maxi = i + 1;
        }
        else if (mp.find(sum) != mp.end())
        {
            maxi = max(maxi, i - mp[sum]);
        }
        else
        {
            mp[sum] = i;
        }
    }
    return maxi;
}

int main()
{
    vector<int> nums = {9, -3, 3, -1, 6, -5};
    int res = find(nums);
    cout << "Longest subb array with sum zero = " << endl;
    cout << res << endl;
    return 0;
}