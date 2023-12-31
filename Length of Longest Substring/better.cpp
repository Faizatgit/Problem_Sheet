#include <iostream>
#include <unordered_set>
#include <climits>
using namespace std;

int solve(string str)
{
    int n = str.size();
    int maxi = INT_MIN;
    int l = 0;
    unordered_set<char> set;

    for (int r = 0; r < n; r++)
    {
        if (set.find(str[r]) != set.end())
        {
            while (l < r && set.find(str[r]) != set.end())
            {
                set.erase(str[r]);
                l++;
            }
        }
        set.insert(str[r]);
        maxi = max(maxi, r - l + 1);
    }
    return maxi;
}

int main()
{
    string str = "abcabcbb";
    int res = solve(str);
    cout << "Longest substring without repeating character: " << endl;
    cout << res;
    return 0;
}