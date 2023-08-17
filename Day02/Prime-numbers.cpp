#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
    int sq = sqrt(nb);
	while (i <= sq)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (nb);
}

int main()
{
    int m, n, b = 0, a = 0;

    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (ft_is_prime(i))
        {
            cout << i << "\n";
            a++;
        }
        else
            b++;
    }
    if (b > a && b > n - m)
    {
        cout << "Absent\n";
        return (0);
    }
}