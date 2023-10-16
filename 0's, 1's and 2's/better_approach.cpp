#include<bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{
    int count = 0;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            count++;
        }
        else if(arr[i] == 1)
        {
            count1++;
        }
        else{
            count2++;
        }
    }

    for (int i = 0; i < count; i++)
    {
        arr[i] = 0;
    }

    for (int i = count; i < count + count1; i++)
    {
        arr[i] = 1;
    }

    for (int i = count + count1; i < n; i++)
    {
        arr[i] = 2;
    }

    
}

int main()
{
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    int n = arr.size();
    // int n = 6;

    sortArray(arr, n);

    for(auto i:arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    

    return 0;
}