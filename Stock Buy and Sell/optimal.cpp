#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &arr)
{
    int maxPro = 0;
    int minPrice = INT_MAX;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        minPrice = min(minPrice , arr[i]);
        maxPro = max(maxPro , arr[i] - minPrice);
    }

    return maxPro;
    
}

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    int res = maxProfit(arr);
    cout<<"Maximum profit: "<<res<<endl;

    return 0;
}