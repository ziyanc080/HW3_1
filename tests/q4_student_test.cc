#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file


TEST(Q4_Student, ShallowDefault) {
    
    Student_shallow a;
    
    int expect = 0;
    
    int actual = *a.id;
    std::cout << *a.id;
    
    EXPECT_EQ(expect, actual);
    
}


TEST(Q4_Student, ShallowParam) {
    
    Student_shallow a(5);
    
    int expect = 5;
    
    int actual = *a.id;
    std::cout << *a.id;
    EXPECT_EQ(expect, actual);
    
    
}

TEST(Q4_Student, DeepDefault) {
    
    Student_deep a;
    
    int expect = 0;
    
    int actual = *a.id;
    std::cout << *a.id;
    EXPECT_EQ(expect, actual);
    
}

TEST(Q4_Student, DeepParam) {
    
    Student_deep a(5);
    
    int expect = 5;
    
    int actual = *a.id;
    
    EXPECT_EQ(expect, actual);
    
}

TEST(Q4_Student, DeepCopy) { //copy
    
    Student_deep s(int(6));
    
    Student_deep b = s;
    
    int actual = *b.id;
  
    int expect = *s.id;
    
    EXPECT_EQ(actual, expect);
    
}


TEST(Q4_Student, DeepAssign) { //assignment
    
    Student_deep s(int(8));
    
    Student_deep b;
    
    b = s;
    
    int actual = *s.id;
  
    int expect = *b.id;
    
    EXPECT_EQ(actual, expect);
    
}



TEST(Q4_Student, TotalShallow) { //assignment
    
   Student_shallow a;
    Student_shallow b = a;
    Student_shallow c;
    c = a;
    cout << *a.id << *b.id << *c.id << endl;
    *c.id = 1;
    cout << *a.id << *b.id << *c.id << endl;
    
    EXPECT_EQ(true, true);
    
}


TEST(Q4_Student, TotalDeep) { //assignment
    
    Student_deep a;
    Student_deep b = a;
    Student_deep c;
    c = a;
    cout << *a.id << *b.id << *c.id << endl;
    *c.id = 1;
    cout << *a.id << *b.id << *c.id << endl;
    
    EXPECT_EQ(true, true);
    
}
