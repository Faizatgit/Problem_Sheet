#include <iostream>
#include <vector>
using namespace std;

int trap(vector<int> &nums)
{
    int n = nums.size();
    int waterTrapped = 0;
    vector<int> prefix(n, 0);
    vector<int> sufix(n, 0);
    prefix[0] = nums[0];
    sufix[n - 1] = nums[n - 1];

    for (int i = 1; i < n; i++)
    {
        prefix[i] = max(prefix[i - 1], nums[i]);
    }
    for (int i = n - 2; i >= 0; i--)
    {
        sufix[i] = max(sufix[i + 1], nums[i]);
    }
    for (int i = 0; i < n; i++)
    {
        waterTrapped += min(prefix[i], sufix[i]) - nums[i];
    }

    return waterTrapped;
}
int main()
{
    vector<int> arr;
    arr = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "The water that can be trapped is " << trap(arr) << endl;
}