#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int findSequence(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;

    int longest = 1;
    unordered_set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int num = it;
            while (st.find(num + 1) != st.end())
            {
                num += 1;
                count++;
            }
            longest = max(longest, count);
        }
    }

    return longest;
}

int main()
{
    vector<int> nums = {100, 200, 1, 2, 3, 4};
    int ans = findSequence(nums);
    cout << "Longest consecutive sequence in an array = " << endl;
    cout << ans << endl;
    return 0;
}