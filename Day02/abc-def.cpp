#include <iostream>

using namespace std;
int main()
{
    long long a;
    long long res1 = 1, res2 = 1;
    long long mod = 998244353;
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        res1 = (res1 * (a%mod))%mod; 
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        res2 = (res2 * (a%mod))%mod; 
    }
    res1= (mod + (res1 - res2)% mod) %mod;
    cout << res1;
}