#include "Complex.h"
#include <iostream>

Complex::Complex(double r, double i) : real(r), imag(i) {}

void Complex::display() const {
    std::cout << "(" << real << " + " << imag << "i)" << std::endl;
}

Complex Complex::add(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

Complex Complex::conjugate() const {
    return Complex(real, -imag);
}