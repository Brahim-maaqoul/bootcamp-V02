#include <iostream>
#include <algorithm>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
        // Check if x is present at mid
        if (arr[m] == x)
            return m;
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    return -1;
}

int main()
{
    int n;cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++)
        cin >> arr[i];
    int m;cin>>m;
    int arr1[m];
    for (size_t i = 0; i < m; i++)
    {
        cin >> arr1[i];
        if (binarySearch(arr,0,n-1,arr1[i]) == -1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    
}