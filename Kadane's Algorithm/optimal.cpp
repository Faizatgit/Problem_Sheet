#include <bits/stdc++.h>
#include<cmath>
using namespace std;

long long maxSubbarraySum(int arr[] , int n)
{
    long long maxi = LONG_MIN;
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > maxi)
        {
            maxi = sum;
        }
        if(sum < 0)
        {
            sum = 0;
        }
    }

    return maxi;
    
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    long long res = maxSubbarraySum(arr,n);

    cout << "Max sub array Sum is: "<<res<<endl ;

    return 0;
}