#ifndef TEMPLATE_CPPLIB_H
#define TEMPLATE_CPPLIB_H

#include <map>
#include <string>
#include <vector>
#include <set>
#include <unordered_map>
#include <iostream>
#include <stack>

using namespace std;
/**
 *  Example class used for GTest demo
 */
class CPPLib {
 public:
  //q2
  std::set<std::set<int>> twoSum(std::vector<int>& input, int sum);
    //q6
    bool CheckValidExpression(const std::string& str);

};

//q3
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) { }
};

class SinglyLinkedList {
public:
  // default constructor
  SinglyLinkedList();

  //constructor creates a cyclic or acyclic linked list based on the value of i
  SinglyLinkedList(vector<int> &input, int i);
  
  //destructor, cleans up
  ~SinglyLinkedList();

  bool empty();//checks if empty

  int size(); //returns size

  void push_back(int i);//inserts at the back

  void push_front(int i);//inserts at the front

  void insert_after(ListNode *p, int i);//inserts value i after p

  void erase(ListNode *p);//erases node p

  void pop_front();//remove the first item

  void pop_back();//remove the last item

  ListNode* GetBackPointer();//returns the pointer to the last item

  ListNode* GetIthPointer(int i);//returns pointer to ith element
    
    void reverse();

  void print();//prints the list: ex. Empty list: { }. List with Items: {1, 2, 3}

  ListNode *head_;//Pointer to the first element

};

// q4
class Student_shallow
{
public:
    int* id;
    Student_shallow();
    Student_shallow(int);
};
class Student_deep
{
public:
    int* id;
    Student_deep();
    Student_deep(int);
    ~Student_deep();
    Student_deep(const Student_deep&);
    Student_deep& operator=(const Student_deep&);
};

//q5
class Complex{
 public:

  // default constructor
  Complex():real(0), ima(0){};
  // default destructor
  ~Complex();
    
  // implement constructor that takes 2 numbers as input parameters
    Complex(float i, float j);

  // implement a copy constructor
    Complex(const Complex &s);

  // implement an assignment operator

    Complex& operator=(const Complex&);
    
    
  // define real and imaginary part
  float real;
  float ima;

  // below here, we assume complex1, complex2 are instances of Complex.
  // define your functions to enable operator overloadings.

  //q5_1 complex++
    
    Complex operator++(int dummy);

  //q5_2 --complex
    Complex& operator--();

  //q5_3 complex1 > complex2
    bool operator>(const Complex &a)const;

  //q5_4 complex * (an float number)
    Complex operator*(float a);
    
  //q5_5 complex1 += complex2
    Complex operator+=(Complex b);


  //q5_6 complex2 += (an float number)
    Complex operator+=(float b);
    
};

#endif
