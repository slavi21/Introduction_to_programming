//Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n цели числа. (0 <= n <= 250) Да се намерят и изведат: първият неотрицателен елемент на масива и сумата на елементите след него. 
//Ако няма такива да се изведе подходящо съобщение.

// Как да решим задачата
// Първо завъртаме един цикъл с който намираме първия неотрицателен елемент, тоест проверяваме за елементи по-големи или равни на нула
// след това събираме оставащите елементи

#include <iostream>

void inputArray(int* arr, const int size) {
    for(int i = 0; i < size; ++i) {
        std::cout<<"Enter: arr[" << i << "] = ";
        std::cin>> arr[i];
    }
}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int getFirstPositive(int* arr, const int size) {
    for(int i = 0; i < size; ++i) {
        if(arr[i] >= 0) {
            int indexOfNonNegativeElement = i;
            return indexOfNonNegativeElement;
            break;
        }
    }
    return -1;
}

int sumOfElements(int* arr, int size) {
    int indexofNonNegativeElement = getFirstPositive(arr, size);
    int sum = 0;
    for(int i = indexofNonNegativeElement + 1; i < size; ++i) {
        sum +=arr[i];
    }
    return sum;
}

int main() {
    int n;
    do {
        std::cout<<"Enter intiger number n: " << std::endl;
        std::cin >> n;
    } while(n < 0 || n > 250);


    int* arr = new int[n];

    inputArray(arr, n);

    int index = getFirstPositive(arr, n);
    if(index == -1) {
        std::cout << "No non-negative element in array.\n";
    } else {
        std::cout << "First non-negative element: " << arr[index] << "\n";
        std::cout << "Sum of elements after it: " << sumOfElements(arr, n) << "\n";
    }

    delete[] arr;

}