#include "testMoney.h"
#include "gtest/gtest.h"

TEST(EmployTest, SetEmployId) {
    Employ employ;
    employ.setEmployId(11);
    EXPECT_EQ(employ.getEmployId(), 11);
}