#include <iostream>

#include "add_numbers.h"
#include "foo_mock.h"
#include "gtest/gtest.h"

// instantiate mocked lib

auto MockFooObj = std::shared_ptr<MockFoo>();

// create unit testing class for Foo from TestFixture
class FooUnitTest : public ::testing::Test {
public:
  /* nice" mock object which ignores all uninteresting calls */
  FooUnitTest() { MockFooObj.reset(new ::testing::NiceMock<MockFoo>()); }
  ~FooUnitTest() { MockFooObj.reset(); }
  void SetUp() {}
  void TearDown() {}
};

TEST_F(FooUnitTest, sample_test_pass) { EXPECT_EQ(SumOfTwoNumbers(3, 2), 5); }

/* FIXME this should be fixed  */
TEST_F(FooUnitTest, sample_test_fail) {

  // MockFooObj = std::make_shared<MockFoo>();
  EXPECT_CALL(*MockFooObj, Foo_Resume());
  EXPECT_EQ(SumOfTwoNumbers(3, 2), 2332);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}