#include <gtest/gtest.h>
#include "../include/solution.h"

TEST(LabaTests, TestMonday) {
    EXPECT_TRUE(checkDayNumber("понедельник", 12));
    EXPECT_FALSE(checkDayNumber("понедельник", 11));
    EXPECT_FALSE(checkDayNumber("понедельник", 13));
}

TEST(LabaTests, TestTuesday) {
    EXPECT_TRUE(checkDayNumber("вторник", 96));
    EXPECT_TRUE(checkDayNumber("вторник", 100));
    EXPECT_FALSE(checkDayNumber("вторник", 95));
    EXPECT_FALSE(checkDayNumber("вторник", 90));
}

TEST(LabaTests, TestWednesday) {
    EXPECT_TRUE(checkDayNumber("среда", 34));
    EXPECT_FALSE(checkDayNumber("среда", 33));
    EXPECT_FALSE(checkDayNumber("среда", 35));
}

TEST(LabaTests, TestThursday) {
    EXPECT_TRUE(checkDayNumber("четверг", 0));
    EXPECT_FALSE(checkDayNumber("четверг", 1));
    EXPECT_FALSE(checkDayNumber("четверг", -1));
}

TEST(LabaTests, TestFriday) {
    EXPECT_TRUE(checkDayNumber("пятница", 2));
    EXPECT_TRUE(checkDayNumber("пятница", 4));
    EXPECT_TRUE(checkDayNumber("пятница", 100));
    EXPECT_FALSE(checkDayNumber("пятница", 1));
    EXPECT_FALSE(checkDayNumber("пятница", 3));
}

TEST(LabaTests, TestSaturday) {
    EXPECT_TRUE(checkDayNumber("суббота", 56));
    EXPECT_FALSE(checkDayNumber("суббота", 55));
    EXPECT_FALSE(checkDayNumber("суббота", 57));
}

TEST(LabaTests, TestSunday) {
    EXPECT_TRUE(checkDayNumber("воскресенье", 666));
    EXPECT_TRUE(checkDayNumber("воскресенье", -666));
    EXPECT_FALSE(checkDayNumber("воскресеньe", 665));
    EXPECT_FALSE(checkDayNumber("воскресеньe", 667));
}