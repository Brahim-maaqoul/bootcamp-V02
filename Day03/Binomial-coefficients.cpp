#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define mod 1000000007

vector<long long>v(1e6+1);

long long factorial(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    if (v[n])
        return v[n];
    v[n] = (n * factorial(n - 1)) % mod;
    return v[n];
}

long long Pow(long long a, long long b)
{
    if (b == 0)
        return 1;
    else if (b % 2 == 0)
    {
        long long y = Pow(a, b / 2);
        return ((y * y) % mod);
    }
    else
        return ((a * Pow(a, b - 1)) % mod);
}

int main()
{
    int t; cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long a1 = factorial(a);
        long long b1 = factorial(b);
        long long c = factorial(a - b);
        cout << (((a1*Pow(b1,mod-2))%mod)*Pow(c,mod-2))%mod << "\n";
    }
}