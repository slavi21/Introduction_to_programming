//9. Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран в намаляващ ред вид.
//Пример:
//Вход:

//463211

//Изход:

//643211

//Вход:

//758701732

//Изход:

//877753210

#include <iostream>

size_t countDigitOccurrences(unsigned n, unsigned digit) {
    size_t count = 0;
    while(n > 0){
        if(n % 10 == digit) {
            count++;
        }
        n /= 10;
    }
    return count;
}

unsigned concatDigitAtBack(unsigned n, unsigned digit) {
    return n * 10 + digit;
}


unsigned concatCountDigitsAtBack(unsigned n, unsigned digit, size_t count)
{
	for (size_t i = 0; i < count; i++)
	{
		n = concatDigitAtBack(n, digit);
	}
	return n;
}
unsigned sortNumber(unsigned n)
{
	unsigned result = 0;
	for (int i = 9; i >= 0; i--)
	{
		size_t digitCount = countDigitOccurrences(n, i);
		result = concatCountDigitsAtBack(result, i, digitCount);
	}
	return result;
}

int main() {
    
}