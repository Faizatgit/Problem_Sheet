#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout<<"Enter a string: ";
    getline(cin , str);
    string word = "";
    int n = str.length();
    map<string,int> mp;
    for(int i = 0; i < n; i++)
    {
        word += str[i];
        if(str[i+1] == ' ' || str[i+1] == '\0')
        {
            mp[word]++;
            word = "";
            i = i+1;
        }
        
    }
    for( auto i:mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl;
    return 0;
}