#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;
#define mod 1000000007

long long factorial(long long n)
{
    if (n == 0 || n == 1)
        return 1;
    return (n * factorial(n - 1)) % mod;
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
    string str;
    cin >> str;
    map<char,int>m;
    for (int i = 0; i < str.size(); i++)
        m[str[i]]++;
    long long res = factorial(str.size());
    for (auto s:m)
        res = (res * Pow(factorial(s.second),mod-2))% mod;
    cout << res;
}