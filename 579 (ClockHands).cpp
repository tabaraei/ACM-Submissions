#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
using namespace std;

void get_time(string c, float &h, float &m)
{
	if (c.length() == 4)
	{
		h = c[0] - 48;
		m = (10 * (c[2] - 48)) + (c[3] - 48);
	}
	if (c.length() == 5)
	{
		h = (10 * (c[0] - 48)) + (c[1] - 48);
		m = (10 * (c[3] - 48)) + (c[4] - 48);
	}
}

int main()
{
	string c;
	float hour, min, result;
	while (getline(cin, c))
	{
		if (c == "0:00")
			break;
		get_time(c, hour, min);
		hour = (hour * 30) + (min / 2);
		if (hour > 360)
			hour -= 360;
		min *= 6;
		if (hour < min)
			swap(hour, min);
		result = hour - min;
		if (result > 180)
			result = 360 - result;

		cout << fixed << setprecision(3) << result << endl;
	}
	return 0;
}