#include <iostream>
using namespace std;

int main()
{
	int t, n, num, min, max;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		min = 200, max = -200;
		cin >> n;
		for (int j = 0; j < n; j++)
		{
			cin >> num;
			if (num > max) max = num;
			if (num < min) min = num;
		}
		cout << 2 * (max - min) << endl;
	}

	return 0;
}