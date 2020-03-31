#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	int sum, counter;
	while (getline(cin, c))
	{
		sum = 0, counter = 0;
		if (c == "*")
			break;

		for (int i = 0; i < c.length(); i++)
		{
			switch (c[i])
			{
			case 'W':
				sum += 64;
				break;
			case 'H':
				sum += 32;
				break;
			case 'Q':
				sum += 16;
				break;
			case 'E':
				sum += 8;
				break;
			case 'S':
				sum += 4;
				break;
			case 'T':
				sum += 2;
				break;
			case 'X':
				sum += 1;
				break;
			case '/':
				if (sum == 64)
				{
					counter++;
				}
				sum = 0;
				break;
			}
		}
		cout << counter << endl;
	}
	return 0;
}