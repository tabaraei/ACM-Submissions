#include <iostream>
using namespace std;

int main()
{
	int t, n;
	long x;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> n;
		x = (315 * n) + 36962;
		x /= 10;
		if (x < 0) x *= -1;
		cout << x % 10 << endl;
	}

	return 0;
}