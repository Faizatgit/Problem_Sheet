#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    int n = nums.size();
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        if (v.size() == 0 || v[0] != nums[i])
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (nums[i] == nums[j])
                {
                    count++;
                }
            }
            if (count > n / 3)
            {
                v.push_back(nums[i]);
            }
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