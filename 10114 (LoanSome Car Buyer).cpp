#include <iostream>
#include <string>
using namespace std;

struct record
{
	int monthNo;
	double depPerc;
};

int main()
{
	int month, depreciationNo, result, arraycount, MonthlyPayment;
	double payment, loan, carCost, payedCost, depreciation;
	record* Array;

	while (cin >> month >> payment >> loan >> depreciationNo)
	{
		if (month < 0)
			break;
		MonthlyPayment = loan / month;
		payedCost = loan;
		carCost = loan + payment;
		result = -1;
		arraycount = 0;
		depreciation = 0.0;
		Array = new record[depreciationNo];

		for (int i = 0; i < depreciationNo; i++)
		{
			cin >> Array[i].monthNo;
			cin >> Array[i].depPerc;
		}

		while (true)
		{
			result++;

			if (Array[arraycount].monthNo == result)
			{
				depreciation = Array[arraycount].depPerc;
				carCost *= (1 - depreciation);
				arraycount++;
			}

			else
			{
				carCost *= (1 - depreciation);
			}
			payedCost -= MonthlyPayment;

			if (payedCost < carCost)
				break;
		}

		cout << result << " month";
		if (result != 1)
			cout << "s" << endl;
		else
			cout << endl;

		delete[] Array;
	}
	return 0;
}