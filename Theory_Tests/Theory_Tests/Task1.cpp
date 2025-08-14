#include <iostream>

void example(int numb) {
    numb += 5;
}
// параметърът numb е подаден по стойност -> това е само локално копие
// следователно промените осават вътре в нея и извън функцията няма видим резултат

int main() {
    int a = 5;
    example(a);
    std::cout<< a;

    return 0;
}