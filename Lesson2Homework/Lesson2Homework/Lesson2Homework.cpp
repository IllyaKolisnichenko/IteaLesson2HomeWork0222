#include <iostream>
#include <cstdlib>

#define sizeArray  100

int NumberDrops[sizeArray]; 

int NumberOne{};
int NumberTwo{};
int NumberThree{};
int NumberFour{};
int NumberFive{};
int NumberSix{};
int MaxNumbersDrops{};
int MinNumbersDrops{};
int NumberMaxDrops{};
int NumberMinDrops{};
int SizeMass{};
int Max{}, Min{};


int getNumber(int min, int count)
{
    return min + rand() % count;
}



int main()
{
    srand(time(nullptr));

    for (int i = 0; i < sizeArray; i++)
    {
        NumberDrops[i] = getNumber(1, 6);
    }


    //----------Находим количество выпадений чисел от 1-6 ------------------------
    for (int i = 0; i < sizeArray; i++)
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

    for (int i = 0; i < sizeArray; i++)
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

    int MassNumbersDrops[6] = { NumberOne, NumberTwo, NumberThree, NumberFour,  NumberFive, NumberSix };
   


    Max = MassNumbersDrops[0];
    Min = MassNumbersDrops[0];

    SizeMass = sizeof(MassNumbersDrops) / sizeof(int);

    for (int i = 0; i < SizeMass; i++)
    {
        if (MassNumbersDrops[i] > Max)
        {
            Max = MassNumbersDrops[i];
            NumberMaxDrops = i;


        }
    }

    for (int i = 0; i < SizeMass; i++)
    {
        if (MassNumbersDrops[i] < Min)
        {
            Min = MassNumbersDrops[i];
            NumberMinDrops = i;
        }
    }
   
    std::cout << "\r\n";
    std::cout << "The number what droped max times - " << NumberMaxDrops+1 << " - Numbers times - " << Max << "\r\n";
    std::cout << "The number what droped min times - " << NumberMinDrops+1 << "- Numbers times - " << Min;


    // For get rand value, use getNumber
    // example ( min = 100, count = 150 ) - int randValue{ getNumber( 100, 150 ) };

    // Add your code here
    return 0;
}



