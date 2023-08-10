#include <iostream>
#include <vector>
#include <stack>
// #include <bits/stdc++.h>
using namespace std;

void solve(string &s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '[')
            st.push(s[i]);
        else
        {
            if (st.empty())
            {cout << "No\n";return;}
            else if (st.top() == '(' && s[i] == ')')
                st.pop();
            else if (st.top() == '[' && s[i] == ']')
                st.pop();
            else{cout << "No\n"; return;}
        }
    }
    if (st.empty())
        cout << "Yes\n";
    else
        cout << "No\n";
}

int main()
{
    int n;
    string str;
    getline(cin, str);
    n = stoi(str);
    while (n--)
    {
        string s;
        getline(cin, s);
        solve(s);
    }
 
}
// 3
// ([])
// (([()])))
// ([()[]()])()