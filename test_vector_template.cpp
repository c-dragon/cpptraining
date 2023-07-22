#include "googletest/googletest/include/gtest/gtest.h"
#include "VectorTemplate.h"
#include "Complex.h"

TEST(Templates, IntVector) {
    // given
    std::vector<int> vector = {1, 2, 3};

    // when
    int sum = vector_sum(vector);

    // then
    ASSERT_EQ(sum, 6);
}

TEST(Templates, DoubleVector) {
    // given
    std::vector<double> vector = {1.0, 2.0, 3.0};

    // when
    double sum = vector_sum(vector);

    // then
    ASSERT_EQ(sum, 6.0);
}

TEST(Templates, ComplexVector) {
    // given
    std::vector<Complex> vector = {Complex(1.0, 2.0), Complex(3.0, 4.0)};

    // when
    Complex sum = vector_sum(vector);

    // then
    ASSERT_TRUE(sum == Complex(4.0, 6.0));
}
