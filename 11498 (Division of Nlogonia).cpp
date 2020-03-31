#include<iostream>
using namespace std;

int main()
{
	int k, a, b, n, m;

	cin >> k;
	while (k)
	{
		cin >> n >> m;

		for (int i = 0; i < k; i++)
		{
			cin >> a >> b;
			
			if (a == n || b == m)
				cout << "divisa" << endl;
			if (a > n && b > m)
				cout << "NE" << endl;
			if (a > n && b < m)
				cout << "SE" << endl;
			if (a < n && b > m)
				cout << "NO" << endl;
			if (a < n && b < m)
				cout << "SO" << endl;
		}

		cin >> k;
	}
	return 0;
}