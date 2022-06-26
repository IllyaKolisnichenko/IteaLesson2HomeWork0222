#include <iostream>
#include <cstdlib>
using namespace std;

int NumberDrops[100];
int MassNumberDrops[5];
int NumberOne = 0;
int NumberTwo = 0;
int NumberThree = 0;
int NumberFour = 0;
int NumberFive = 0;
int NumberSix = 0;
int SizeMass = 0;
int Max = 0, Min = 0;

int getNumber(int min, int count)
{
	return min + rand() % count;
	cout << min;
}

int main()
{

	srand(time(nullptr));
	for (int i = 0; i < 100; i++)
	{
		NumberDrops[i] = getNumber(1, 6);
		switch (NumberDrops[i])
		{
		case 1:
			NumberOne++;
			break;
		case 2:
			NumberTwo++;
			break;
		case 3:
			NumberThree++;
			break;
		case 4:
			NumberFour++;
			break;
		case 5:
			NumberFive++;
			break;
		case 6:
			NumberSix++;
			break;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		cout << "The number of losses of the side 1 - " << NumberOne << endl;
		cout << "The number of losses of the side 2 - " << NumberTwo << endl;
		cout << "The number of losses of the side 3 - " << NumberThree << endl;
		cout << "The number of losses of the side 4 - " << NumberFour << endl;
		cout << "The number of losses of the side 5 - " << NumberFive << endl;
		cout << "The number of losses of the side 6 - " << NumberSix << endl;

		MassNumberDrops[0] = NumberOne;
		MassNumberDrops[1] = NumberTwo;
		MassNumberDrops[2] = NumberThree;
		MassNumberDrops[3] = NumberFour;
		MassNumberDrops[4] = NumberFive;
		MassNumberDrops[5] = NumberSix;

		Max = MassNumberDrops[0];
		Min = MassNumberDrops[0];
		SizeMass = sizeof(MassNumberDrops) / sizeof(int);
		int NumberMaxDrops = 0;
		int NumberMinDrops = 0;
		for (int i = 0; i <= SizeMass; i++)
		{

			if (MassNumberDrops[i] < Min)
			{
				Min = MassNumberDrops[i];
				NumberMinDrops = i;
			}
			else if (MassNumberDrops[i] > Max)
			{
				Max = MassNumberDrops[i];
				NumberMaxDrops = i;
			}
		}
		NumberMaxDrops = NumberMaxDrops + 1;
		NumberMinDrops = NumberMinDrops + 1;
		cout << "\r\n";
		cout << "Maximum number of falls - side " << NumberMaxDrops << ": number of falls " << Max << endl;
		cout << "Minimum number of falls - side " << NumberMinDrops << ": number of falls " << Min << endl;


		return 0;

	}
}
