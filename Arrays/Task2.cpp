// Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n реални числа. (0 <= n <= 100) 
// Да се намерят минималния и максималния елемент на масива. Да се разменят местата им в масива и да се изведе новия масив.


#include <iostream>

void inputArray(int* arr, const int size) {
    for(int i =0; i < size; ++i) {
        std::cout << "Enter arr[" << i << "]= ";
        std::cin >> arr[i];
    }
}

void printArray(int* arr, const int size) {
    for(int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = ";
        std::cout<< arr[i]<< std::endl;

    }
}

void swapArrayMinAndMax(int* arr, const int size) {
    int minElement = arr[0];
    int maxElement = arr[0];
    int minIndex;
    int maxIndex;
    for(int i = 0; i < size; i++) {
        if(minElement > arr[i]) {
            minElement = arr[i];
            minIndex = i;
        }
        else if(maxElement < arr[i]) {
            maxElement = arr[i];
            maxIndex = i;
        } 
    }
    arr[maxIndex] = minElement;
    arr[minIndex] = maxElement;

}

void findMinAndMax(int* arr, const int size) {
    int minElement = arr[0];
    int maxElement = arr[0];
    int minIndex;
    int maxIndex;
    for(int i = 0; i < size; i++) {
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
        std::cout<<"Enter intiger number n: ";
        std::cin >> n;
    } while(n < 0 || n > 100);


    int* arr = new int[n];

    inputArray(arr, n);

    findMinAndMax(arr, n);

    printArray(arr, n);
    std::cout<< std::endl;
    swapArrayMinAndMax(arr, n);
    std::cout<<"New arrya with swap min and max"<< std::endl;
    printArray(arr, n);




    delete[] arr;

}