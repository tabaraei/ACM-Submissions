#include<iostream>
using namespace std;

int main()
{
	int n, b, h, w, price, beds, mincost;
	bool first;
	while (cin>>n)
	{
		first = true;
		cin >> b >> h >> w;
		for (int i = 0; i < h; i++)
		{
			cin >> price;
			for (int j = 0; j < w; j++)
			{
				cin >> beds;
				if (beds >= n && n*price <= b)
				{
					if (first)
					{
						mincost = n*price;
						first = false;
					}
					else
					{
						if (n*price < mincost)
							mincost = n*price;
						first = false;
					}
				}
			}
		}

		if (first)
			cout << "stay home" << endl;
		else cout << mincost << endl;
	}
	return 0;
}