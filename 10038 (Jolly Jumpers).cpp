#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	bool jolly;
	int a;
	int array1[3000], array2[3000];

	while (cin >> a)
	{
		jolly = true;
		for (int i = 0; i < a; i++)
			cin >> array1[i];
		if (a == 1)
			cout << "Jolly" << endl;
		else
		{
			for (int i = 0; i < a - 1; i++)
				array2[i] = (array1[i + 1] - array1[i]) * ((array1[i + 1] - array1[i] > 0) ? 1 : -1);
			for (int i = 0; i < a - 2; i++)
				for (int j = i + 1; j < a - 1; j++)
					if (array2[i] > array2[j])
						swap(array2[i], array2[j]);
			for (int i = 0; i < a - 1; i++)
				if (array2[i] != i + 1)
				{
					jolly = false;
					break;
				}
			if (jolly)
				cout << "Jolly" << endl;
			else
				cout << "Not jolly" << endl;
		}
	}
	return 0;
}