#include<iostream>
using namespace std;

int main()
{
	int t, n, speed, clown;
	cin >> t;
	bool first;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		first = true;
		for (int j = 0; j < n; j++)
		{
			cin >> speed;
			if (first)
			{
				clown = speed;
				first = false;
			}
			else
			{
				if (speed > clown)
					clown = speed;
			}
		}
		cout << "Case " << i + 1 << ": " << clown << endl;
	}
	return 0;
}