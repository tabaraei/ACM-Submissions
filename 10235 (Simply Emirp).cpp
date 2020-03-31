#include <iostream>
using namespace std;

int Digit(int x)
{
	int counter = 0;
	while (x > 0)
	{
		x = x / 10;
		counter++;
	}
	return counter;
}
int power(int a, int b)
{
	int exponent = 1;
	for (int i = 0; i < b; i++)
		exponent *= a;
	return exponent;
}
int Revi(int x)
{
	int dig = Digit(x) - 1;
	int sum = 0;
	while (x)
	{
		int remain = x % 10;
		sum += remain*power(10, dig);
		dig--;
		x = x / 10;
	}
	return sum;
}

int main()
{
	int t, rev;
	bool prime, Revbool;
	while (cin >> t)
	{
		prime = true;
		Revbool = true;
		for (int i = 2; i <=t/2; i++)
		{
			if (t%i == 0)
				prime = false;
		}

		if (prime == false)
			cout << t << " is not prime." << endl;
		else
		{
			rev = Revi(t);
			for (int i = 2; i <=rev/2; i++)
			{
				if (rev%i == 0)
					Revbool = false;
			}

			if (Revbool == false || rev == t)
				cout << t << " is prime." << endl;
			else
				cout << t << " is emirp." << endl;
		}
	}
	return 0;
}