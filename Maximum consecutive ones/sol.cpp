#include <iostream>
#include <vector>
using namespace std;

int maxCnsecutiveOne(vector<int> &nums)
{
    int n = nums.size();
    int count = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maxi = max(count, maxi);
    }
    return maxi;
}

int main()
{
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    int res = maxCnsecutiveOne(nums);
    cout << "Maximum consecutive one's are: " << res << endl;
    return 0;
}