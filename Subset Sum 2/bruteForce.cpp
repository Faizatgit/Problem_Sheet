#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

void findSubSet(int ind, vector<int> &nums, vector<int> &ds, set<vector<int>> &res)
{
    if (ind == nums.size())
    {
        sort(ds.begin(),ds.end());
        res.insert(ds);
        return;
    }
    ds.push_back(nums[ind]);
    findSubSet(ind+1,nums,ds,res);
    // remove the last element from current subset and
    ds.pop_back();
    findSubSet(ind+1,nums,ds,res);
    
}

vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<vector<int>> ans;
    vector<int> ds;
    set<vector<int>> res;
    findSubSet(0,nums,ds,res);
    for(auto i:res)
    {
        ans.push_back(i);
    }
    return ans;
}

int main()
{
    vector<int> nums = {1,2,2};
    vector<vector<int>> res = subsetsWithDup(nums);
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