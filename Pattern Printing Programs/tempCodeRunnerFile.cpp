#include <iostream>
using namespace std;

int main() {
    int height = 8; 
    int width = 8;  

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            // Проверяваме условията за поставяне на звездички
            if (i == 0 || i == height / 2 || i == height - 1) { 
                cout << "* ";
            } else if (j == 0 || (j == width - 1 && i < height / 2)) { 
                cout << "* ";
            } else {
                cout << "  "; 
            }
        }
        cout << endl; 
    }

    return 0;
}
