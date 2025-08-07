#include <iostream>

double sumOfElements(const int* arr, const int size) {
    if (size <= 0 || arr == nullptr) {
        return 0; // Защита от невалиден вход
    }

    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    sumOfElements(arr, size);

    //std::cout << "Sum of elements: " << sumOfElements(arr, size) << std::endl;

    return 0;
}
