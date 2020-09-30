#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file


TEST(Q3_Student, empty) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = -2;
    
    SinglyLinkedList solution(InputVector, i);
    
       
    bool Expected = false;
    
    bool Actual = solution.empty();
       
    EXPECT_EQ(Expected, Actual);

}

TEST(Q3_Student, size) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 10;
    
    SinglyLinkedList solution(InputVector, i);
    
       
    int Expected = 4;
    
    int Actual = solution.size();
       
    EXPECT_EQ(Expected, Actual);
    
    //EXPECT_EQ(false,false);
}


TEST(Q3_Student, sizeEmpty) {
    
    SinglyLinkedList solution;
    
       
    int Expected = 0;
    
    int Actual = solution.size();
       
    EXPECT_EQ(Expected, Actual);
    
    //EXPECT_EQ(false,false);
}


TEST(Q3_Student, GetBackPointer) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = -2;
    
    SinglyLinkedList solution(InputVector, i);
    
    int Expected = 7;
    
    ListNode *Actual = solution.GetBackPointer();
       
    EXPECT_EQ(Expected, Actual->val);
    
}

TEST(Q3_Student, GetIthPointer) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 8;
    
    SinglyLinkedList solution(InputVector, i);
    
       
    int Expected = 6;
    
    int a = 2;
    
    ListNode *Actual = solution.GetIthPointer(a);
       
    EXPECT_EQ(Expected, Actual->val);
    
}

TEST(Q3_Student, push_back) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 7;
    
    SinglyLinkedList solution(InputVector, i);
    
    
    solution.push_back(5);
    
    ListNode *current = solution.head_;
    
    std::vector<int> expect = {2, 4, 6, 7 ,5};
    
    std::vector<int> actual;
    
    for (int j=0; j<5; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}


TEST(Q3_Student, push_front) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 9;
    
    SinglyLinkedList solution(InputVector, i);
    
    solution.push_front(5);
    
    ListNode *current = solution.head_;
    
    std::vector<int> expect = {5, 2, 4, 6, 7};
    
    std::vector<int> actual;
    
    for (int j=0; j<5; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}

TEST(Q3_Student, insert_after) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = -9;
    
    SinglyLinkedList solution(InputVector, i);
    
    
    ListNode *target = solution.GetIthPointer(2);
    
    solution.insert_after( target, 3);
    
    std::vector<int> expect = {2, 4, 6, 3, 7};
    
    std::vector<int> actual;
    
    ListNode *current = solution.head_;
    
    for (int j=0; j<5; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}

TEST(Q3_Student, erase) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 8;
    
    SinglyLinkedList solution(InputVector, i);
    
    
    ListNode *target = solution.GetIthPointer(2);
    
    solution.erase(target);
    
    std::vector<int> expect = {2, 4, 7};
    
    std::vector<int> actual;
    
    ListNode *current = solution.head_;
    
    for (int j=0; j<3; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}


TEST(Q3_Student, pop_front) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = -3;
    
    SinglyLinkedList solution(InputVector, i);
    
    solution.pop_front();
    
    std::vector<int> expect = {4, 6, 7};
    
    std::vector<int> actual;
    
    ListNode *current = solution.head_;
    
    for (int j=0; j<3; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}


TEST(Q3_Student, pop_back) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = -1;
    
    SinglyLinkedList solution(InputVector, i);
    
    solution.pop_back();
    
    std::vector<int> expect = {2, 4, 6};
    
    std::vector<int> actual;
    
    ListNode *current = solution.head_;
    
    for (int j=0; j<3; j++){
            
        actual.push_back(current->val);
        current = current -> next;
            
    }
    
    EXPECT_EQ(expect,actual);
}


TEST(Q3_Student, reverse) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 5;
    
    SinglyLinkedList solution(InputVector, i);
    
    solution.reverse();
    
    std::vector<int> expect = {7, 6, 4, 2};
    
    std::vector<int> actual;
    
    ListNode *current = solution.head_;
    
    for (int j=0; j<4; j++){
            
        actual.push_back(current->val);
        current = current -> next;
    }
    
    EXPECT_EQ(expect,actual);
    
}



TEST(Q3_Student, print) {
    
    vector<int> InputVector = {2, 4, 6, 7};
    int i = 5;
    
    SinglyLinkedList solution(InputVector, i);
    
    solution.print();
    
    EXPECT_EQ(true,true);
}
