#include <iostream>
#include <string>
using namespace std;

int main()
{
	int i, j;
	string c, sub;
	while (cin >> c >> sub)
	{
		for (i = 0, j = 0; j < sub.length();)
		{
			if (c[i] == sub[j])
			{
				i++;
				j++;
			}
			else
				j++;
		}
		if (i == c.length())
		{
			cout << "Yes" << endl;
		}
		else { cout << "No" << endl; }
	}
	return 0;
}