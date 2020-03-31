#include <iostream>
using namespace std;

int main()
{
	int height, slide, day;
	float climb, fatigue, progress;
	bool check; //true:succeed  false:failure
	while (true)
	{
		cin >> height >> climb >> slide >> fatigue;
		if (height == 0)
			break;

		fatigue = (fatigue / 100)*climb;
		climb += fatigue;
		day = 1;
		progress = 0;

		while (true)
		{
			climb -= fatigue;
			if (climb >= 0)
				progress += climb;

			if (progress > height)
			{
				check = true;
				break;
			}

			progress -= slide;
			if (progress < 0)
			{
				check = false;
				break;
			}

			day++;
		}

		if (check)
			cout << "success ";
		else
			cout << "failure ";

		cout << "on day " << day << endl;
	}

	return 0;
}