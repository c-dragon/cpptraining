#include "googletest/googletest/include/gtest/gtest.h"
#include "StackTemplate.h"
#include "Complex.h"
#include <string>

TEST(StackTemplate, new_stack_is_empty) {
    // given
    Stack stack = Stack<int>();

    // when/then
    ASSERT_TRUE(stack.isEmpty());
    ASSERT_EQ(stack.size(), 0);
}

TEST(StackTemplate, push_adds_element) {
    // given
    Stack stack = Stack<Complex>();

    // when
    stack.push(Complex(1.0, 0.0));
    stack.push(Complex(0.0, 1.0));

    // then
    ASSERT_EQ(stack.size(), 2);
    Complex top = stack.top();
    ASSERT_TRUE(top == Complex(0.0, 1.0));
}

TEST(StackTemplate, pop_removes_element) {
    // given
    Stack stack = Stack<std::string>();
    stack.push("Hello");
    stack.push("World");

    // when
    stack.pop();

    // then
    ASSERT_EQ(stack.size(), 1);
    std::string top = stack.top();
    ASSERT_TRUE(top == "Hello");
}

