#include "src/lib/cpplib.h"

#include <map>
#include <vector>
#include <string>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, CheckValidExpression) {

    CPPLib s;
    
    std::string a = "(a+b)";
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = true;
    
    EXPECT_EQ(Expect, Actual);
   
}

TEST(Q6_Student, CheckValidExpression1) {

    CPPLib s;
    
    std::string a = "(a+b)[c*d]{5g+h}";
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = true;
    
    EXPECT_EQ(Expect, Actual);
   
}


TEST(Q6_Student, CheckValidExpression2) {

    CPPLib s;
    
    std::string a = "(a+b]";
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = false;
    
    EXPECT_EQ(Expect, Actual);
   
}


TEST(Q6_Student, CheckValidExpression3) {

    CPPLib s;
    
    std::string a = "(7h+[5c)+7]";
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = false;
    
    EXPECT_EQ(Expect, Actual);
   
}


TEST(Q6_Student, CheckValidExpression4) {

    CPPLib s;
    
    std::string a = "{2k+[5j]}";
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = true;
    
    EXPECT_EQ(Expect, Actual);
   
}


TEST(Q6_Student, CheckValidExpression5) {

    CPPLib s;
    
    std::string a = "{2k++[5--*j]}" ;
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = true;
    
    EXPECT_EQ(Expect, Actual);
   
}

TEST(Q6_Student, CheckValidExpression6) {

    CPPLib s;
    
    std::string a = "{2k+(-aa)]" ;
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = false;
    
    EXPECT_EQ(Expect, Actual);
   
}

TEST(Q6_Student, CheckValidExpression7) {

    CPPLib s;
    
    std::string a = "[(f]]" ;
    
    bool Actual = s.CheckValidExpression(a);
    bool Expect = false;
    
    EXPECT_EQ(Expect, Actual);
   
}


