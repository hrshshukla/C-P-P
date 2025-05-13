// Over loading (=) Unary Operator

#include <iostream>
using namespace std;

class myClass  
{
 public:
    int data;

    void getData(){
        cout << data << endl;
    }
    
// Unary Operator Overloading (=)
    void operator=(myClass inputObject)
    {
       data = inputObject.data;
    }

};


int main(){
    myClass obj1, obj2;
    
    obj1.data = 10;

// Unary Operator Overloading

    obj2 = obj1; // means we want ->  Obj2.data = obj1.data
    obj2.getData();

    return 0;
}