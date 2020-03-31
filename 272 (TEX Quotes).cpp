#include <iostream>
#include <string>
using namespace std;

int main()
{
	string c;
	bool firstQ = true;
	char* quote = "\"";

	while (getline(cin,c))
	{
		for (int i = 0; i < c.size(); i++)
		{
			if (c[i] == *quote)
			{
				if (firstQ)
				{
					cout << "``";
					firstQ = false;
				}
				else
				{
					cout << "''";
					firstQ = true;
				}
			}

			else
				cout << c[i];
		}
		cout << endl;
	}

	return 0;
}