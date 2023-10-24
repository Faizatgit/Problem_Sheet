// variant 1
#include <bits/stdc++.h>
using namespace std;

// string twoSumProb(vector<int> &arr, int target)
// {
//     int n = arr.size();

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] + arr[j] == target)
//             {
//                 return "Yes";
//             }
//         }
//     }

//     return "No";
// }

// int main()
// {
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string res = twoSumProb(arr, target);
//     cout << res << endl;
//     return 0;
// }

vector<int> twoSumProb(vector<int> &arr, int target)
{
    vector<int> ans;

    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
        
    }
    
    return {-1,-1};
}

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> res = twoSumProb(arr,target);
    cout<<"Indexs are: "<<endl;
    for(auto i:res)
    {
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}