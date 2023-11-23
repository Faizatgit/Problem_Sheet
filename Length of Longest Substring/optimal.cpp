#include<iostream>
#include<map>
using namespace std;

int solve(string str)
{
    int n = str.size();
    int left = 0;
    int right = 0;
    int len = 0;
    map<char , int> mp;

    while (right<n)
    {
        if (mp[str[right]] != -1)
        {
            left = max(mp[str[right]] + 1, left);
        }

        mp[str[right]] = right;
        len = max(len , right - left + 1);
        right++;
        
    }

    return len;
    
}

int main()
{
   string str = "abcabcbb";
    int res = solve(str);
    cout << "Longest substring without repeating character: " << endl;
    cout << res;
    return 0;
}