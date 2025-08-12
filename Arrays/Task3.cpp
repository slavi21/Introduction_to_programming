// Да се напише функция, която въвежда от клавиатурата цяло число n и масив от n цели числа (0 <= n <= 500).
// Да се провери дали в масива има два последователни елемента, равни на 0.

// Как да решим задачата
// Пишем си функции за въвеждане на масив
// След това правим един цикъл с който да обхождаме елементите, като за всеки проверяваме дали е 0 и сравняваме със следващия
// ако е вярно връщаме че сме намерили два последователни елемента и прикючваме

#include <iostream>

void inputArray(int *arr, const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter arr[" << i << "]= ";
        std::cin >> arr[i];
    }
}

void twoConsecutiveZeros(int *arr, const int size, bool &found)
{
    found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0 && arr[i] == arr[i + 1])
        {
            found = true;
            break;
        }
    }
}

/*
   bool checkZeros(int* arr, int size) {
        for (int i = 0; i < size - 1; i++) {
            if (arr[i] == 0 && arr[i + 1] == 0) return true;
        }
        return false;
    }
*/



int main()
{

    int n;
    bool result;
    do
    {
        std::cout << "Enter n between 0 and 500: ";
        std::cin >> n;
    } while (n <= 0 || n > 500);

    int *arr = new int[n];
    inputArray(arr, n);

    twoConsecutiveZeros(arr, n, result);

    if (result != 0)
    {
        std::cout << "There are consecutive zeros in the array" << std::endl;
    }
    else
    {
        std::cout << "There are not conecutive zeros in the array" << std::endl;
    }

    delete[] arr;
    return 0;
}