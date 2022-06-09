#include <iostream>
#include <cstdlib>

int getNumber(int min, int count) //get random number function
{
    return min + rand() % count;
}

int nameOfMinValue(int array[], int size) //getting the name of the element with the minimum value
{
    int minValue = array[0];
    int nameOfMinValue{};

    for (int i = 1; i < size; i++)
    {
        if (array[i] < minValue)
        {
            minValue = array[i];
            nameOfMinValue = i;
        }
    }
    return nameOfMinValue;
}

int nameOfMaxValue(int array[], int size) //getting the name of the element with the maximum value
{
    int maxValue = array[0];
    int nameOfMaxValue{};

    for (int i = 1; i < size; i++)
    {
        if (array[i] > maxValue)
        {
            maxValue = array[i];
            nameOfMaxValue = i;
        }
    }
    return nameOfMaxValue;
}
   


int main()
{
    int throws = 100; //number of rolls of the dice
    int sides[6]{}; //number of sides of a dice

    srand(time(nullptr));

    for (int i{}; i < throws; i++)  //dice rolls and counting the number of hits on each side
    {
        switch (getNumber(1, 6))
        {
        case 1:
            sides[0]++;
            break;
        case 2:
            sides[1]++;
            break;
        case 3:
            sides[2]++;
            break;
        case 4:
            sides[3]++;
            break;
        case 5:
            sides[4]++;
            break;
        case 6:
            sides[5]++;
            break;
        default:
            break;
        }
    }

    //displaying the number of hits on each side
    std::cout << "Number of dropouts side 1 is " << sides[0] << std::endl;
    std::cout << "Number of dropouts side 2 is " << sides[1] << std::endl;
    std::cout << "Number of dropouts side 3 is " << sides[2] << std::endl;
    std::cout << "Number of dropouts side 4 is " << sides[3] << std::endl;
    std::cout << "Number of dropouts side 5 is " << sides[4] << std::endl;
    std::cout << "Number of dropouts side 6 is " << sides[5] << std::endl;
    //

    switch (nameOfMaxValue(sides, sizeof(sides)/sizeof(int))) //Search and display the side that fell out most often
    {
    case 0:
        std::cout << "Side 1 rolled the most times" << std::endl;
        break;
    case 1:
        std::cout << "Side 2 rolled the most times" << std::endl;
        break;
    case 2:
        std::cout << "Side 3 rolled the most times" << std::endl;
        break;
    case 3:
        std::cout << "Side 4 rolled the most times" << std::endl;
        break;
    case 4:
        std::cout << "Side 5 rolled the most times" << std::endl;
        break;
    case 5:
        std::cout << "Side 6 rolled the most times" << std::endl;
        break;
    default:
        break;
    } 

    switch (nameOfMinValue(sides, sizeof(sides)/sizeof(int)))   //Finding and displaying the side that fell out the least
    {
    case 0:
        std::cout << "Side 1 rolled the fewest times" << std::endl;
        break;
    case 1:
        std::cout << "Side 2 rolled the fewest times" << std::endl;
        break;
    case 2:
        std::cout << "Side 3 rolled the fewest times" << std::endl;
        break;
    case 3:
        std::cout << "Side 4 rolled the fewest times" << std::endl;
        break;
    case 4:
        std::cout << "Side 5 rolled the fewest times" << std::endl;
        break;
    case 5:
        std::cout << "Side 6 rolled the fewest times" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}