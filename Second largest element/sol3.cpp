#include <iostream>
#include <vector>
using namespace std;

int secondlargest(vector<int> &nums)
{
    int n = nums.size();
    int first = 0;
    int second = -1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] > nums[first])
        {
            second = first;
            first = i;
        }
        else if (nums[i] < nums[first])
        {
            if (second == -1 || nums[second] < nums[i])
            {
                second = i;
            }
        }
    }
    return second;
}

int main()
{
    vector<int> nums = {2, 4, 6, 2, 6, 4, 8, 8};
    int index = secondlargest(nums);
    cout << "Second largest elment in an array is: " << nums[index] << endl;
    return 0;
}