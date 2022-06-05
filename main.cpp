#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand( time ( nullptr ));
    const int numberThrows {100};
    int randNumber, number1 {}, number2 {}, number3 {}, number4 {}, number5 {}, number6 {} ;
    int maxIndex {}, minIndex {};
    
    for (int i{}; i < 100; i++)
    {
        randNumber = 1 + rand() % 6; //generate random nubber from 1 to 6
        switch (randNumber)
        {
            case 1:
                number1++;
                break;
            case 2:
                number2++;
                break;
            case 3:
                number3++;
                break;
            case 4:
                number4++;
                break;
            case 5:
                number5++;
                break;
            case 6:
                number6++;
                break;
            default:
                cout << "Correct number not found \n";
                break;
            }
    }

    cout << "Number 1 = " << number1 << "\n";
    cout << "Number 2 = " << number2 << "\n";
    cout << "Number 3 = " << number3 << "\n";
    cout << "Number 4 = " << number4 << "\n";
    cout << "Number 5 = " << number5 << "\n";
    cout << "Number 6 = " << number6 << "\n";
    
    //Looking for minumum and maximum
    const int arrSize { 6 };
    int arrayNumber[ arrSize ] {number1, number2, number3, number4, number5, number6};
    
    for ( int i{}; i < arrSize; ++i )
    {
       if ( arrayNumber[minIndex] > arrayNumber[i] ) minIndex = i;
       if ( arrayNumber[maxIndex] < arrayNumber[i] ) maxIndex = i;  
    }
    
    cout << "Maximum = " << ++maxIndex << "\n";
    cout << "Minimum = " << ++minIndex << "\n";
    
    return 0;
}
