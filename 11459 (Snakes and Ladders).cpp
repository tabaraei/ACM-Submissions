#include <iostream>
using namespace std;

struct destination
{
	int first;
	int last;
};

int main()
{
	int n, a, b, c, dice;
	int *people;
	destination *d;
	bool found;

	cin >> n;
	while (n--)
	{
		cin >> a >> b >> c;
		d = new destination[b];
		people = new int[a];
		found = false;

		for (int i = 0; i < b; i++)
		{
			cin >> d[i].first;
			cin >> d[i].last;
		}
		for (int i = 0; i < a; i++)
			people[i] = 1;

		int j = 0;
		for (int i = 0; i < c; i++)
		{
			cin >> dice;
			if (!found)
			{
				if (j >= a)
					j = 0;

				people[j] += dice;
				for (int k = 0; k < b; k++)
				{
					if (people[j] == d[k].first)
					{
						people[j] = d[k].last;
						break;
					}
				}

				if (people[j] >= 100)
				{
					people[j] = 100;
					found = true;
				}

				j++;
			}
		}

		if (a == 0)
			continue;

		for (int i = 0; i < a; i++)
			cout << "Position of player " << i + 1 << " is " << people[i] << "." << endl;

		delete[] d;
	}
	return 0;
}