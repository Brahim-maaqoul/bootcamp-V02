#include <iostream>
#include <algorithm>

using namespace std;

#define mod 1000000007

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
    long long n;cin >> n;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        cout << Pow(a, b) % mod << endl;
    }
}