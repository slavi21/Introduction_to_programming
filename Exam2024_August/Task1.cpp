#include <iostream>
#include <cmath>

int countofDigits(int number) {
    int count = 0;
    while(number > 0) {
        count++;
        number /= 10;
    }
    return count;
}

long long func(int number, int digit) {
    int digitsCount = countofDigits(number);
    digitsCount--;
    long long newNumber = 0;
    int curDigit;

    while(number > 0) {
        curDigit = number / pow(10, digitsCount);
        number = number % (int)pow(10, digitsCount);
        if(curDigit != digit) {
            newNumber = newNumber * 10 + curDigit;
        }
        else {
            newNumber = newNumber * 100 + curDigit * 11;
        }
        digitsCount--;
    }
    return newNumber;
}

int main() {
    int number = 125325;

    int digit = 5;

    long long result = func(number, digit);
    std::cout<< "Result: " << result;

    return 0;
}