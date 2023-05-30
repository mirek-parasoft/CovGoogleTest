#include <gtest/gtest.h>
#include "goo.h"  


TEST(GooTest, TestGetValueWithABNegative) {
  EXPECT_EQ(getValue(-3, -1), -1);
}

TEST(GooTest, TestGetValueWithABNegative_2) {
  EXPECT_EQ(getValue(-3, 5), -15);
}




