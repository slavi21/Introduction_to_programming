//5. Напишете функция, която приема две естествени числа и връща число, което е тяхната конкатенация.
//Пример:
//Вход:

//123 456

//Изход:

//123456

//Вход:

//100 200

//Изход:

//100200

#include <iostream>

unsigned reversedNum(int n) {
    int revered = 0;
    while(n != 0) {
        int digit = n % 10;
        revered = revered * 10 + digit;
        n /= 10; 
    }
    return revered;
}

size_t countSuffixZeroes(unsigned n){
    if(n == 0) {
        return 1;

    }
    size_t count = 0;
    while(n % 10 == 0) {
        count++;
        n /= 10;
    }
    return count;
}

unsigned concatNumAtEnd(unsigned result, unsigned digit, size_t count) {
    for(size_t i = 0; i < count; i++) {
        (result *= 10) += digit;
    }
    return result;
}

unsigned concatNumbers(unsigned first, unsigned second)
{
	size_t zeroesCount = countSuffixZeroes(second);

	unsigned reversedSecond = reversedNum(second);
	unsigned result = first;
	while (reversedSecond > 0)
	{
		(result *= 10) += reversedSecond % 10;
		reversedSecond /= 10;
	}
	return concatNumAtEnd(result, 0, zeroesCount);
}

int main() 
{
    int first, second;
    std::cout<<"Enter first number: \n";
    std::cin>> first;
    std::cout<<"Enter second number: \n";
    std::cin>> second;
    int resultNumber = concatNumbers(first, second);
    std::cout<<"The concatanation of the numbers: "<<resultNumber<<"\n";

}