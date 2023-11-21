//  Moore’s Voting Algorithm:
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int> &nums)
{
    int n = nums.size();
    int ele;
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(count == 0)
        {
            ele = nums[i];
            count = 1;
        }
        else if(nums[i] == ele)
        {
            count++;
        }
        else{
            count--;
        }
    }

    int count1 = 0;
    for(int i = 0; i < n; i++)
    {
        if(nums[i] == ele)
        {
            count1++;
        }
    }
    if(count1 > (n/2))
    {
        return ele;
    }
    else{
        return 0;
    }
}

int main()
{
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(nums);
    cout << "The majority element is: " << ans << endl;
    return 0;
}