#include "Complex.h"

Complex::Complex(double real, double imaginary) : real_(real), imaginary_(imaginary) {};

Complex& Complex::operator+=(const Complex& other) {
    real_ += other.real_;
    imaginary_ += other.imaginary_;
    return *this;
}

Complex operator+(const Complex& left, const Complex& right) {
    return Complex(left.real_ + right.real_, left.imaginary_ + right.imaginary_);
};

Complex operator+(const Complex& left, const double right) {
    return left + Complex(right, 0.0);;
};

Complex operator+(const double left, const Complex& right) {
    return Complex(left, 0.0) + right;
};

Complex operator-(const Complex& left, const Complex& right) {
    return Complex(left.real_ - right.real_, left.imaginary_ - right.imaginary_);
};

bool Complex::operator==(const Complex& rhs) {
    return real_ == rhs.real_ && imaginary_ == rhs.imaginary_;
};

double Complex::real() const {
    return real_;
};

double Complex::imaginary() const {
    return imaginary_;
};

