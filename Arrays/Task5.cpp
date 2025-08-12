// От клавиатурата се въвеждат N числа. (0 <= N <= 100) Да се изведат в обратен ред. (решете с функция)

// Примерен вход: 4 1 2 3 4
// Примерен изход: 4 3 2 1 4

#include <iostream>

void inputArray(int *arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter arr[" << i << "]= ";
        std::cin >> arr[i];
    }
}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
        std::cout<<"arr[" << i << "]= ";
		std::cout << arr[i] << std::endl;
	}
}

void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void reverseArray(int* arr, const int size) {
    int i = 0;
    int j = size - 1;
    
    while(i < size/2) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

}

int main() {
    int n;
    do {
        std::cout<<"Enter intiger number n: ";
        std::cin >> n;
    } while(n < 0 || n > 100);


    int* arr = new int[n];

    inputArray(arr, n);
    printArray(arr, n);
    reverseArray(arr, n);
    printArray(arr, n);
    
}
