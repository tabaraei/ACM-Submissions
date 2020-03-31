#include <iostream>
using namespace std;

int main()
{
	int t;
	int a, b, c;
	cin >> t;
	
	for (int f = 0; f < t; f++)
	{
		cin >> a >> b >> c;
		if (a <= 20 && b <= 20 && c <= 20)
			cout << "Case " << f + 1 << ": good" << endl;
		else
			cout << "Case " << f + 1 << ": bad" << endl;
	}
	return 0;
}