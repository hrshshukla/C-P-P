// Overloading ShortHand operator : (+=) (-=) 

#include <iostream>
using namespace std;

class myClass  
{
 public:
    int data;

    void getData(){
        cout << data << endl;
    }
    
// ShortHand Operator Overloading (+=)
    void operator +=(myClass inputObject)
    {
       data = data + inputObject.data;
    }

};


int main(){
    myClass obj1, obj2;
    
    obj1.data = 10;
    obj2.data = 90;

// ShortHand Operator Overloading

    obj1 += obj2; // means we want ->  Obj2.data = obj1.data
    obj1.getData();

    return 0;
}