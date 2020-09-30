#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, plusplus) {

    float i = 1;
    float j = 1;
    
    Complex s(i,j);
    Complex a = s++;
    
    Complex b(float(2),float(1));
    
    std::vector<float> expect = {b.real, b.ima};
    std::vector<float> actual = {a.real, a.ima};
    
 EXPECT_EQ(expect, actual);
   
}

TEST(Q5_Student, Copy) {

    float i = 1;
    float j = 1;
    
    Complex s(i,j);
    Complex a = s;
    
    std::vector<float> expect = {s.real, s.ima};
    std::vector<float> actual = {a.real, a.ima};
    
 EXPECT_EQ(expect, actual);
   
}

TEST(Q5_Student, Assign) {

    float i = 1;
    float j = 1;
    
    Complex s(i,j);
    Complex a;
    a = s;
    
    std::vector<float> expect = {s.real, s.ima};
    std::vector<float> actual = {a.real, a.ima};
    
 EXPECT_EQ(expect, actual);
   
}

TEST(Q5_Student, minusminus) {
    
    Complex s(float(2),float(2));
    Complex a = --s;
    
    Complex b(float(1),float(2));
    
    std::vector<float> expect = {b.real, b.ima};
    std::vector<float> actual = {a.real, a.ima};
    
 EXPECT_EQ(expect, actual);
   
}

TEST(Q5_Student, greatthan) {
    
    Complex s(float(3),float(2));
    
    Complex b(float(2),float(1));
    
    bool expect = true;
    bool actual = (s > b)? true : false;
    
 EXPECT_EQ(expect, actual);
   
}


TEST(Q5_Student, greatthan1) {
    
    Complex s(float(2),float(2));
    
    Complex b(float(2),float(1));
    
    bool expect = false;
    bool actual = (s > b)? true : false;
    
 EXPECT_EQ(expect, actual);
   
}




TEST(Q5_Student, multiply) {

      Complex s(float(2),float(1));

    Complex a = s*float(3);
      
      Complex b(float(6),float(3));
      
      std::vector<float> expect = {b.real, b.ima};
      std::vector<float> actual = {a.real, a.ima};
      
   EXPECT_EQ(expect, actual);
     
}

TEST(Q5_Student, plusequal) {

 
       Complex s(float(4),float(3));
       
    Complex b(float(2),float(1));
    Complex a = s += b;
       
    Complex result(float(6),float(4));
    
       std::vector<float> expect = {result.real, result.ima};
       
       std::vector<float> actual = {a.real, a.ima};
       
    EXPECT_EQ(expect, actual);
   
}

TEST(Q5_Student, plusequalfloat) {

    Complex s(float(2),float(2));
    
    Complex a = s += float(3);
    
    Complex b(float(5),float(2));
    
    std::vector<float> expect = {b.real, b.ima};
    std::vector<float> actual = {a.real, a.ima};
    
 EXPECT_EQ(expect, actual);
   
}
