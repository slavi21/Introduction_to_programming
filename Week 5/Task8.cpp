//8. Напишете функция, която намира всички четирицифрени числа от интервала [m, n], на които като се задраска цифрата на 
//стотиците, се делят на 11, m и n са естествени числа, като m < n.
//Пример:
//Вход:

//1000 1200

//Изход:

//1010 1021 1032 1043 1054 1065 1076 1087 1098 1110 1121 1132 1143 1154 1165 1176 1187 1198

//Вход:

//3400 3500

//Изход:

//3408 3419 3430 3441 3452 3463 3474 3485 3496


#include <iostream>

unsigned removeHundreds(unsigned n) {
    unsigned thousands = n / 1000;
    unsigned remaining =  n % 100;
    return thousands * 100 + remaining;
}

// Example: n = 9876 
// 9876 / 1000 = 9
// 9876 % 100 = 76
// 9 * 100 + 76 = 976 
// хилядните са премахнати

bool isDivisibaleWithoutHundreds(unsigned n, unsigned divisor) {
    return removeHundreds(n) % divisor == 0;
}

void printDivisable(unsigned lowerBound, unsigned UpperBound) {
    for(int i = lowerBound; i < UpperBound; ++i){
        if(isDivisibaleWithoutHundreds(i, 11)) {
            std::cout<< i << " ";
        }
    }
}

int main()
{
    unsigned lowerBound, upperBound;
    do{
        std::cout<<"Enter the lower bound: ";
        std::cin>>lowerBound;
        std::cout<<"Enter the upper bound: ";
        std::cin>>upperBound;

        if (lowerBound < 1000 || lowerBound > 9999) {
            std::cout << "Lower bound must be a 4-digit number.\n";
        }
        if (upperBound < 1000 || upperBound > 9999) {
            std::cout << "Upper bound must be a 4-digit number.\n";
        }
        if (lowerBound > upperBound) {
            std::cout << "Lower bound must be less than or equal to upper bound.\n";
        }
    }while(lowerBound < 1000 || lowerBound > 9999 || upperBound < 1000 || upperBound > 9999 || lowerBound > upperBound);

    printDivisable(lowerBound, upperBound);

    return 0;
    
}