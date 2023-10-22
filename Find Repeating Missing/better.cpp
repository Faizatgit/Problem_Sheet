#include<bits/stdc++.h>
using namespace std;

vector<int> findReaptingMissing(vector<int> &arr)
{
    int n = arr.size();
    int hash[n+1] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    int repeating = -1;
    int missing = -1;

    for (int i = 1; i <= n; i++)
    {
        if(hash[i] == 2)
        {
            repeating = i;
        }
        else if(hash[i] == 0)
        {
            missing = i;
        }
        if(repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating,missing};
    
    
}

int main()
{
    vector <int> arr;
    arr = {3, 1, 2, 5, 4, 6, 7, 5};
    vector <int> res = findReaptingMissing(arr);
    cout<<"Repeating: "<<res[0]<<endl;
    cout<<"Missing: "<<res[1]<<endl;
    return 0;
}