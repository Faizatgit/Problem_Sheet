#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 0)
        {
            swap(arr[mid], arr[low]);
            mid++;
            low++;
        }
        else if (arr[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main()
{
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    int size = arr.size();

    sortArray(arr, size);
    cout << "After sorting: " << endl;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}