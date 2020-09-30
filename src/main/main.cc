#include <iostream>
#include "src/lib/cpplib.h"

using namespace std;

int main() {

    
    
    Student_shallow a;
    Student_shallow b = a;
    Student_shallow c;
    c = a;
    cout << *a.id << *b.id << *c.id << endl;
    *c.id = 1;
    cout << *a.id << *b.id << *c.id << endl;

    Student_deep a1;
    Student_deep b1 = a1;
    Student_deep c1;
    c1 = a1;
    cout << *a1.id << *b1.id << *c1.id << endl;
    *c1.id = 1;
    cout << *a1.id << *b1.id << *c1.id << endl;
    
  
  return 0;
}
