#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false; 
    for (int i = 2; i * i <= num ; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}


bool isEven(int num) {
    return num % 2 == 0;
}


void processArray(int arr[], int size) {
    int primes[100]; 
    int evens[100];  
    int primeCount = 0; 
    int evenCount = 0; 

    for (int i = 0; i < size; ++i) {
        if (isPrime(arr[i])) {
            primes[primeCount] = arr[i];
            ++primeCount;
        } else if (isEven(arr[i])) {
            evens[evenCount] = arr[i];
            ++evenCount;
        }
    }

   
    for (int i = 0; i < primeCount - 1; ++i) {
        for (int j = i + 1; j < primeCount; ++j) {
            if (primes[i] > primes[j]) {
                int temp = primes[i];
                primes[i] = primes[j];
                primes[j] = temp;
            }
        }
    }
    for (int i = 0; i < evenCount - 1; ++i) {
        for (int j = i + 1; j < evenCount; ++j) {
            if (evens[i] > evens[j]) {
                int temp = evens[i];
                evens[i] = evens[j];
                evens[j] = temp;
            }
        }
    }

    if (primeCount > 0) {
        std::cout << "Primes: ";
        for (int i = 0; i < primeCount; ++i) {
            std::cout << primes[i] << " ";
        }
        std::cout << std::endl;
    } else {
        std::cout << "Hmm, lucky you! No primes." << std::endl;
    }

    if (evenCount > 0) {
        std::cout << "Evens: ";
        for (int i = 0; i < evenCount; ++i) {
            std::cout << evens[i] << " ";
        }
        std::cout << std::endl;
    } else if (primeCount == 0) {
        std::cout << "Hmm, lucky you! No primes and no evens." << std::endl;
    }
}

int main() {
    int arr[] = {5, 3, 2, 6, 9}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    processArray(arr, size);

    return 0;
}
