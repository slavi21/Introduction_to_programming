//6. Напишете функция, която дадено по подадено естествено число n, връща число, което е резултат от конкатенацията на обърнатото число на n с подаденото n.
//Пример:
//Вход:

//5678

//Изход:

//87655678

//Вход:

//100

//Изход:

//1100

#include <iostream>

unsigned reversedNumber(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}

size_t countSuffixZeroes(unsigned n) {
    if (n == 0) {
        return 1;
    }

    size_t count = 0;
    while (n > 0) {
        if (n % 10 == 0) {
            count++;
            n /= 10;
        } else {
            break;
        }
    }
    return count;
}

unsigned concatNumberAtEnd(unsigned result, unsigned digit, size_t count) {
    for (size_t i = 0; i < count; i++) {
        (result *= 10) += digit;
    }
    return result;
}

unsigned concatNumbers(unsigned first, unsigned second) {
    size_t zeroesCount = countSuffixZeroes(second);

    unsigned reversedSecond = reversedNumber(second);
    unsigned result = first;
    while (reversedSecond > 0) {
        (result *= 10) += reversedSecond % 10;
        reversedSecond /= 10;
    }
    return concatNumberAtEnd(result, 0, zeroesCount);
}

unsigned concatWithReverse(unsigned num) {
    unsigned reversed = reversedNumber(num);
    return concatNumbers(reversed, num);
}

int main() {
    unsigned n;
    std::cout << "Enter number: \n";
    std::cin >> n;
    

    unsigned resultNumber = concatWithReverse(n);
    std::cout << "The concatenation of the numbers: " << resultNumber << "\n";

    return 0;
}
