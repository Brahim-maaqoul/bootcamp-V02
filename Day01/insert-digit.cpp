#include <string>
#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        char d;
        cin >> n >> d;
        string c;
        cin >> c;
        for (size_t i = 0; i < c.size(); i++)
        {
            if (d > c[i])
            {
                cout << d;
                d = '\0';
            }
            cout << c[i];
        }
        if (d)
            cout << d;
        cout << "\n";
    }
}