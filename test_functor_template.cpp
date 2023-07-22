#include "googletest/googletest/include/gtest/gtest.h"
#include "FunctorTemplate.h"

bool lessThan4(int x) {
    return x < 4;
}

template<typename T>
class LessThan {
    const T value_;
public:
    LessThan(const T &value) : value_(value) {}

    bool operator()(const T &x) const {
        return x < value_;
    }
};

TEST(FunctorTemplates, lessThan4) {
    // given
    std::vector<int> vector = {1, 2, 3, 4, 5};

    // when
    bool (*predicate)(int) = lessThan4;
    int result = count(vector, predicate);

    // then
    ASSERT_EQ(result, 3);
}

TEST(FunctorTemplates, lessThanTemplateInt) {
    // given
    std::vector<int> vector = {0, 40, 41, 50, 60, 70};
    LessThan<int> lessThan42(42);

    // when
    int result = count(vector, lessThan42);

    // then
    ASSERT_EQ(result, 3);
}

TEST(FunctorTemplates, lessThanTemplateString) {
    // given
    std::vector<std::string> vector = {"a", "b", "c", "d", "e"};

    // when
    int result = count(vector, LessThan<std::string>("cc"));

    // then
    ASSERT_EQ(result, 3);
}

TEST(FunctorTemplates, lessThanTemplateLambda) {
    // given
    std::vector<std::string> vector = {"a", "b", "c", "d", "e"};

    // when
    constexpr auto lessThanDd = [&](const std::string &x) { return x < "dd"; };
    int result = count(vector, lessThanDd);

    // then
    ASSERT_EQ(result, 4);
}