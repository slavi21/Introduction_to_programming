// Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n (0 <= n <= 100) реални числа.
// Да се намерят минималния и максималния елемент на масива и техните индекси.

// Да раздробим задачата на подзадачи:
// - функция за въвеждане на масив
// - функция за намиране на максимални и минималния елемент в масива
// - функция за принтиране на резултата

#include <iostream>

void enterArray(int* arr, const int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter arr[" << i << "] = ";
        std::cin >> arr[i];
    }
}

void findMinAndMax(int* arr, const int size, int& minIndex, int& maxIndex) {
    minIndex = 0;
    maxIndex = 0;
    for (int i = 1; i < size; i++) { // Започваме от втория елемент
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
}

void printResult(int* arr, int minIndex, int maxIndex) {
    std::cout << "The smallest element is: " << arr[minIndex]
              << " and is on position: " << minIndex << '\n';
    std::cout << "The largest element is: " << arr[maxIndex]
              << " and is on position: " << maxIndex << '\n';
}

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    // Проверка за валиден вход
    if (n <= 0 || n > 100) {
        std::cout << "N must be in the range: 1 <= n <= 100" << std::endl;
        return 1;
    }

    // Заделяне на динамична памет
    int* arr = new int[n];

    // Въвеждане на масива
    enterArray(arr, n);

    // Намиране на минимален и максимален елемент
    int minIndex, maxIndex;// инициализираме ги в самта функция
    findMinAndMax(arr, n, minIndex, maxIndex);

    // Извеждане на резултатите
    printResult(arr, minIndex, maxIndex);

    // Освобождаване на заделената памет
    delete[] arr;

    return 0;
}
