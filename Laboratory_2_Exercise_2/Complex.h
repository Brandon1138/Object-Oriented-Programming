#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imag;

public:
    explicit Complex(double r = 0.0, double i = 0.0);

    void display() const;
    [[nodiscard]]    Complex add(const Complex& other) const;
    [[nodiscard]]    Complex conjugate() const;
};

#endif // COMPLEX_H