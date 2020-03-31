#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n, m, counter = 1;
	int result[101][101];
	string A;
	bool first = true;

	while (true)
	{
		cin >> n >> m;
		if (n == 0 && m == 0)
			break;

		for (int i = 0; i < n; i++)
		{
			cin >> A;
			for (int j = 0; j < m; j++)
			{
				if (A[j] == '*')
					result[i][j] = -1;
				if (A[j] == '.')
					result[i][j] = 0;
			}
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (result[i][j] == -1)
				{
					if (i - 1 >= 0)
					{
						if (result[i - 1][j] != -1)
							result[i - 1][j]++;
						if (j - 1 >= 0 && result[i - 1][j - 1] != -1)
							result[i - 1][j - 1]++;
						if (j + 1 <= m && result[i - 1][j + 1] != -1)
							result[i - 1][j + 1]++;
					}
					if (j - 1 >= 0 && result[i][j - 1] != -1)
						result[i][j - 1]++;
					if (j + 1 <= m && result[i][j + 1] != -1)
						result[i][j + 1]++;
					if (i + 1 <= n)
					{
						if (result[i + 1][j] != -1)
							result[i + 1][j]++;
						if (j - 1 >= 0 && result[i + 1][j - 1] != -1)
							result[i + 1][j - 1]++;
						if (j + 1 <= m && result[i + 1][j + 1] != -1)
							result[i + 1][j + 1]++;
					}
				}
			}
		}

		if (first)
			first = false;
		else
			cout << endl;

		cout << "Field #" << counter << ":" << endl;
		counter++;
		
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (result[i][j] == -1)
					cout << '*';
				else cout << result[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}