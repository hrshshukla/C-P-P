// Overloading Comparsion operator : (==) 

#include <iostream>
using namespace std;

class myClass  
{
 public:
    int data;

    void getData(){
        cout << data << endl;
    }
    
// Comparison Operator Overloading (==)
    bool operator ==(myClass inputObject)
    {
       return(data == inputObject.data);
    }

};


int main(){
    myClass obj1, obj2;
    
    obj1.data = 10;
    obj2.data = 90;

// 
    obj1 == obj2 ? cout << "Equal" : cout << "Not Equal" << endl;

    return 0;
}