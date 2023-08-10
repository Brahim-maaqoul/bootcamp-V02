#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <map>

using namespace std;
const int maxN = 2e5;

int main()
{
    int n,q;
    cin >> n >> q;
    long long x[maxN + 1];
    long long cp = 0;
    map<long long, int>m;
    long long sum = 0;
    m[0]++;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i];
        x[i] += x[i-1];
    }
    for (int i = 1; i <= n; i++)
    {
        // cout << "|||" << x[i] << "|||\n";
        sum = x[i];
        cp += m[sum - q];
        m[sum]++;
    }
    cout << cp << endl;
}
// 0 2 1 4 9 7