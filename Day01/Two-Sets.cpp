#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long i = 0, cp = 0;
    cp = (n*(n+1))/2;
    if (cp % 2 != 0)
        cout << "NO\n";
    else
    {
        cout << "YES ";
        set<long long>s;
        cp /=2;
        for (int i = n; i > 0; i--)
            if(cp >= i)
            {
                s.insert(i);
                cp -= i;
            }
        cout << s.size() << " ";
        for (auto k: s)
            cout << k << " ";
        cout << n - s.size()<< " ";
        for (size_t i = 1; i <= n; i++)
            if(s.find(i) == s.end())
                cout << i << " ";
        cout << endl;
        
    }
}