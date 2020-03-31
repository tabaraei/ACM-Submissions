#include <iostream>
using namespace std;

int digit(unsigned long num)
{
	int counter = 0;

	while (num)
	{
		num /= 10;
		counter++;
	}
	return counter;
}

int counter(unsigned long a, unsigned long b)
{
	int cnt = 0, sum, carry = 0;
	while (a || b)
	{
		sum = (a % 10) + (b % 10) + carry;

		if (sum >= 10)
		{
			cnt++;
			carry = 1;
		}
		else
			carry = 0;

		a /= 10;
		b /= 10;
	}
	return cnt;
}

int main()
{
	unsigned long a, b;
	int count;
	cin >> a >> b;

	while (a || b)
	{
		if (digit(a) < 10 && digit(b) < 10)
		{
			count = counter(a, b);

			if (count)
				cout << count;
			else
				cout << "No";

			if (count > 1)
				cout << " carry operations." << endl;
			else
				cout << " carry operation." << endl;
		}

		cin >> a >> b;
	}
	return 0;
}