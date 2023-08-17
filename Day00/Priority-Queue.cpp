#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector <priority_queue<int> >v(n);
    while (q--)
    {
        int key, casee;
        cin >> key >> casee;
        if (key == 0)
        {
            int idk;
            cin >> idk;
            v[casee].push(idk);
        }
        else if (key == 1)
        {
            if (!v[casee].empty())
                cout << v[casee].top() << endl;
        }
        else if (key == 2)
        {
            if (!v[casee].empty())
                v[casee].pop();
        }
    }
}
