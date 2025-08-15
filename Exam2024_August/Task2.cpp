// Напишете функция, която приема символен низ и връща нов, за който е зададено точното количество памет 
// и в който малките английски букви са заменнеи с главни, малките с главни, а цифрите са премахнати
#include <iostream>

void inputString(char* string, const int size) {
    std::cin.getline(string, size);
}

char toLower(char character)
{
	if (character >= 'A' && character <= 'Z')
		return character + 'a' - 'A';

	return character;
}

void swapLettersAndRemoveDigits(char* string, char*& newString, int& newSize) {
    int count = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (!isdigit((unsigned char)string[i])) {
            if (islower((unsigned char)string[i])) {
                string[i] = toupper((unsigned char)string[i]);
            } else if (isupper((unsigned char)string[i])) {
                string[i] = tolower((unsigned char)string[i]);
            }
            count++;
        }
    }

    newSize = count;
    newString = new char[newSize + 1];

    int j = 0;
    for (int i = 0; string[i] != '\0'; i++) {
        if (!isdigit((unsigned char)string[i])) {
            newString[j++] = string[i];
        }
    }
    newString[newSize] = '\0';
}

int main() {
    const int size = 100;
    char string[size];

    std::cout << "Enter a string: ";
    inputString(string, size);

    char* newString = nullptr;
    int newSize = 0;

    swapLettersAndRemoveDigits(string, newString, newSize);

    std::cout << "Transformed string: " << newString << std::endl;

    delete[] newString;
    return 0;
}