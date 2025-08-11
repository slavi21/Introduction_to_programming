#include <iostream>

// Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n (0 <= n <= 100)
// реални числа. Да се намерят минималния и максималния елемент на масива и техните индекси.


void inputArray(int* arr, const int size) {
    for(int i = 0; i < size; ++i) {
        std::cout<<"Enter: arr[" << i << "] = ";
        std::cin>> arr[i];
    }
}

// Стъпки з арешаване на задачата
// Трябва да намерим минимални и максималния елемент в масива без да го подреждаме предварително
// 1) правим си функция с параметри масива и дължина на масива
// 2) Ще въртим един цикъл през целия масива и ще сравняваме пооелементно, ако елемента е по-малък от minElement, 
// ще обновяваме стойнсотта на minElement, иначе(else if) е по-голям ще сравняваме със maxElement и ако е по-голям
// от него ще му присвояваме тази стойност



void findMinAndMax(int* arr, const int size) {

    int minElement = arr[0];
    int maxElement = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for(int i=0; i < size; ++i) {

        if(minElement > arr[i]) {
            minElement = arr[i];
            minIndex = i;
        }
        else if(maxElement < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        }
    }
    std::cout<< "Max element of the array is: " << maxElement << " and is on position "<< maxIndex << std::endl;
    std::cout<< "Min element of the array is: " << minElement << " and is on position: " << minIndex << std::endl;

}

int main() {
    int n;
    do {
        std::cout<<"Enter intiger number n: " << std::endl;
        std::cin >> n;
    } while(n < 0 || n > 100);


    int* arr = new int[n];

    inputArray(arr, n);

    findMinAndMax(arr, n);




    delete[] arr;

}