#include<bits/stdc++.h>
using namespace std;

void longestPalindrome(string str)
{
    string word;
    istringstream iss(str);
    map <string , int> mp;
    while (iss >> word)
    {
        string str1 = word;
        reverse(str1.begin(),str1.end());
        if(str1 == word)
        {
            mp[word] = word.length();
        }
    }
    
    int max = INT_MIN;
    string str2;

    for(auto i:mp)
    {
        if(i.second > max)
        {
            str2 = "";
            max = i.second;
            str2 = i.first;
        }
    }
    cout << "Longest palindromic word in the given text :"<< str2 << " "<<max<<endl;
    
}

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin , str);
    longestPalindrome(str);
    return 0;
}