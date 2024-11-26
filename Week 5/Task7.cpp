// 7. Напишете функция, която приема естествено число и връща дали цифрите му са сортирани (във възходящ или в низходящ ред).
// Пример:
// Вход:

// 12345

// Изход:

// true

// Вход:

// 97531

// Изход:

// true

// Вход:

// 1325

// Изход:

// false

#include <iostream>

bool areDigitsSortedAscending(unsigned n) {
    if(n < 10) {
        return true;
    }

    unsigned lastDigit = n % 10;
    n /= 10;
    while(n > 0){
        if(n % 10 > lastDigit) {
            return false;
        }
        lastDigit = n % 10;
        n /= 10;
    }
    return true;

}

bool areDigitSortedDescending(unsigned n) {
    if(n < 10) {
        return true;
    }

   unsigned lastDigit = n % 10;
    n /= 10;
    while(n > 0){
        if(n % 10 < lastDigit) {
            return false;
        }
        lastDigit = n % 10;
        n /= 10;
    }
    return true;
}

bool areDigitsSorted(int n) {
    return areDigitsSortedAscending(n) || areDigitSortedDescending(n);
}

int main()
{
    unsigned n;
    std::cout << "Enter number: \n";
    std::cin >> n;
    
    bool resultNumber = areDigitsSorted(n);
  
    std::cout << "Are the digits of the numer sorted: " <<  std::boolalpha << resultNumber << "\n";

    return 0;
}