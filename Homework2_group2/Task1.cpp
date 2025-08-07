#include <iostream>

#include <iostream>

void shiftRight(int arr[], int n, int k) {
    k = k % n;
    for (int i = 0; i < k; ++i) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; --j)
            arr[j] = arr[j - 1];
        arr[0] = last;
    }
}

void shiftLeft(int arr[], int n, int k) {
    k = k % n;
    for (int i = 0; i < k; ++i) {
        int first = arr[0];
        for (int j = 0; j < n - 1; ++j)
            arr[j] = arr[j + 1];
        arr[n - 1] = first;
    }
}

void printArr(const int arr[], int n) {
    for (int i = 0; i < n; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;
    if (n <= 0) return 0;

   int* arr = new int[n];
   for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    int num;
    while (std::cin >> num && num != 0) {
        if (num % 2 == 0)
            shiftRight(arr, n, num);
        else
            shiftLeft(arr, n, num);
        printArr(arr, n);
    }

    delete[] arr;
    return 0;
}