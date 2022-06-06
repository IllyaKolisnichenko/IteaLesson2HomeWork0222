#include <iostream>
#include <cstdlib>

int getNumber(int min, int count ) {
    return min + rand() % count; 
}

int largest(int arr[], int size) {
    int max = arr[0];
    for(int a = 0; a < size; a++) {
        if(arr[a] > max) {
            max = arr[a];
        }
    }
    return max;
}

int smallest(int arr[], int size) {
    int min = arr[0];
    for(int b = 0; b < size; b++) {
        if(arr[b] < min) {
            min = arr[b];
        }
    }
    return min;
}

int main() {

    int diceThrows[100];
    int diceSides[6]{};
    int rarest{};
    int commonest{};

    srand(time(nullptr));
    
    for(int i = 0; i < 100; i++) {
        diceThrows[i] = getNumber(1, 6);
        switch (diceThrows[i])
        {
        case 1:
            diceSides[0]++;
            break;
        case 2:
            diceSides[1]++;
            break;
        case 3:
            diceSides[2]++;
            break;
        case 4:
            diceSides[3]++;
            break;
        case 5:
            diceSides[4]++;
            break;
        default:
            diceSides[5]++;
            break;
        }
    }

    for(int j = 0; j < 6; j++) {
        if(diceSides[rarest] > diceSides[j]) {
            rarest = j;
        }
        if(diceSides[commonest] < diceSides[j]) {
            commonest = j;
        }
    }

    //----------------OUTPUT-----------------
    //imagine fantasy setting because why not
    std::cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout << "So, thee cameth to me to knoweth thy Fate?\n \nWell, beest quiet and hark to mine own F'rsight.\n";
    std::cout << "The Dice of the Fortune hast been thrown (100 times).\n";
    std::cout << "Here's what we haveth:\n";
    std::cout << "Number 1: " << diceSides[0] << '\n';
    std::cout << "Number 2: " << diceSides[1] << '\n';
    std::cout << "Number 3: " << diceSides[2] << '\n';
    std::cout << "Number 4: " << diceSides[3] << '\n';
    std::cout << "Number 5: " << diceSides[4] << '\n';
    std::cout << "Number 6: " << diceSides[5] << '\n';
    std::cout << "The most common number is " << ++commonest << ". Times thrown: " << largest(diceSides, 6);
    std::cout << "\nThe rarest number is " << ++rarest << ". Times thrown: " << smallest(diceSides, 6);

    return 0;
}

