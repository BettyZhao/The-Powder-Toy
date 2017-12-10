#include "gtest/gtest.h"
#include "SimplifiedElementSearchActivity.h"

class SimplifiedElementSearchActivityTest : public ::testing::Test { };

TEST_F(SimplifiedElementSearchActivityTest, NoneSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(false,false,false));
}
TEST_F(SimplifiedElementSearchActivityTest, OnlyShiftSelected) {
  EXPECT_TRUE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(true,false,false));
}
TEST_F(SimplifiedElementSearchActivityTest, OnlyCtrlSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(false,true,false));
}
TEST_F(SimplifiedElementSearchActivityTest, OnlyAltSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(false,false,true));
}
TEST_F(SimplifiedElementSearchActivityTest, ShiftAndCtrlSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(true,true,false));
}
TEST_F(SimplifiedElementSearchActivityTest, CtrlAndAltSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(false,true,true));
}
TEST_F(SimplifiedElementSearchActivityTest, ShiftAndAltSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(true,false,true));
}
TEST_F(SimplifiedElementSearchActivityTest, ShiftAndCtrlAndAltSelected) {
  EXPECT_FALSE(SimplifiedElementSearchActivity::SwapOldDescWithNewDesc(true,true,true));
}


int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
