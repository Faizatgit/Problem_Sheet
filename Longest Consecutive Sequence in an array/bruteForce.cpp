#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<int> &nums,int num)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if(nums[i] == num)
        {
            return true;
        }
    }

    return false;
    
}

int findSequence(vector<int> &nums)
{
    int n = nums.size();
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        int num = nums[i];
        int count = 1;

        while (linearSearch(nums,num+1) == true)
        {
            num += 1;
            count++;
        }

        longest = max(longest , count);
        
    }

    return longest;
    
}

int main()
{
    vector<int> nums = {100, 200, 1, 2, 3, 4};
    int ans = findSequence(nums);
    cout<<"Longest consecutive sequence in an array is = "<<endl;
    cout<<ans;
    return 0;
}
