#include "cpplib.h"
#include "limits"
#include <string>


// Question 2
std::set<std::set<int>> CPPLib::twoSum(std::vector<int>& input, int sum){
    
    std::set<int> AddValue;
    
    std::set<std::set<int>> output;
    
    for (int i = 0; i<input.size(); i++){
        
        for (int j = i + 1; j<input.size(); j++){
            
            if (input[i] + input[j] == sum){
                AddValue.insert(input[i]);
                AddValue.insert(input[j]);
                
                output.insert(AddValue);
                AddValue.erase(input[i]);
                AddValue.erase(input[j]);
            }
        }
        
    }
    
    return output;

}

// Question 3
//one example

SinglyLinkedList::SinglyLinkedList() { //Initialize the variable
    //write you code
    head_ = nullptr;
}

SinglyLinkedList::SinglyLinkedList(vector<int> &input, int i){
    
  
    auto test = new ListNode(input[0]);
    head_ = test;
    
    ListNode *current = head_;
    
    for (int j = 1; j<=input.size(); j++){
        
        if (j == input.size()){
            
            if ((i<0) || (i > input.size())  )   {
                current -> next = nullptr;
            }
            
            else {
                //current -> next = nullptr;
               current -> next = GetIthPointer(i);
            }
           
        }
       
        else {
            current -> next = new ListNode(input[j]);
            
            current = current -> next;
        }
        
    }

}

SinglyLinkedList::~SinglyLinkedList(){ //delete the nodes we allocated for our link list
    
    ListNode *temp;
    
    while ( head_ != nullptr){ // interate the members in the list
        
        temp = head_ -> next; //store next node
        delete head_ ; //delete current node
        head_ = temp;
        }
}


bool SinglyLinkedList::empty(){
    
    return head_ == nullptr;
}

int SinglyLinkedList::size(){
    
    int size = 0;
    ListNode *current = head_;
    
    while (current != nullptr){
        current = current -> next;
        size ++;
    }
    
    return size;
}

void SinglyLinkedList::push_back(int i){
    
    if (empty()){
        
        head_ = new ListNode(i);
        
    }
    
    else{
        
        ListNode *p = head_;
                
        while ( p->next != nullptr){
            p = p -> next;
        }
        
        ListNode *Newnode = new ListNode(i);
        
        p -> next = Newnode;
        Newnode -> next = nullptr;
        //size ++;
        
    }
    
}

void SinglyLinkedList::push_front(int i){
    
    if (empty()){

        head_ = new ListNode(i);
    }
    
    else{
        ListNode *p = head_;
        
        ListNode *PNext = head_ -> next;
        
        ListNode *Newnode = new ListNode(i);
        
        head_ = Newnode;
        
        Newnode -> next = p;
        
        p -> next = PNext;
        //size ++;
        
    }
}

void SinglyLinkedList::insert_after(ListNode *p, int i){
    
    //define a new node with value i
    ListNode *Newnode = new ListNode(i);

    //define the original next node after p
    ListNode *NextNode = p -> next;
    
    p -> next = Newnode;
    
    Newnode->next = NextNode;
    
}

void SinglyLinkedList::erase(ListNode *p){
    
    ListNode *PreNode = head_;
            
    while ( PreNode->next != p){
        PreNode = PreNode -> next;
    }
    
    ListNode *NextNode = p -> next;
    
    //Original Condition
    PreNode -> next = NextNode;

    delete p;
}


void SinglyLinkedList::pop_front(){
    
    ListNode *SecondNode = head_ -> next;
    head_ = SecondNode;
    
}

void SinglyLinkedList::pop_back(){
    
    ListNode *BeforeLast = head_;
    
    ListNode *p = head_ -> next;
                   
           while ( p->next != nullptr){
               p = p -> next;
               BeforeLast = BeforeLast -> next;
           }
    
    BeforeLast -> next = nullptr;
    delete p;
}



ListNode *SinglyLinkedList::GetBackPointer(){
    //the return type here is ListNode
    
    if (empty()){
        return head_;
    }
    
    else {
        
        ListNode *p = head_;
        
        while ( p-> next != nullptr){
            p = p -> next;
        }
        return p;
        
    }
}

ListNode *SinglyLinkedList::GetIthPointer(int i){
    
    if (empty()){
        return head_;
    }
    
    else{
        ListNode *p = head_;
        
        if (i > size()){
            p = nullptr;
        }
        else {

            int count = 0;
                  
            while ((p->next != nullptr)  && (count<i) ){
                p = p ->next;
                count ++;
            }
            
        }
        return p;
    }
}


