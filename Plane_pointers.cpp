#include <iostream>

int main() {
    bool* engineer = nullptr; // пойнтър, засега не сочи никъде, може да си го представим като инжинер, който не отговаря за самолет
    bool plane1 = true; // самолет 1 е във изправно състояние
    engineer = &plane1;// Engineer сочи към адреса на plane1
    bool* gremlin = engineer;// gremlin също започва да сочи на адреса на plane1
    *gremlin  = false;// Гремлина чупи самолета
    std::cout << std::boolalpha << plane1 << std::endl;// трябва да връща false
    *engineer = true;// Инжинера го поравя 
    std::cout << std::boolalpha << plane1 << std::endl;// трябва да връща true
}