#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    map<int, int>ma;
    for (size_t i = 0; i < n; i++)
    {
        int j;cin>> j;
        if (ma[m - j])
        {
            cout << ma[m - j] << " " << i + 1 << endl;
            return 0;
        }
        ma[j] = i+1;
    }
    cout << "IMPOSSIBLE\n";
}