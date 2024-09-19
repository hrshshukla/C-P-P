#include <iostream>
// --Pass-by-Value--  (sasti swapping) mtlb copy banao aur swap kro
// Using "Temp" to swap value of two variables
using namespace std;

// This is a Pass by Value function
void swap(int a, int b){
    int temp = a; // we can use any variable instead of "temp" like "x"
    a = b;
    b = temp;
    
}

int main(){
    int a=2, b=8;
    
    swap(a,b);// You need to perform this function first 
    cout<<"The value of (a) and (b) After swapping : "<<a<<" and "<<b<<endl;

    return 0;
}