#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n;cin>> n;
        int a;
        for (int i = 0; i< n;i++)
            cin >> a;
        int k = 10 - n;
        cout << k * (k-1)*3 << endl;
    }
}