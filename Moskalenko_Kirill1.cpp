#include <iostream>

int getNumber(int begine, int end)
{
	return begine + rand() % end;  //get random nums
}

int main()
{
	short numsOfThrow = 0;
	srand(time(nullptr));
		 
	int num[6]{}; //initialization of sides of the cube

	while (numsOfThrow < 100) //throw of cube
	{
		short side = getNumber(1, 6);
		num[side - 1]++;
		numsOfThrow++;
	}
	
	for (int it = 0; it < 6; it++)
	{
		std::cout << "number " << it + 1 << ": " << num[it] << std::endl;
	}
	
	int max = num[0];
	int min = num[0];
	int maxNumber{};
	int minNumber{};
	
//checking which is more
    
	for (int it = 0; it < 6; it++)
	{
		if (num[it] > max)
		{
			max = num[it];
			maxNumber = it;
		}
	}

//checking which is less

	for (int it = 0; it < 6; it++)
	{
		if (num[it] < min)
		{
			min = num[it];
			minNumber = it;
		}
	}
	
	std::cout << std::endl << "max number is: " << maxNumber + 1 << std::endl
	                       << "min number is: " << minNumber + 1 << std::endl;

	return 0;
}
