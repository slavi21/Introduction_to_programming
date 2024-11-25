// Вход: Пример:4. Напишете функция, която проверява дали дадено число е палиндром.

// 123321

// Изход:

// true

// Вход:

// 122

// Изход:

// false

// Вход:

// 1001

// Изход:

// true

#include <iostream>

int reversedNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;  
        reversed = reversed * 10 + digit;  
        num /= 10;  
    }
    return reversed;
}

void isPalindrome(int n) {
    int reversedNum = reversedNumber(n); 
    if (n == reversedNum) { 
        std::cout << n << " is a palindrome." << std::endl;
    } else {
        std::cout << n << " is not a palindrome." << std::endl;
    }
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    isPalindrome(number);
    return 0;
}