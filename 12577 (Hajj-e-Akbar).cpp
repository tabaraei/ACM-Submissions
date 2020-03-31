#include <iostream>
#include <string>
using namespace std;

int main()
{
	int f = 0;
	string c;
	
	cin >> c;
	while (c != "*")
	{
		if (c == "Hajj")
			cout << "Case " << f + 1 << ": Hajj-e-Akbar" << endl;
		if (c == "Umrah")
			cout << "Case " << f + 1 << ": Hajj-e-Asghar" << endl;
		f++;
		cin >> c;
	}
	return 0;
}