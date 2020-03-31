#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t, n, m;
	char chess;
	cin >> t;
	while (t--)
	{
		cin >> chess;
		cin >> n >> m;

		if (chess == 'r' || chess == 'Q')
			cout << min(n, m);

		if (chess == 'k')
			cout << ((m + 1) / 2) * ((n + 1) / 2) + (m / 2)*(n / 2);

		if (chess == 'K')
			cout << ((n + 1) / 2)*((m + 1) / 2);

		cout << endl;
	}
	return 0;
}