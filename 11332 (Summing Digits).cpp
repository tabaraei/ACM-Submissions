#include <iostream>
using namespace std;

int main()
{
	int sum;
	long n;
	cin >> n;

	while (n)
	{
		sum = 0;

		while ((n / 10) > 0)
		{
			while (n)
			{
				sum += n % 10;
				n = n / 10;
			}

			n = sum;
			sum = 0;
		}

		cout << n << endl;
		cin >> n;
	}

	return 0;
}