#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;
const int maxN = 2e5;

int main()
{
    int n,q;
    cin >> n >> q;
    long long x[maxN + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        x[i] ^= x[i-1];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
       cout << (x[b] ^ x[a-1]) << "\n";
    }
}