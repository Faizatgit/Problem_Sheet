#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin , str);
    int n = str.length();
    map<char,int> mp;
    for(int i = 0; i < n; i++)
    {
        char ch = str[i];
        if(isalpha(str[i]))
        {
            mp[ch]++;
        }
    }
    for( auto i:mp)
    {
        if(i.second == 2)
        {
            cout<<i.first<<endl;
            break;
        }
    }cout<<endl;
    return 0;
}