#include "Complex.h"
#include <iostream>

int main() {
    Complex num1(3.0, 4.0);
    Complex num2(1.0, -2.0);

    Complex sum = num1.add(num2);
    Complex conj1 = num1.conjugate();
    Complex conj2 = num2.conjugate();

    std::cout << "Number 1: ";
    num1.display();
    std::cout << "Number 2: ";
    num2.display();

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Conjugate of Number 1: ";
    conj1.display();
    std::cout << "Conjugate of Number 2: ";
    conj2.display();

    return 0;
}
