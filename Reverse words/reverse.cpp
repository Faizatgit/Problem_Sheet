#include<bits/stdc++.h>
using namespace std;

void reverse(string str)
{
    istringstream iss(str);
    string word;
    stack <string> st;
    while (iss >> word)
    {
        st.push(word);
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;

}

int main()
{
    string str;
    cout<<"Enter a string: ";
    getline(cin , str);
    reverse(str);
    return 0;
}