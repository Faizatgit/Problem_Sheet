#include <bits/stdc++.h>
using namespace std;

int maxSubArray(int arr[], int n)
{
    int maxi = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        int sum = 0;
        for (int j = i; j < n; ++j)
        {
            // current subarray = arr[i.....j]

            // add the current element arr[j]
            //  to the sum i.e. sum of arr[i...j-1]
            sum += arr[j];
            maxi = max(sum, maxi); // Getting the maximum
        }
    }

    return maxi;
}

int main()
{
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    int n = sizeof(arr) / sizeof(arr[0]);
    int res = maxSubArray(arr, n);
    cout << "Sum of max sub array: " << res << endl;

    return 0;
}