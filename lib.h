#pragma once

struct complex {
    float real; // действительная часть
    float imaginary; // мнимая часть
};

complex operator+ (complex a, complex b);
void operator+= (complex &a, complex b);

complex operator- (complex a, complex b);
void operator-= (complex &a, complex b);

complex operator/ (complex dividend, complex divisor);
void operator/= (complex &dividend, complex divisor);

complex operator* (complex multiplier, complex multiplicand);
void operator*= (complex &multiplier, complex multiplicand);


std::ostream& operator<< (std::ostream& out, complex a);