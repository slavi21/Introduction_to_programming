#include <iostream>

int linearSerch(const int arr[], int lenght, int element) {
    for(int i = 0; i < lenght; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[5] ={1, 2, 3, 4, 5};
    int desiredNumber = 3;
    int index = linearSerch(arr, 5, desiredNumber);
    if (index != -1)
        std::cout << "The desired elemnt is found" << std::endl;
    else
        std::cout << "The element is not found in the array" << std::endl;

}