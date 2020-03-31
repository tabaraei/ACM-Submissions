#include <iostream>
#include <string>
using namespace std;

int main()
{
	int t, sum = 0, num;
	string c;
	cin >> t;
	
	for (int f = 0; f < t; f++)
	{
		cin >> c;
		if (c == "donate")
		{
			cin >> num;
			sum += num;
		}
		if (c == "report")
			cout << sum << endl;
	}
	return 0;
}