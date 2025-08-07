#include <iostream>

void generateFibonacci(int* fib, int n) {
    fib[0] = 1;
    fib[1] = 1;
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void makeFibSentence(int N) {
    int* fib = new int[N];
    generateFibonacci(fib, N);

    char currentChar = 'A';
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < fib[i]; ++j) {
            std::cout << currentChar;
            currentChar = (currentChar == 'Z') ? 'A' : currentChar + 1; 
        }
        if (i < N - 1) std::cout << " "; 
    }
    std::cout << std::endl;

    delete[] fib;
}

int main() {
    int N;
    std::cout << "Enter the number of words: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "N should be positive number!" << std::endl;
    }

    makeFibSentence(N);
    return 0;
}
