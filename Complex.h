//
// Created by CorneliaCFranke on 22.07.2023.
//

#ifndef KLAUSURTRAINING_COMPLEX_H
#define KLAUSURTRAINING_COMPLEX_H

#include <iostream>

class Complex {
public:
    Complex(double real = 0.0, double imaginary = 0.0);

    Complex& operator+=(const Complex& other);

    friend Complex operator+(const Complex& left, const Complex& right);

    friend Complex operator+(const Complex& left, const double right);

    friend Complex operator+(const double left, const Complex& right);

    friend Complex operator-(const Complex& left, const Complex& right);

    bool operator==(const Complex& rhs);

    double real() const;

    double imaginary() const;

    friend std::ostream& operator<<(std::ostream& os, const Complex& c);

private:
    double real_;
    double imaginary_;
};


#endif //KLAUSURTRAINING_COMPLEX_H
