#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long n;cin >> n;long long cp = 0;
    long long d = 1 - (4 * (-2 * n));
    cp = (-1 + sqrt(d)) / 2;
    cout << cp << endl;
}