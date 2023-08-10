#include <iostream>
#include <vector>

using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    vector<int> value(n);
    int maxValue = 0;
    for (size_t i = 0; i <n; i++)
    {
        cin >> value[i];
        maxValue = max(maxValue, value[i]);
    }
    long long low = maxValue;
    long long high = 1e18;
    long long maximumSum = 1e18;
    while (low <= high)
    {
        long long mid = (low + high) / 2;
        int cp = 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum + value[i] > mid)
            {
                sum = 0;
                cp++;
            }
            sum += value[i];
        }
        if (cp > k)
            low = mid + 1;
        else
        {
            if (mid < maximumSum)
                maximumSum = mid;
            high = mid - 1;
        }
    }
    cout << maximumSum;
}