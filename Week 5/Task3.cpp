//3. Дефинираме съвършено число като число, равно на сумата на делителите си (без себе си). Например, 6 е съвършено число, защото 6 = 1 + 2 + 3. От друга страна, 7 не е съвършено число, защото 7 ≠ 1.
//Напишете функция, която проверява дали дадено число е съвършено.
//Пример:
//Вход:

//6

//Изход:

//true

#include <iostream>

void perfectNumber(unsigned n){
    int counter = 0;
    for(int i = 1; i < n; i++){
        if(n % i == 0){
            counter = counter + i;
        }
    }

    if(counter == n) {
        std::cout<<"Number "<< n <<" is perfect"<< std::endl;
    }else {
        std::cout<<"number "<< n <<" is not perfect"<< std::endl;

    }

}

int main(){
    int n;
    std::cout<<"Enter a number: ";
    std::cin>> n;
    perfectNumber(n);

    return 0;
}