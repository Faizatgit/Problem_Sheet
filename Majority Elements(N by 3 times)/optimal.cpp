#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v;
    int count1 = 0;
    int count2 = 0;
    int ele1 = INT_MIN;
    int ele2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (count1 == 0 && nums[i] != ele2)
        {
            ele1 = nums[i];
            count1++;
        }
        else if (count2 == 0 && nums[i] != ele1)
        {
            ele2 = nums[i];
            count2++;
        }
        else if (nums[i] == ele1)
            count1++;
        else if (nums[i] == ele2)
            count2++;
        else
        {
            count1--;
            count2--;
        }
    }
    count1 = 0;
    count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == ele1)
            count1++;
        if (nums[i] == ele2)
            count2++;
    }
    int mini = (int)(n / 3) + 1;
    if (count1 >= mini)
        v.push_back(ele1);
    if (count2 >= mini)
        v.push_back(ele2);
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