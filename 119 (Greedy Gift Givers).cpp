#include <iostream>
#include <string>
using namespace std;

struct gift
{
	int price;
	int income;
	int num;
	string name;
};

int main()
{
	bool first = true;
	int n, pos, temp;
	string c;

	while (cin >> n)
	{
		if (first)
			first = false;
		else
			cout << endl;
		gift a[10];
		for (int i = 0; i < n; i++)
		{
			a[i].income = 0;
			a[i].price = 0;
		}
		for (int i = 0; i < n; i++)
			cin >> a[i].name;
		for (int i = 0; i < n; i++)
		{
			cin >> c;
			for (int w = 0; w < n; w++)
			{
				if (a[w].name == c)
				{
					pos = w;
					break;
				}
			}
			cin >> temp;
			cin >> a[pos].num;
			if (a[pos].num)
			{
				a[pos].price += (temp / a[pos].num)*a[pos].num;
				for (int j = 0; j < a[pos].num; j++)
				{
					cin >> c;
					for (int k = 0; k < n; k++)
						if (a[k].name == c)
						{
							a[k].income += temp / a[pos].num;
							break;
						}
				}
			}
			else
				a[pos].income += a[pos].price;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i].name << " " << a[i].income - a[i].price << endl;
		}
	}
	return 0;
}