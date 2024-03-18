#include "pch.h"
#include "Functions.h"

TEST(IsLeapYearTest, ReturnTrueForZero) {
	ASSERT_TRUE(func::isLeapYear(0));
}

TEST(IsLeapYearTest, ReturnFalseFor1997) {
	ASSERT_FALSE(func::isLeapYear(1997));
}

TEST(IsLeapYearTest, ReturnTrueFor1996) {
	ASSERT_TRUE(func::isLeapYear(1996));
}

TEST(IsLeapYearTest, ReturnFalseFor1900) {
	ASSERT_FALSE(func::isLeapYear(1900));
}

TEST(IsLeapYearTest, ReturnTrueFor2000) {
	ASSERT_TRUE(func::isLeapYear(2000));
}