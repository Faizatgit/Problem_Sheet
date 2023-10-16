#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr)
{
    int maxpro = 0;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j<n ; j++)
        {
            if (arr[j] > arr[i])
            {
                maxpro = max(arr[j]-arr[i],maxpro);
            }
        }
        
    }

    return maxpro;
    
}

int main()
{
    vector<int> arr = {7,1,5,3,6,4};

    int res = maxProfit(arr);
    cout<<"Maximum profit: "<<res<<endl;

    return 0;
}