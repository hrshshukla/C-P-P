#include <iostream>
// What are Structures : Help in data grouping. (struct)
// This a header code
// For storing more characters use STRING 
// Learning use Double Quote ("") in string, string name = "harsh";
using namespace std;
struct student{

        /* data */
        string name;
        int age;
        float code;
    };


int main(){
    struct student harsh;

    harsh.name = "harshshukla";
    harsh.age = 18;
    harsh.code = 101;

    cout<<"working"<<endl; 

    return 0;
}