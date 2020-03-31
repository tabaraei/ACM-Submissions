#include<iostream>
using namespace std;

int main()
{
	int t, n, x = 1;
	int zero, nonzero;
	cin >> t;

	while (t)
	{
		zero = nonzero = 0;

		for (int i = 0; i < t; i++)
		{
			cin >> n;

			if (n)
				nonzero++;
			else
				zero++;
		}

		cout << "Case " << x << ": " << nonzero - zero << endl;
		x++;
		cin >> t;
	}
	return 0;
}