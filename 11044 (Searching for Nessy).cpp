#include <iostream>
using namespace std;

int main()
{
	int t, a, b;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a >> b;

		if (a >= 6 && b >= 6 && a <= 10000 && b <= 10000)
			cout << (a / 3)*(b / 3) << endl;
	}
	return 0;
}