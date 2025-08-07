#include <iostream>

void Task1() {
    int* ptr;
    int a[3] = {7, 18, 11};
    ptr = &a[1]; // присвояваме на ptr адреса на a[1], тоест ptr сочи към втория елемент на масива
    ptr += 1; // пойнтърна аритметика
    // прибавяме или изваждаме Цели числа към указатели, т.е намираме
    // разликата м/у два указателя
    // сега указателя сочи към а[2]

    std::cout << *ptr<< std::endl; // дереферираме указателя

}

void Task1_modified(int* ptr) {
    ptr += 1;
    std::cout<<*ptr<<std::endl;
}
// ще подаваме масива отвън

int main() {
    Task1();
    int a[3] = {7, 18, 11};
    int *ptr = &a[1];
    Task1_modified(ptr);

    int* arr[10]; // масив от 10 указателя от тип int
    int (*ptrToArray)[10]; // указател към масив с 10 елемента
    int array10[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    ptrToArray = &array10;
    std::cout<< ptrToArray<< std::endl; // адреса на първия елемент от масива
    std::cout << *ptrToArray<< std::endl;
    // дерефериране на указател към масив връща масива, а тъй като маисва се разглежда като 
    //указател към първия си елемент получаваме адреса на първия елемент в масива
    std::cout<< *(*ptrToArray)<< std::endl; 
    // ако искаме да вземем стойността на първия елемент трябва да дереферираме още веднъж
    std::cout<<"Addres of the first elemt in the array is:"<< &array10[0]<< std::endl;


  

    return 0;

}