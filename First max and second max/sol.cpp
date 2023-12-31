#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 11, 13, 3, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    cout << "Maximum element: " << max << endl;
    int max2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max2 && arr[i] != max)
        {
            max2 = arr[i];
        }
    }
    cout << "Second maximum element: " << max2;

    return 0;
}