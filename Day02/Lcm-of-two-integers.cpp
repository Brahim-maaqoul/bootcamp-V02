#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;  
  
long long gcd(long long  a, long long b)
{  
	if (b == 0) 
		return a;  
	return gcd(b, a % b); 
}

int main()
{
    long long a, b1;

    cin >> a >> b1;
    cout << (a / gcd(a, b1)) * b1;
}