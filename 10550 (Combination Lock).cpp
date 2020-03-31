#include <iostream>
#include <string>
using namespace std;

int main()
{
	int position, a, b, c, degree;

	cin >> position >> a >> b >> c;
	while (position || a || b || c)
	{
		degree = 1080;

		for (int i = position; i != a; i--)
		{
			if (i == -1)
			{
				i = 39;
				if (i == a) break;
			}
			degree += 9;
		}

		for (int i = a; i != b; i++)
		{
			if (i == 40)
			{
				i = 0;
				if (i == b) break;
			}
			degree += 9;
		}

		for (int i = b; i != c; i--)
		{
			if (i == -1)
			{
				i = 39;
				if (i == c) break;
			}
			degree += 9;
		}

		cout << degree << endl;
		cin >> position >> a >> b >> c;
	}

	return 0;
}