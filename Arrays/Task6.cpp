// Да се напише функция, която въвежда от клавиатурата низ (масив от символи) до 150 елемента и символ.
// Да се изведе колко пъти се среща символът в низа и ако се среща да го замести със символа *

#include <iostream>

void inputString(char* string, const int size) {
    int i = 0;
    for(i = 0; i < size; ++i) {
        std::cout<<"Enter [" << i << "]"<< std::endl;
        std::cin>> string[i];
    }
    string[i] = '\0';
}

int replaceCharacterAndGetRepeatingCount(char string[], const int length, const char character)
{
    int counter = 0;

    for (int i = 0; i < length; i++)
    {
        if (string[i] == character)
        {
            counter++;
            string[i] = '*';
        }
    }

    return counter;
}

int main()
{
	const int ARRAY_SIZE = 150;

	int userLength;
	char character;
	char string[ARRAY_SIZE];

	std::cout << "How many characters do you want to enter[1 - 150]: ";

	do
	{
		std::cin >> userLength;
	} while (userLength < 1 || userLength > 150);

	inputString(string, userLength);

    std::cout << string << std::endl;

    std::cout << "Which character would you like to replace: ";
	std::cin >> character;

	int repeatingCount = replaceCharacterAndGetRepeatingCount(string, userLength, character);

	std::cout << "The character " << character << " is repeated " << repeatingCount << " times." << std::endl;

    std::cout << string << std::endl;
}