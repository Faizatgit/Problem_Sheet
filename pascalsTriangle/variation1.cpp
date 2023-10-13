// Given row number r and column number c. Print the element at position (r, c) in Pascal’s triangle.
#include<iostream>
using namespace std;

int nCr(int n, int r)
{
    long long ans = 1;

    for (int i = 0; i < r; i++)
    {
        ans = ans * (n - i);
        ans = ans/(i + 1);
    }
    return ans;
}

int pascalTriangle(int n, int r)
{
    int ele = nCr(n-1 , r-1);
    return ele;
}

int main()
{
    int n, r;
    cout<<"Enter the value of n and r: "<<endl;
    cin>>n>>r;
    int res = pascalTriangle(n,r);
    cout << "Element at (" << n << "," << r << ") is : "<<res<<endl;

    return 0;
}