#include <bits/stdc++.h>
using namespace std;

bool parenthesisMatch(string str)
{
    stack<char> stack;

    for (auto c : str)
    {
        if (c == '(' || c == '[' || c == '{')
        {
            stack.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (stack.empty())
            {
                return false;
            }
            char ch = stack.top();
            stack.pop();

            if ((c == '(' && ch != ')') || (c == '{' && ch != '}') || (c == '[' && ch != ']'))
            {
                return false;
            }
        }
    }
    return stack.empty();
}

int main()
{
    string str;
    cout << "Enter parenhesis string: " << endl;
    cin >> str;
    if (parenthesisMatch(str))
    {
        cout << "Balanced parenthesis!" << endl;
    }
    else
    {
        cout << "Unbalanced parenthesis!" << endl;
    }
    return 0;
}