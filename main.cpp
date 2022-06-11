#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{

    int RandNumber, Number1{}, Number2{}, Number3{}, Number4{}, Number5{}, Number6{};
    int max_index{ 0 }, min_index{ 0 };
    int Maximum{ 0 }, Minimum{ 0 };

    for (int i = 0; i < 100; i++) // оператор пошагового цикла
    {
        RandNumber = 1 + rand() % 6; // генератор случайных чисел
        switch (RandNumber)
        {
        case 1:
            Number1++;
            break;
        case 2:
            Number2++;
            break;
        case 3:
            Number3++;
            break;
        case 4:
            Number4++;
            break;
        case 5:
            Number5++;
            break;
        case 6:
            Number6++;
            break;
        }
    }

    cout << "Number 1 = " << Number1 << "\n"; // число 1
    cout << "Number 2 = " << Number2 << "\n"; // число 2
    cout << "Number 3 = " << Number3 << "\n"; // число 3
    cout << "Number 4 = " << Number4 << "\n"; // число 4
    cout << "Number 5 = " << Number5 << "\n"; // число 5
    cout << "Number 6 = " << Number6 << "\n"; // число 6


    int Array[6]{ Number1, Number2, Number3, Number4, Number5, Number6 };
    Maximum = Array[0]; // array возвращает константный итератор, который указывает на первый элемент в обращенном массиве
    Minimum = Array[0];


    for (int i = 0; i < 6; ++i)
    {
        if (Array[min_index] > Array[i])
        {
            min_index = i;
        }
        if (Array[max_index] < Array[i])
        {
            max_index = i;
        }

    }
    cout << "Maximum = " << ++max_index << "\n"; // минимальное число
    cout << "Minimum = " << ++min_index << "\n"; // максимальное число 

    return 0;
}