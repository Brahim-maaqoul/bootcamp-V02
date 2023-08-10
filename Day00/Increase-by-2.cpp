#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    while (n--)
    {
        int i;
        cin >> i;
        if (i >= 0)
            cout << i + 2 << " "; 
        else
            cout << i << " ";
    }
    cout << endl;
}