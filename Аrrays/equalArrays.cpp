#include <iostream>

#include <iostream>

bool areArrayEqual(int* arr1, int* arr2, int size1, int size2) {
    // Ако размерите на масивите са различни, те не могат да са равни
    if (size1 != size2) {
        return false;
    }

    // Проверяваме всеки елемент от двата масива
    for (int i = 0; i < size1; i++) {
        if (arr1[i] != arr2[i]) {
            return false; // Масивите не са равни
        }
    }

    return true; // Масивите са равни

    /* 
    // Проверяваме всеки елемент дали е равен на съответния елемент
    for (int i = 0; i < size1; i++) {
        if (arr1[i] == arr2[i]) {
            continue; // Ако елементите са равни, продължаваме със следващия елемент
        } else {
            return false; // Ако поне един елемент не е равен, връщаме false
        }
    }

    return true; // Ако всички елементи са равни, връщаме true
    */
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {1, 2, 3};
    int arr3[] = {4, 5, 6};

    // Пример за сравнение на масиви
    std::cout << "arr1 and arr2 are equal: " << (areArrayEqual(arr1, arr2, 3, 3) ? "Yes" : "No") << std::endl;
    std::cout << "arr1 and arr3 are equal: " << (areArrayEqual(arr1, arr3, 3, 3) ? "Yes" : "No") << std::endl;

    return 0;
}
