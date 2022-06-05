#include <iostream>
#include <cstdlib>

int getNumber(int min, int count)
{
    return min + rand() % count;
}

int main()
{
    srand(time(nullptr));

      //---------- find the number of rolls on each side------------------------
    for (int i = 0; i < 100; i++)
    {
        switch (int NumberDrops[i] = getNumber(1, 6);)
        {
        case 1:
           int NumberOne++;
            break;
        case 2:
           int NumberTwo++;
            break;
        case 3:
           int NumberThree++;
            break;
        case 4:
           int NumberFour++;
            break;
        case 5:
           int NumberFive++;
            break;
        case 6:
           int NumberSix++;
            break;
        }

    }
 
    for (int i = 0; i < 100; i++)
    {
        std::cout << NumberDrops[i];
    }
    std::cout << "\r\n";
    std::cout << "Numbers of drops 1 - " << NumberOne << "\n\r";
    std::cout << "Numbers of drops 2 - " << NumberTwo << "\n\r";
    std::cout << "Numbers of drops 3 - " << NumberThree << "\n\r";
    std::cout << "Numbers of drops 4 - " << NumberFour << "\n\r";
    std::cout << "Numbers of drops 5 - " << NumberFive << "\n\r";
    std::cout << "Numbers of drops 6 - " << NumberSix << "\n\r";

    int MassNumbersDrops[5] = { NumberOne; NumberTwo, NumberThree, NumberFour, NumberFive,  NumberSix };
    int SizeMass = sizeof(MassNumbersDrops) / sizeof(int);

    for (int i = 0; i <= SizeMass; i++)
    {
        if (MassNumbersDrops[i] > Max)
        {
           int  Max = MassNumbersDrops[i];
           int  NumberMaxDrops = i;
        }

        if (MassNumbersDrops[i] < Min)
        {
           int Min = MassNumbersDrops[i];
           int NumberMinDrops = i;
        }
    }

    std::cout << "\r\n";
    std::cout << "The number what droped max times - " << NumberMaxDrops+1 << " - Numbers times - " << Max << "\r\n";
    std::cout << "The number what droped min times - " << NumberMinDrops+1 << "- Numbers times - " << Min;


return 0;
}



