#include <gtest/gtest.h>
#include <iostream>
#include <string>

#include "robotics/exp_proj/exp_class.h"

namespace robotics {
namespace exp_proj {
// Test from google test primer
// https://github.com/google/googletest/blob/master/googletest/docs/primer.md

class ExpClassTest : public ::testing::Test {
 protected:
  ExpClassTest() {}
  virtual ~ExpClassTest() {}

  // SetUp test will be called right after constructor and right before its
  // tests if we need further setup of the test
  virtual void SetUp() {}

  // TearDown test that will be called right after each test and right before
  // its destructor to clean up additional objects created by SetUp
  virtual void TearDown() {}

  // Test subject
  ExpClass test_subject_;
};

// test integer equality
TEST_F(ExpClassTest, CompareInt) { EXPECT_EQ(2, 2); }

// test float equality
TEST_F(ExpClassTest, CompareFloat) { EXPECT_FLOAT_EQ(1, 1); }

// test on subject
TEST_F(ExpClassTest, CheckClassMethod) {
  int x = 1;
  EXPECT_EQ(x, 1);
}
}  // namespace exp_proj
}  // namespace robotics
