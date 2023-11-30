#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 4, 6, 2, 6, 4, 8, 8};
    sort(nums.begin(), nums.end());
    int n = nums.size();
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }
    int m = st.size();
    if (m >= 2)
    {
        auto secondLast = prev(st.end(), 2);
        cout << "Second largest element is: " << *secondLast;
    }

    return 0;
}