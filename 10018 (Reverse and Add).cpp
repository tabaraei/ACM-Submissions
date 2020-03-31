#include <iostream>
#include <string>
using namespace std;

unsigned long power(int a, unsigned long b)
{
	unsigned long p = 1;
	for (int i = 0; i < b; i++)
		p *= a;

	return p;
}

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

unsigned long inverse(unsigned long num)
{
	unsigned long inv = 0;
	int dig = digit(num) - 1;

	while (num)
	{
		inv += (num % 10)*power(10, dig);
		num /= 10;
		dig--;
	}
	return inv;
}

bool palindrome(string c)
{
	int i = 0, j = c.size() - 1;
	while (i <= j)
	{
		if (c[i] != c[j])
			return false;

		i++;
		j--;
	}
	return true;
}

int main()
{
	string str;
	int t, counter;
	unsigned long a;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a;
		counter = 0;

		while (counter < 1000 && a <= 4294967295 && a != 196)
		{
			str = to_string(a);

			if (palindrome(str))
			{
				cout << counter << " " << a << endl;
				break;
			}
			else
				a += inverse(a);

			counter++;
		}
	}
	return 0;
}