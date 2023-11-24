#include <iostream>
#include <vector>
using namespace std;

int subarraywithxork(vector<int> nums, int k)
{
    int n = nums.size();
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int xorr = 0;
            for (int k = i; k <= j; k++)
            {
                xorr = xorr ^ nums[k];
            }

            if (xorr == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraywithxork(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}