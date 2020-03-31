#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	int i = 1;

	getline(cin, c);
	while (c != "#")
	{
		if (c == "HELLO")
			cout << "Case " << i << ": ENGLISH" << endl;
		else if(c == "HOLA")
			cout << "Case " << i << ": SPANISH" << endl;
		else if(c == "HALLO")
			cout << "Case " << i << ": GERMAN" << endl;
		else if(c == "BONJOUR")
			cout << "Case " << i << ": FRENCH" << endl;
		else if(c == "CIAO")
			cout << "Case " << i << ": ITALIAN" << endl;
		else if (c == "ZDRAVSTVUJTE")
			cout << "Case " << i << ": RUSSIAN" << endl;
		else
			cout << "Case " << i << ": UNKNOWN" << endl;
		i++;
		getline(cin, c);
	}

	return 0;
}