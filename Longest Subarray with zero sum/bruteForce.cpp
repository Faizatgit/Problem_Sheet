#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int find(vector<int> &nums)
{
    int n = nums.size();
  
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            if (sum == 0)
            {
                maxi = max(maxi , j+1-i);
            }
        }
    }

    return maxi;
    
}

int main()
{
    vector<int> nums = {9, -3, 3, -1, 6, -5};
    int res = find(nums);
    cout<<"Length of longest subarray = "<<endl;
    cout<<res;
    return 0;
}