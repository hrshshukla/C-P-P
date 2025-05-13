#include <iostream>
using namespace std;

class Stack{
     
 public:
    int* arr;
    int top;
    int size;

    Stack(int inputSize){
        size = inputSize;
        arr = new int[size];
        top = -1;
    }

    bool isFull(){
        return (top == size -1 );    
    }

    bool isEmpty(){
        return (top == -1);
    }

    void push(int inputValue){
        if (isFull()) return;
        arr[++top] = inputValue;
    }

    void pop(){
        if (isEmpty()) return;
        top--;
    }

    ~Stack(){
        delete[] arr;
    }
};

int main(){
    
    return 0;
}