#include <iostream>
#include <cmath>

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
    int n; cin>> n;
    cout << (Pow(2,n) % mod);
}