#include<iostream>
#include<vector>
using namespace std;

int countPairs(vector<int> &arr)
{
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] > 2*arr[j])
            {
                count++;
            }
            
        }
        
    }
    return count;
}

int main()
{
    vector<int> nums = {4, 1, 2, 3, 1};
    int cnt = countPairs(nums);
    cout<<"The number of reverse pairs is: "<<cnt<<endl;
    return 0;
}