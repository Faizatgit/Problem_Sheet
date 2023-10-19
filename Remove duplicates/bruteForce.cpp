#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }
    int k = st.size();
    int j = 0;

    for (auto i : st)
    {

        arr[j] = i;
        j++;
    }

    return k;
}

int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}