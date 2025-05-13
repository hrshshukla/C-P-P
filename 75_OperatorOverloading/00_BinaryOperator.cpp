// The normal function of operators works with buil-in datatypes only (int, char, float)
// but if we want that operators like (+, -, /) do what you want then we can overload them 
// means, (+) will perform (-) operation 

#include <iostream>
using namespace std;

class myClass  
{
 public:
    int data;

    void getData(){
        cout << data << endl;
    }

// Binary Operator Overloading
    myClass operator+(myClass inputObject)
    {
        myClass temp;
        temp.data = data + inputObject.data; // change the (+) with (-) and it will peform subtracting opeartion 
        return temp;
    }


};


int main(){
    myClass obj1, obj2, obj3;
    
    obj1.data = 10;
    obj2.data = 90;

// Binary Operator Overloading
    obj3 = obj1 + obj2;
    obj3.getData(); // Output : 100 


    return 0;
}