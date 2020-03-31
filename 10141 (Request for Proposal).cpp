#include <iostream>
#include <string>
using namespace std;

int main()
{
	int ReqNo, PropNo, MaxRFP, RFP = 1;
	float price;
	string c, temp;
	bool first = true;

	while (true)
	{
		cin >> ReqNo >> PropNo;
		if (ReqNo == 0 && PropNo == 0)
			break;

		cin.ignore();
		while (ReqNo--)
			getline(cin, c);

		MaxRFP = -1;
		float d;
		int r;
		for (int i = 0; i < PropNo; i++)
		{
			getline(cin, temp);
			cin >> d >> r;

			if ((r > MaxRFP) || (r == MaxRFP && d < price))
			{
				c = temp;
				MaxRFP = r;
				price = d;
			}
			
			cin.ignore();
			for (int j = 0; j < r; j++)
				getline(cin, temp);
		}

		if (!first)
			cout << endl;
		else
			first = false;

		cout << "RFP #" << RFP << endl << c << endl;
		RFP++;
	}

	return 0;
}