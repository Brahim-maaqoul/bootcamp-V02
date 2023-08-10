#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long v[n], x = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    for (int i = 1; i < n; i++)
    {
        if (v[i] < v[i - 1])
        {
            x += v[i - 1] - v[i];
            v[i] = v[i - 1];
        }
    }
    cout << x << endl;
}