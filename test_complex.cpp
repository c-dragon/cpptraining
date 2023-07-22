#include "googletest/googletest/include/gtest/gtest.h"
#include "Complex.h"

TEST(ComplexNumbers, RealPart) {
    Complex complexNumber(1.0, 2.0);
    ASSERT_EQ(complexNumber.real(), 1.0);
}

TEST(ComplexNumbers, ImaginaryPart) {
    Complex complexNumber(1.0, 2.0);
    ASSERT_EQ(complexNumber.imaginary(), 2.0);
}

TEST(ComplexNumbers, Equals) {
    // given
    Complex complexNumber(1.0, 2.0);
    Complex equalNumber(1.0, 2.0);
    Complex differentNumber1(1.0, 3.0);
    Complex differentNumber2(3.0, 2.0);

    // then
    ASSERT_TRUE(complexNumber == equalNumber);
    ASSERT_FALSE(complexNumber == differentNumber1);
    ASSERT_FALSE(complexNumber == differentNumber2);
}

TEST(ComplexNumbers, AddAssign) {
    // given
    Complex complexNumber1(1.0, 2.0);
    Complex complexNumber2(3.0, 4.0);

    // when
    complexNumber1 += complexNumber2;

    // then
    ASSERT_TRUE(complexNumber1 == Complex(4.0, 6.0));
}

TEST(ComplexNumbers, Add) {
    // given
    Complex complexNumber1(1.0, 2.0);
    Complex complexNumber2(3.0, 4.0);

    // when
    Complex sum = complexNumber1 + complexNumber2;

    // then
    ASSERT_TRUE(sum == Complex(4.0, 6.0));
}

TEST(ComplexNumbers, AddReal) {
    // given
    Complex complex(1.0, 2.0);
    double real = 5.0;

    // when
    Complex sum1 = complex + real;
    Complex sum2 = real + complex;

    // then
    ASSERT_TRUE(sum1 == Complex(6.0, 2.0));
    ASSERT_TRUE(sum2 == Complex(6.0, 2.0));
}

TEST(ComplexNumbers, Subtract) {
    // given
    Complex complexNumber1(1.0, 2.0);
    Complex complexNumber2(3.0, 4.0);

    // when
    Complex sum = complexNumber1 - complexNumber2;

    // then
    ASSERT_TRUE(sum == Complex(-2.0, -2.0));
}

