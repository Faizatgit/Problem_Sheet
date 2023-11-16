#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

using namespace std;

int findSequence(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    sort(nums.begin(), nums.end());
    int last = INT_MIN;
    int longest = 1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] - 1 == last)
        {
            count += 1;
            last = nums[i];
        }
        else if (nums[i] != last)
        {
            last = nums[i];
            count = 1;
        }

        longest = max(longest, count);
    }
    return longest;
}

int main()
{
    vector<int> nums = {100, 200, 1, 2, 3, 4};
    int ans = findSequence(nums);
    cout << "Longest sequence in an array is = " << endl;
    cout << ans;
    return 0;
}