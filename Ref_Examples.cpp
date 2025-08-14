#include <iostream>

void MamAndDad(int Mam, int Dad) {
    int Mama = 50;
    int Tate = Mama;
    Mama -=30;
    std::cout<<Mama<<", "<<Tate;
}

void MamAndDadbyRef(int Mam, int Dad) {
    int Mama = 50;
    int& Tate = Mama;
    Mama -=30;// в този случай тъй като тате става псевдоним на мама и двамата дават по 30, 
    // а не само мама, щом променяме стойността на единия, променяме и на другия
    std::cout<<Mama<<", "<<Tate;
}

void example(int &numb) {
    std::cout << "&numb = " << &numb << "\n";
    numb += 5;
}


int main() {
int Mama = 60, Tate = 25;
int x = 10;
int &refX = x; // refX е псевдоним на x
refX = 20;     // променя и x
std::cout << x << "\n";   // 20
std::cout << refX << std::endl; // 20
MamAndDad(Mama, Tate);
std::cout << std::endl;
MamAndDadbyRef(Mama, Tate);
std::cout << std::endl;
std::cout<< Mama;
std::cout << std::endl;
int a = 5;
    std::cout << "&a    = " << &a << "\n";
    example(a);
    std::cout << "a = " << a << "\n"; // 10

}
