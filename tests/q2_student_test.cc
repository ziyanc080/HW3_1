#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, TEST1) {
    
    CPPLib s;
    
    std::vector<int> input = {2, 4, 6, 8};
    int sum = 10;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = { {2, 8}, {4, 6}};
    
  EXPECT_EQ(Expect, Actual);
}

TEST(Q2_Student, TEST2) {
    
    CPPLib s;
    
    std::vector<int> input = {2, 3, 4, 5};
    int sum = 7;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = { {2, 5}, {3, 4}};
    
  EXPECT_EQ(Expect, Actual);
}


TEST(Q2_Student, TEST3) {
    
    CPPLib s;
    
    std::vector<int> input = {2, 3, -2, 5, 0};
    int sum = 0;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = { {2, -2} };
    
  EXPECT_EQ(Expect, Actual);
}


TEST(Q2_Student, TEST4) {
    
    CPPLib s;
    
    std::vector<int> input = {1, 5, 4, 10 };
    int sum = 200;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = {};
    
  EXPECT_EQ(Expect, Actual);
}

TEST(Q2_Student, TEST5) {
    
    CPPLib s;
    
    std::vector<int> input = {1, -3, 5, 10};
    int sum = -2;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = { {-3, 1} };
    
  EXPECT_EQ(Expect, Actual);
}


TEST(Q2_Student, TEST6) {
    
    CPPLib s;
    
    std::vector<int> input = {-5, -1, 5, 9};
    int sum = -6;
    
    std::set<std::set<int>> Actual = s.twoSum(input,sum);
    std::set<std::set<int>> Expect = { {-5, -1} };
    
  EXPECT_EQ(Expect, Actual);
}

