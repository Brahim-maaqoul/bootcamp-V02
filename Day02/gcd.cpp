#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;  
  
int gcd(int a, int b)
{  
	if (b == 0) 
		return a;  
	return gcd(b, a % b); 
}

int main()
{
	int	n, ret = 0;

	cin >> n;
	vector <int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	ret = v[0];
	for (int i = 1; i < n; i++)
		ret = gcd(ret, v[i]);
	cout << ret;
}