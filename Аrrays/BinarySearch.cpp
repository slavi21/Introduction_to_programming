#include <iostream>

int binarySearch(const int arr[], int len, int el) {
    int left = 0;// началото на масива индексирано с 0
    int right = len - 1;// края на масива и тъй като започва от 0 последния елемент ще е 
                        // на позиция дължината на масива минус единица

    while(left <= right) {
        int mid = left + (left + right)/2;

        if(el > arr[mid]) {
            left = mid + 1;
        }
        else if(el > arr[mid]) {
            right = mid - 1;
        }
        else {
            std::cout<<arr[mid]<<'\n';
            return mid;// След като компилаторът достигне до return mid;,
                      // функцията приключва веднага и всичко след това се игнорира
        }
    }
    return -1;
}

int main() {
    int arr[5] ={1, 2, 3, 4, 5};
    int desiredNumber = 3;
    int index = binarySearch(arr, 5, desiredNumber);
    if (index != -1)
        std::cout << "The desired elemnt is found" << std::endl;
    else
        std::cout << "The element is not found in the array" << std::endl;

}