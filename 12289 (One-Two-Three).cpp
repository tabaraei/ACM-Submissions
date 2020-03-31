#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	int t;
	cin >> t;
	
	for (int f = 0; f < t; f++)
	{
		cin >> c;
		int i = 0, j = 0, k = 0;

		if (c[0] == 'o')
			i++;
		if (c[1] == 'n')
			i++;
		if (c[2] == 'e')
			i++;

		if (c[0] == 't')
			j++;
		if (c[1] == 'w')
			j++;
		if (c[2] == 'o')
			j++;

		if (c.length() > 3) cout << "3" << endl;
		else if (i >= 2) cout << "1" << endl;
		else if (j >= 2) cout << "2" << endl;
	}
	return 0;
}