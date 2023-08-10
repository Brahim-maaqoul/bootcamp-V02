#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        double low = 0;
        double hi = 1e5;
        double mid = 0;
        while (hi-low > 0.0000001)
        {
            mid = (low + hi) / 2;
            if ((a * mid) + (b * sin(mid)) - c > 0)
                hi = mid ;
            else
                low = mid;
        }
        cout << fixed;
        cout << mid<<endl;
    }
}