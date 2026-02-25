// Tests for #001 Two Sum - https://leetcode.com/problems/two-sum/

#define main solution_main
#include "001_two_sum.cpp"
#undef main

#include <gtest/gtest.h>

TEST(TwoSumTest, HappyPath) {
    Solution sol;
    vector<int> nums = {2, 7, 8, 11, 15};
    auto res = sol.twoSum(nums, 9);
    auto expected = vector<int>{0, 1};
    EXPECT_EQ(res, expected);
}
