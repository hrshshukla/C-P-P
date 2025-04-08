#include <iostream>
#include <stack>
using namespace std;

class stack{
 public: 
    int size;
    int top;
    char* arrPointer;

    stack(int sizeInput){
        size = sizeInput;
        top = -1;
        arrPointer = new char[size];
    }

    bool isFull(){
        return (top == size-1); // if stack full then return 1, else return 0;
        }

    bool isEmpty(){
    return (top == -1); // if stack empty then return 1, else return 0;
    }

    void push(int value){
        if (isFull()){
            cout << "Stack is Overflow! cannot push: " << value << endl;
            return;
        }
        arrPointer [++top] = value; // ++top : pre increment
    }

    void pop(){
        if (isEmpty())
        {
            cout << "Stack is Empty (Underflow)"  << endl;
            return;
        }
        --top; // update top to 2nd last value
    }
  
};

int main(){

    

    
    return 0;
}