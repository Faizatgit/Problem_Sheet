#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 2, 4, 3, 5, 1, 6, 7, 8, 7};
    vector<int> v;
    int n = nums.size();
    int left = 0;
    int right = 1;
    sort(nums.begin(), nums.end());
    while (right <= n)
    {
        if (nums[left] == nums[right])
        {
            right++;
        }
        if (nums[left] != nums[right])
        {
            v.push_back(nums[left]);
            left = right;
            right++;
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}