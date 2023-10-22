#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeating(vector<int> arr)
{
    int repeating = -1;
    int missing = -1;
    int n = arr.size();
   

    for (int i = 1; i <= n; i++)
    {
         int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                count++;
            }
        }
        if (count == 2)
        {
            repeating = i;
        }
        if (count == 0)
        {
            missing = i;
        }
        if (repeating != -1 && missing != -1)
        {
            break;
        }
    }

    return {repeating, missing};
}

int main()
{
    vector<int> arr;
    arr = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> ans = findMissingRepeating(arr);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}
