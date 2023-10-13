//Given the row number n. Print the n-th row of Pascal’s triangle.
#include<iostream>
using namespace std;

int nCr(int n, int r)
{
    long long ans = 1;
    for (int i = 0; i < r; i++)
    {
        ans *= (n - i);
        ans = ans/(i+1);
    }
    return ans;
    
}

void pascalTriangle(int n)
{
    cout<<"Elements are: ";
    for (int i = 1; i <= n; i++)
    {
        cout<<nCr(n-1,i-1)<<" ";
    }cout<<endl;
    
}

int main()
{
    int n = 5;
    pascalTriangle(n);
    return 0;
}