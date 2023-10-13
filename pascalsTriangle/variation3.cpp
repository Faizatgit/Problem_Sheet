// Print pascal's triangle

#include<iostream>
#include<vector>
using namespace std;

vector<int> generateRow(int n)
{
    long long ans = 1;
    vector<int> row;
    row.push_back(1);

    for (int i = 1; i < n; i++)
    {
        ans *= (n-i);
        ans = ans/i;
        row.push_back(ans);
    }
    return row;
    
}

vector<vector<int>> pascalTriangle(int n)
{
    vector<vector<int>> arr;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(generateRow(i));
    }
    return arr;
    
}

int main()
{
    int n = 5;
    vector<vector<int>> res = pascalTriangle(n);
    for( auto i:res)
    {
        for(auto it: i)
        {
            cout<<it<<" ";
        }cout<<endl;
    }
    return 0;
}