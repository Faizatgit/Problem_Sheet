#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int n = nums.size();

    map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
    }
    for (auto i : mp)
    {
        if (i.second > (n / 2))
        {
            return i.first;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int res = majorityElement(nums);
    cout << "Majority element is : " << res << endl;
    return 0;
}