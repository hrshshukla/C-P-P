// Over loading (++) Unary Operator
// There is different approach for prefix -> (++a) and postfix -> (a++) in Unary Operator

#include <iostream>
using namespace std;

class myClass  
{
 public:
    int data;

    void getData(){
        cout << data << endl;
    }
    
// Unary Operator Overloading
    // Prefix
    void operator++()
    {
       data = data + 1;
    }

    // Postfix
    void operator++(int){ // -> The [int] in operator++(int) is just a dummy parameter, it help compiler to distinguish between ++a and a++ 
        data = data + 1; 
    }

};


int main(){
    myClass obj1, obj2, obj3;
    
    obj1.data = 10;
    obj2.data = 90;

// Unary Operator Overloading

    // prefix
    ++obj3;
    obj3.getData(); // Output : 101

    // postfix
    obj3++;
    obj3.getData(); // Output : 102

    return 0;
}