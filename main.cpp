#include <iostream>
#include <cstdlib>

int getNumber(int min, int count)
{
	return min + rand() % count;
}

int main()
{
	using namespace std;
	srand(time(nullptr));
	int cube1 = 0;
	int cube2 = 0;
	int cube3 = 0;
	int cube4 = 0;
	int cube5 = 0;
	int cube6 = 0;
	for (int count = 0; count < 100; ++count)
	{
		int cube = getNumber(1, 6);
		switch (cube)
		{
		case 1: cube1++; break;
		case 2: cube2++; break;
		case 3: cube3++; break;
		case 4: cube4++; break;
		case 5: cube5++; break;
		case 6: cube6++; break;
		default: break;
		}

	}
	cout << "on a cube fell '1' - " << cube1 << " times." << endl;
	cout << "on a cube fell '2' - " << cube2 << " times." << endl;
	cout << "on a cube fell '3' - " << cube3 << " times." << endl;
	cout << "on a cube fell '4' - " << cube4 << " times." << endl;
	cout << "on a cube fell '5' - " << cube5 << " times." << endl;
	cout << "on a cube fell '6' - " << cube6 << " times." << endl;

	const int size = 6;
	int cubeNum[size]{ cube1, cube2, cube3, cube4, cube5, cube6 };
	int max = 0, min = 0;
	max = cubeNum[0];
	min = cubeNum[0];

	for (int i = 0; i <size ; i++)
	{
		if (cubeNum[i] > max) max = cubeNum[i];
		if (cubeNum[i] < min) min = cubeNum[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (max == cubeNum[i]) cout << " The cube side " << i + 1 << " fell the most = " << max << endl;
		if (min == cubeNum[i]) cout << " The cube side " << i + 1 << " fell the least = " << min << endl;
	}

	return 0;
}