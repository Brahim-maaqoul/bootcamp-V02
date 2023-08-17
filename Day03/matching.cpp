#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;cin>> n;
    while (n--)
    {
        string str;
        cin >> str;
        int res = 1;
        for (int i = 0; i < str.size(); i++)
        {
            if (i==0 && str[i] == '0')
            {
                res = 0;
                break;
            }
            else if (i == 0 && str[i] == '?')
                res = res * 9;
            else if (str[i] == '?')
                res *= 10;
        }
        cout << res << endl;
    }
}