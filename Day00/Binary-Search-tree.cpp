#include <iostream>
#include <vector>
#include <stack>
#include <set>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    string str;
    int n;
    while (cin >> str >> n)
    {
        if (str == "insert")
            s.insert(n);
        else if (str == "delete")
        {
            set<int>::iterator it = s.find(n);
                if (it != s.end())
                    s.erase(it);
        }
        else if (str == "exists")
        {
            set<int>::iterator it = s.find(n);
            if (it != s.end())
                cout << "true\n";
            else
                cout << "false\n";
        }
    }
}