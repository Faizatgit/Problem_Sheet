#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &nums)
{
    int n = nums.size();
    int waterTrapped = 0;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int leftMax = 0;
        int rightMax = 0;
        while (j >= 0)
        {
            leftMax = max(leftMax, nums[j]);
            j--;
        }
        j = i;
        while (j < n)
        {
            rightMax = max(rightMax, nums[j]);
            j++;
        }

        waterTrapped += min(leftMax, rightMax) - nums[i];
    }
    return waterTrapped;
}

int main()
{
    vector<int> arr;
    arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "The water that can be trapped is " << trap(arr) << endl;
}