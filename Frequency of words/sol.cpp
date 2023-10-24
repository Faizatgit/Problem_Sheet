#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cout << "Enter a string: " << endl;
    getline(cin, str); // to read a line of text from the standard input (keyboard) and store it in str.
    istringstream s(str);
    map<string, int> freq;
    string word;

    while (s >> word)
    {
        freq[word]++;
    }

    cout << "Words in a string and frequency: " << endl;
    for (auto i : freq)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << endl;

    return 0;
}