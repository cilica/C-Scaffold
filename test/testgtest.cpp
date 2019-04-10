#include <iostream>

#include "gtest/gtest.h"
#include "add_numbers.h"

TEST(sample_test_case, sample_test_pass)
{
   EXPECT_EQ(SumOfTwoNumbers(3, 2), 5);
}

/* FIXME this should be fixed  */
TEST(sample_test_case, sample_test_fail)
{
   EXPECT_EQ(SumOfTwoNumbers(3, 2), 2332);
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}