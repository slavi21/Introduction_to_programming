#include <iostream>

// Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n (0 <= n <= 100)
// реални числа. Да се намерят минималния и максималния елемент на масива и техните индекси.


void arrayInput(int arr[], const int size) {
    for(int i =0; i < size; ++i) {
        std::cout<<"Enter " << "arr[ " << i << "] = " << std::endl;
        std::cin >> arr[i];
    }

}

int main() {
    int n;
    do {
        std::cout<<"Enter intiger number n: " << std::endl;
        std::cin >> n;
    } while(n < 0 || n > 100);


    // масива от реални числа -> double
    double arr[n];

    arrayInput(arr, n);




}