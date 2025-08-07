#include <iostream>

void InputArray(int* arr, const int size)
{
	for (int i = 0; i < size; i++) {
		std::cout << "arr[" << i << "]= ";
		std::cin >> arr[i];
	}
}

void printArray(const int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << std::endl;
	}
}

int main()
{
	int arr[5];
	InputArray(arr, 5);
	printArray(arr, 5);

	return 0;
}