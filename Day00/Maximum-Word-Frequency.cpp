#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int n, j = 0, cp = 0;
    string str, s1;
    cin >> n;
    if (n < 1)
        return (0);
    map <string, int> M;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        M[str]++;
        if (M[str] > j)
        {
            s1 = str;
            j = M[str];
        }
        else if (M[str] == j && s1 < str)
            s1 = str;
    }
    cout << s1 << " " << j;
}