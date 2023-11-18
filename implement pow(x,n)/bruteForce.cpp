#include<iostream>
using namespace std;

double mypower(double num, int n)
{
    double ans = 1.0;
    for(int i = 0; i < n; i++)
    {
        ans = ans * num;
    }

    return ans;
}

int main()
{
    double x = 2.00000;
    int n = 10;
    double res = mypower(x,n);
    cout << "Result: "<<res<<endl;
    return 0;
}