#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> &nums)
{
    int n = nums.size();
    vector<vector<int>> res;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && nums[i] == nums[i - 1])
            continue;
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = nums[i] + nums[j] + nums[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {nums[i], nums[j], nums[k]};
                res.push_back(temp);
                j++;
                k--;
                while (j < k && nums[j] == nums[j + 1]) j++;
                while (j < k && nums[k] == nums[k - 1]) k--;
            }
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = triplet(arr);
    for (auto it : ans)
    {
        cout << "[";
        for (auto i : it)
        {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}