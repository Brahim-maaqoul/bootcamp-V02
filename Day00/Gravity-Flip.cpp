#include <iostream>
#include <vector>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    vector<int>v;
    while (n--)
    {
        int i;
        cin >> i;
        v.push_back(i);
    }
    sort(v.begin(), v.end());
    for (auto x: v)
        cout << x << " ";
    cout << endl;
}