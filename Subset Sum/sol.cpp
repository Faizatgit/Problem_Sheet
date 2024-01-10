#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sumSubset(int ind, int sum, int n, vector<int> &nums, vector<int> &res)
{
    if (ind == n)
    {
        res.push_back(sum);
        return;
    }

    // Picking up the element
    sumSubset(ind + 1, sum + nums[ind], n, nums, res);

    // Not picking up the element
    sumSubset(ind + 1, sum, n, nums, res);
}

vector<int> arr(vector<int> nums, int n)
{
    vector<int> res;
    sumSubset(0, 0, n, nums, res);
    sort(res.begin(), res.end());
    return res;
}

int main()
{
    vector<int> nums = {3, 1, 2};
    int n = nums.size();
    vector<int> result = arr(nums, n);
    for (auto i : result)
    {
        cout << i << " ";
    }
    return 0;
}