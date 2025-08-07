#include <iostream>

/*

    double numbers[100];
    int count; // Допълнителна променлива за реалния брой елементи
    cin >> count;
    for (int i = 0; i < count; i++)
        cin >> numbers[i];

    // Отпечатване на въведения масив
    for (int i = 0; i < count; i++)
        cout << numbers[i] << " ";
    cout << endl;

    // Копиране на масив
    double numbersCopy[100];
    int countCopy;
    countCopy = count;
    for (int i = 0; i < count; i++)
        numbersCopy[i] = numbers[i];

    // Проверка дали два масива имат едни и същи елементи
    bool equal = true; // на практика решаваме задача "за всяко"
    if (count != countCopy)
        equal = false;
    else
        for (int i = 0; i < count && equal; i++)
            if (numbers[i] != numbersCopy[i])
                equal = false;
    cout << (equal ? "Equal" : "Not equal") << endl;
*/


void copyArray(int* arr1, int* arr2, int size1, int size2) {
    if (size2 >= size1) {
        for (int i = 0; i < size1; i++) {
            arr2[i] = arr1[i];
        }

        std::cout << "arr2 after copying from arr1:\n";
        for (int i = 0; i < size1; i++) {
            std::cout << "arr2[" << i << "] = " << arr2[i] << std::endl;
        }
    } else {
        std::cout << "The second array is not large enough to copy the elements.\n";
    }
}

int main() {
    int size1, size2;

    std::cout << "Enter the size of the first array: ";
    std::cin >> size1;

    std::cout << "Enter the size of the second array: ";
    std::cin >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];  

    std::cout << "Enter " << size1 << " elements for the first array: \n";
    for (int i = 0; i < size1; ++i) {
        std::cin >> arr1[i];
    }

    copyArray(arr1, arr2, size1, size2);

    delete[] arr1;
    delete[] arr2;

    return 0;
}

