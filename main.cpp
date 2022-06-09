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
	setlocale(LC_ALL, "ukr");
	srand(time(nullptr));
	for (int i = 0; i < 100; i++)
	{
		NumberDrops[i] = getNumber(1, 6);
	}
	for (int i = 0; i < 100; i++)
	{
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
		cout << "Кiлькiсть випадання сторони 1 - " << NumberOne << endl;
		cout << "Кiлькiсть випадання сторони 2 - " << NumberTwo << endl;
		cout << "Кiлькiсть випадання сторони 3 - " << NumberThree << endl;
		cout << "Кiлькiсть випадання сторони 4 - " << NumberFour << endl;
		cout << "Кiлькiсть випадання сторони 5 - " << NumberFive << endl;
		cout << "Кiлькiсть випадання сторони 6 - " << NumberSix << endl;

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
		for (int i = 0; i <= SizeMass; i++)
		{

			if (MassNumberDrops[i] > Max)
			{
				Max = MassNumberDrops[i];
				NumberMaxDrops = i;

			}
		}
		int NumberMinDrops = 0;
		for (int i = 0; i <= SizeMass; i++)
		{

			if (MassNumberDrops[i] < Min)
			{
				Min = MassNumberDrops[i];
				NumberMinDrops = i;
			}
		}
		NumberMaxDrops = NumberMaxDrops + 1;
		NumberMinDrops = NumberMinDrops + 1;
		cout << "\r\n";
		cout << "Максимальна кiлькiсть випадань - сторона " << NumberMaxDrops << ": кiлькiсть випадань " << Max << endl;
		cout << "Мiнiмальна кiлькiсть випадань - сторона " << NumberMinDrops << ": кiлькiсть випадань " << Min << endl;


		return 0;

	}
}

