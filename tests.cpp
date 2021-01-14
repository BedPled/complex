#include "gtest/gtest.h"
#include "lib.h"

TEST (testOverloading, add) {
    complex a, b, sum;

    a.real = 5;
    a.imaginary = 10.8;

    b.real = 11.5;
    b.imaginary = 10;

    sum = a + b;

    EXPECT_FLOAT_EQ(sum.real, 16.5);
    EXPECT_FLOAT_EQ(sum.imaginary, 20.8);
}

TEST (testOverloading, sub) {
    complex a, b, sub;

    a.real = 5;
    a.imaginary = 10.8;

    b.real = 11.5;
    b.imaginary = 10;

    sub = a - b;
    a-=b;


    EXPECT_FLOAT_EQ(sub.real, -6.5);
    EXPECT_FLOAT_EQ(a.imaginary, 0.8);
}

TEST (testOverloading, mul) {
    complex a, b, mul;

    a.real = 5;
    a.imaginary = 10.8;

    b.real = 11.5;
    b.imaginary = 10;

    mul = a * b;
    a*=b;

    EXPECT_FLOAT_EQ(mul.real, -50.5);
    EXPECT_FLOAT_EQ(mul.imaginary, 174.2);
}

TEST (testOverloading, div) {
    complex a, b, div;

    a.real = 5;
    a.imaginary = 10.8;

    b.real = 11.5;
    b.imaginary = 10;

    div = a / b;

    EXPECT_FLOAT_EQ(div.real, 0.71259421);
    EXPECT_FLOAT_EQ(div.imaginary, 0.31948334);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}