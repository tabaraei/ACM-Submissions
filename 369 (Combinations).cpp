#include <iostream>
using namespace std;

int main()
{
	int n, m, big, small, j;
	long long int sum1, sum2;
	cin >> n >> m;
	while (n && m)
	{
		sum1 = sum2 = 1;
		j = 2;
		if (n - m > m)
		{
			big = n - m;
			small = m;
		}
		else
		{
			big = m;
			small = n - m;
		}
		for (int i = n; i > big; i--)
		{
			sum1 *= i;
			if (sum1%j == 0 && j <= small)
			{
				sum1 /= j;
				j++;
			}
		}
		while (j <= small)
		{
			sum2 *= j;
			j++;
		}
		cout << n << " things taken " << m << " at a time is " << sum1 / sum2 << " exactly." << endl;
		cin >> n >> m;
	}
	return 0;
}