#include <iostream>
#include <vector>
#include <map>
using namespace std;

int solveXorWithK(vector<int> &nums, int k)
{
    int n = nums.size();
    int xr = 0;
    int count = 0;
    map<int, int> mp;
    mp[xr]++;

    for (int i = 0; i < n; i++)
    {
        xr = xr ^ nums[i];
        int x = xr ^ k;
        count += mp[x];
        mp[xr]++;
    }

    return count;
}

int main()
{
    vector<int> nums = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = solveXorWithK(nums, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}