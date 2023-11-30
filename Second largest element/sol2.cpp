#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int secondLargest(vector<int> &nums)
{
    int n = nums.size();
    int secondLargest;
    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i++)
    {
        if (nums[n - i - 1] != nums[n - 1])
        {
            secondLargest = nums[n - i - 1];
            break;
        }
    }
    return secondLargest;
}

int main()
{
    vector<int> nums = {2, 4, 6, 2, 6, 4, 8, 8};
    int res = secondLargest(nums);
    cout << "Second largest element in a list is: " << res << endl;
    return 0;
}