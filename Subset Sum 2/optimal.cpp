#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void findSubset(int ind, vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans)
{
    ans.push_back(ds);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind && nums[i] == nums[i-1]) continue; // Skip duplicates
        ds.push_back(nums[i]);
        findSubset(i+1, nums, ds, ans);
        ds.pop_back();
    }
    
}

vector<vector<int>> subsetWithDup(vector<int>& nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(),nums.end());
    findSubset(0,nums,ds,ans);
    return ans;
} 

int main()
{
    vector<int> nums = {1,2,2};
    vector<vector<int>> res = subsetWithDup(nums);
    cout<<"[ ";
    for (auto i:res)
    {
        cout<<"[ ";
        for ( auto v:i)
        {
            cout<<v<<" ";
        }cout<<" ]";
    }cout<<" ]";
    return 0;
}