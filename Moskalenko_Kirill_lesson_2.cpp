#include <iostream>
#include <algorithm>
int getNumber(int begine, int end)
{
	return begine + rand() % end;  //get random nums
}

int main()
{
	srand(time(nullptr));
	short num1, num2, num3, num4, num5, num6;
	num1 = num2 = num3 = num4 = num5 = num6 = 0; //initialization of sides of the cube

	//throw of cube
	for (short THROW = 0; THROW < 100; THROW++)
	{
		short side = getNumber(1,6);
		std::cout << side << " ";
		if (side==1)	//dropped sides counter
		{
			num1++;
		}
		else if (side==2)
		{
			num2++;
		}
		else if (side == 3)
		{
			num3++;
		}
		else if (side == 4)
		{
			num4++;
		}
		else if (side == 5)
		{
			num5++;
		}
		else 
		{
			num6++;
		}
	}
	
	
	std::cout << std::endl <<
				"number 1" << num1 << " " << std::endl <<
				"number 2" << num2 << " " << std::endl <<
				"number 3" << num3 << " " << std::endl <<
				"number 4" << num4 << " " << std::endl <<
				"number 5" << num5 << " " << std::endl <<
				"number 6" << num6 << std::endl;

	//checking which is more
		if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5 && num1 >= num6)
		{
			std::cout << "most digits 1" << std::endl;
		}
		else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5 && num2 >= num6)
		{
			std::cout << "most digits 2" << std::endl;
		}
		else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5 && num3 >= num6)
		{
			std::cout << "most digits 3" << std::endl;
		}
		else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5 && num4 >= num6)
		{
			std::cout << "most digits 4" << std::endl;
		}
		else if (num5 >= num1 && num5 >= num2 && num5 >= num3 && num5 >= num4 && num5 >= num6)
		{
			std::cout << "most digits 5" << std::endl;
		}
		else if (num6 >= num1 && num6 >= num2 && num6 >= num3 && num6 >= num4 && num6 >= num5)
		{
			std::cout << "most digits 6" << std::endl;
		}
		else
		{
			std::cout << "ERROR" << std::endl;
		}
	//================================================================================================
//checking which is less
		if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5 && num1 <= num6)
		{
			std::cout << "least digits 1" << std::endl;
		}
		else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5 && num2 <= num6)
		{
			std::cout << "least digits 2" << std::endl;
		}
		else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5 && num3 <= num6)
		{
			std::cout << "least digits 3" << std::endl;
		}
		else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5 && num4 <= num6)
		{
			std::cout << "least digits 4" << std::endl;
		}
		else if (num5 <= num1 && num5 <= num2 && num5 <= num3 && num5 <= num4 && num5 <= num6)
		{
			std::cout << "least digits 5" << std::endl;
		}
		else if (num6 <= num1 && num6 <= num2 && num6 <= num3 && num6 <= num4 && num6 <= num5)
		{
			std::cout << "least digits 6" << std::endl;
		}
		else
		{
			std::cout << "ERROR" << std::endl;
		}

	return 0;
}
