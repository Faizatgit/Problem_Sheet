#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v;
    map<int, int> mp;
    int min = (int)(n / 3) + 1;
    for (int i = 0; i < n; i++)
    {
        mp[nums[i]]++;
        if (mp[nums[i]] == min)
        {
            v.push_back(nums[i]);
        }
        if (v.size() == 2)
            break;
    }
    return v;
}

int main()
{
    vector<int> nums = {11, 33, 33, 11, 33, 11};
    vector<int> res = majorityElement(nums);
    cout << "Majority Element is: ";
    for (auto i : res)
    {
        cout << i << "  ";
    }
    cout << endl;
    return 0;
}