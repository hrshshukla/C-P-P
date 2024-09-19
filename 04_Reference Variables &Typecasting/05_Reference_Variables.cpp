#include <iostream>
// A reference variable refer to the same memory location but have different name.
// We can create a reference variable using the "&" operator, like (int &y = x;) This means y is a refrence of x 
// USE :
using namespace std;

int main(){
    int x=20;
    int &y=x;

    cout<<x<<endl; // Output : 20
    cout<<y<<endl; // Output : 20
    return 0;
}