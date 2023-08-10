#include <iostream>
#include <vector>
#include <stack>
// #include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    stack<int>s;
    while (n--)
    {
        int i, j;
        scanf("%d", &i);
        if (i == 1)
        {
            scanf("%d",&j);
            s.push(j);
        }
        else if (i == 2)
        {
            if (!s.empty())
                s.pop();
        }
        else if (i == 3)
        {
            if (!s.empty())
                printf("%d\n", s.top());
            else
                printf("Empty!\n");        
        }
    }
 
}