#include <iostream>
using namespace std;

int main()
{
	int n, a, b, c;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b >> c;

		if (a > b) swap(a, b);
		if (a > c) swap(a, c);
		if (b > c) swap(b, c);

		cout << "Case " << i + 1 << ": " << b << endl;
	}
	return 0;
}