void SinglyLinkedList::reverse(){
    
    ListNode *current = head_;
    
    std::vector <int> Value;
    
    while (current != nullptr){
                  
        Value.push_back(current->val);
           
        current = current -> next;
    }
    
        int Vectorsize = Value.size();

    ListNode *VectorCurrent = head_;
    
    //std::cout<<Vectorsize<<"aaaaaaa"<<endl;
    
    int i = 0;
    
    while (VectorCurrent != nullptr){
                 
        VectorCurrent -> val = Value[Vectorsize-1-i];

        VectorCurrent = VectorCurrent -> next;
        
        i++;
    }
    
}



void SinglyLinkedList::print(){
    
    if (empty()){
           std::cout<<"{}";
       }
    
    ListNode *current = head_;
    std::cout<<"{";
    
    while (current != nullptr){
               
           std::cout<<current->val;
        
        if (current -> next != nullptr){
            std::cout<<", ";
        }
        
           current = current -> next;
               
       }
    
    std::cout<<"}";
    
}

// Question 4
    
//default constructor

Student_shallow::Student_shallow(){
     int a = 0;
    id = &a;
    
}
    
Student_shallow::Student_shallow(int k){

    id = &k;
}


Student_deep::Student_deep(){
    
    int a = 0;
    id = &a;
}

Student_deep::Student_deep(int k){
    
    id = &k;
}

Student_deep::~Student_deep(){
   // int a = 0;
    
   // if (id != &a) {
      //  delete id;
    
    std::cout<<"Delete Student_deep!"<<endl;
   // }
    
}

Student_deep::Student_deep(const Student_deep&s){
    
    id = s.id;
}

Student_deep& Student_deep::operator=(const Student_deep&s){
    
    return *this;
}

// Question 5

//q5_0

//default destructor
Complex::~Complex(){
    
}


// implement constructor that takes 2 numbers as input parameters
Complex::Complex(float i, float j){
    
    real = float(i);
    ima = float(j);
}

// implement a copy constructor
Complex::Complex (const Complex &s){
    
    real = s.real;
    ima = s.ima;
}


// implement an assignment operator

Complex& Complex::operator=(const Complex &s){
    
    real = s.real;
    ima = s.ima;
    return *this;
}

//q5_1 complex++
Complex Complex::operator++(int dummy) {
    
    float NewReal = real +1;
    float NewIma = ima;
    return Complex (NewReal, NewIma);
}

//q5_2 --complex
Complex& Complex::operator--(){
    
    real = real - 1;
    return *this;
    
}

//q5_3 complex1 > complex2
bool Complex::operator>(const Complex &a)const{
    
    if ((real > a.real) && (ima > a.ima)){
        return true;
    }
    else{
        return false;
    }
    
}

//q5_4 complex * (an float number)
Complex Complex::operator*(float a){
    
    float NewReal = real * a;
    float NewIma = ima * a;
    
    return Complex (NewReal, NewIma);
    
}

//q5_5 complex1 += complex2
Complex Complex::operator+=(Complex b){
    
    ima = ima + b.ima;
    real = real + b.real;
    return *this;
    
}


//q5_6 complex2 += (an float number)
Complex Complex::operator+=(float b){
    
    float NewReal = real + b;
    float NewIma = ima;
    return Complex(NewReal, NewIma);
    
}


// Question 6
bool CPPLib::CheckValidExpression(const std::string& str){
    
    std::stack <char> StackSymbol;
    
    std::string a = str;
    
    for (int i=0; i<=a.size()-1; i++){

        if (  ( a[i] == 40) || (a[i] == 91) || (a[i] == 123)   )  {
            StackSymbol.push(a[i]);
        }
        else {
            char temp = StackSymbol.top();
            std::string temp_str = to_string(temp);

            if (   (a[i] == 41) && ( temp == 40)   ){
                StackSymbol.pop();
            }

            else if (   (a[i] == 93) && ( temp == 91)  ){
                StackSymbol.pop();
            }
  
            else if (   (a[i] == 125) && ( temp == 123)   ){
                StackSymbol.pop();
            }
            
        }
    }
    
    //reach the end
    if (StackSymbol.empty()) {
        return true;
    }
    else {
        return false;
    }
    
}

