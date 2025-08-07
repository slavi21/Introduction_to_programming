#include <iostream>

void printTreePattern(int n) {

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < n - i; ++j) {
            std::cout << " ";
        }

        for (int j = 1; j < i; ++j) {
            std::cout << "#";
        }

        std::cout << "*";
    
        for (int j = 1; j < i; ++j) {
            std::cout << "#";
        }
        std::cout << std::endl; 
    }

    int counter = 1; 
    int stemPadding = n - 2; 

    for (int i = 1; i <= n - 1; ++i) {

        for (int j = 0; j < stemPadding; ++j) {
            std::cout << " ";
        }

        
        int first = counter;
        int second = counter + 1;

        if (i % 2 == 0) {
            std::cout << second << " " << first; 
        } else {
            std::cout << first << " " << second; 
        }

        counter += 2;

        std::cout << std::endl; 
    }
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "N should be a positive number!" << std::endl;
    }

    printTreePattern(n);
    return 0;
}

