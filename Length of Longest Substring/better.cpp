#include<iostream>
#include<vector>
#include<unordered_set>
#include<climits>
using namespace std;

int solve(string str)
{
    int n = str.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        unordered_set <char> set;
        for (int j = i; j < n; j++)
        {
            if (set.find(str[j]) != set.end())
            {
                maxi = max(maxi,j-i);
                break;
            }
            
            set.insert(str[j]);
        }
        
    }
    return maxi;
    
}

int main()
{
    string str = "abcabcbb";
    int res = solve(str);
    cout<<"Longest substring without repeating character: "<<endl;
    cout<<res;
    return 0;
}