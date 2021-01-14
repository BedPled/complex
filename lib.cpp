#include <iostream>
#include "lib.h"

using namespace std;


complex operator+ (complex a, complex b) {
    complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

void operator+= (complex &a, complex b) {
    a = a + b;
}

complex operator- (complex a, complex b) {
    complex sub;
    sub.real = a.real - b.real;
    sub.imaginary = a.imaginary - b.imaginary;
    return sub;
}

void operator-= (complex &a, complex b) {
    a = a - b;
}

complex operator* (complex multiplier, complex multiplicand) {
    complex product;
    product.real = multiplier.real * multiplicand.real - multiplier.imaginary * multiplicand.imaginary;
    product.imaginary = multiplier.real * multiplicand.imaginary + multiplicand.real * multiplier.imaginary;
    return product;
}

void operator*= (complex &multiplier, complex multiplicand) {
    multiplier = multiplier * multiplicand;
}

complex operator/ (complex dividend, complex divisor) {
    complex quotient; //tru exaption
    if (divisor.real != 0 && dividend.imaginary != 0) {

        quotient.real = (dividend.real * divisor.real + dividend.imaginary * divisor.imaginary) /
                        (divisor.real * divisor.real + divisor.imaginary * divisor.imaginary);

        quotient.imaginary = (dividend.imaginary * divisor.real - dividend.real * divisor.imaginary) /
                             (divisor.real * divisor.real + divisor.imaginary * divisor.imaginary);
        return quotient;
    }
}

void operator/= (complex &dividend, complex divisor) {
    dividend = dividend / divisor;
}



ostream& operator<< (ostream& out, complex a) {
    bool flag = false;
    if (a.real != 0) {
        out << a.real;
        flag = true;
    }

    if (a.imaginary < 0) {
        out << a.imaginary << "i";
    } else if (a.imaginary > 0) {
        if (flag){
            out << "+";
        }
        out << a.imaginary << "i";
    }
}