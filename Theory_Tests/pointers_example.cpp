#include <iostream>

int main() {
    int a = 5;
    int* b = &a; // пойнтър към променлива от тип int 
    int** c = &b;// пойнтър към (пойнтър от тип int)
    // (int*)*c = &b
    std::cout<< "Addres of a: "<< b << '\n';
    std::cout<< "Addres of b: " << &b << '\n';
    std::cout<< "The value that is stored at the address that b points to: "<< *b << '\n';
    std::cout<< "Addres of b, which is stored in the variable c of type **p: " << c << '\n';
    std::cout<<"The value that is stored at the address that c points to, that should be the value of b, which is the addres of a: " 
             << *c << '\n';
    std::cout << "**c → second dereference (dereferencing *c) → you get whatever b is pointing to, which is the value of a "
              << **c << '\n';

    std::cout << "Address of a (&a):                         " << &a << '\n';
    std::cout << "Address stored in b (b == &a):             " << b  << '\n';
    std::cout << "Address of b (&b):                         " << &b << '\n';

    std::cout << "Value at the address that b points to (*b) == a: "<< *b << '\n';

    std::cout << "Address stored in c (c == &b):             " << c  << '\n';
    std::cout << "Value at the address that c points to (*c) == b == &a: " << *c << '\n';

    std::cout << "Value at the address that *c points to (**c) == a: " << **c << '\n';

}