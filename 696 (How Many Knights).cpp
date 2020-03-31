#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n, m, a, b;
	while (cin >> n >> m)
	{
		if (!n && !m)
			break;

		a = n, b = m;
		if (n > m)
			swap(n, m);

		if (n == 1)
			cout << m;
		else if (n == 2)
			cout << 2*((m + 3) / 4 + (m + 2) / 4);
		else
			cout << ((n + 1) / 2)*((m + 1) / 2) + (n / 2)*(m / 2);

		cout << " knights may be placed on a " << a << " row " << b << " column board." << endl;

	}
	return 0;
}