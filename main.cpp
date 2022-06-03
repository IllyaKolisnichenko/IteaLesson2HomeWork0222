#include <iostream>  
#include<Windows.h>
#include<math.h>
//using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	srand(time(0));
	int faster = 0, fast = 0, sum1 = 0, sum2 = 0, same = 0;
	do
	{
		for (int i = 0;i < 100;i++)
		{
			if (i % 2 == 0)
			{
				faster = rand() % 6 + 1;
				fast = rand() % 6 + 1;
				sum1 += faster + fast;
				std::cout << faster << "/" << fast << "\n";
				Sleep(10);
				system("Cls");
			}
			else
			{
				faster = rand() % 6 + 1;
				fast = rand() % 6 + 1;
				sum2 += faster + fast;
				std::cout << faster << "/" << fast << "\n";
				Sleep(10);
				system("Cls");
			}
		}
		std::cout << "сумма бросков первого игрока:" << sum1 << "\n";
		std::cout << "сумма бросков второго игрока:" << sum2 << "\n";

		if (sum1 > sum2)
		{
			same = sum1 - sum2;
			std::cout << "результат бросков первого игрока юольше на" << same << "\n";
		}
		else if (sum2 > sum1)
		{
			same = sum2 - sum1;
			std::cout << "результат бросков второго игрока юольше на" << same << "\n";

		}

		break;
	} while (true);
}

