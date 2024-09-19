#include <iostream>
// What is (typedef) : (typedef) is used for making shortcuts 
// Example : typedef struct student{} stdnt; now we can use "std" instead of "struct student"
//             ^                       ^
using namespace std;

// Creating a struct with typedef
typedef struct student {
    /* data */
    string name;
    int age;
    float code;
} stdnt;

int main() {
    // Using typedef alias to create a struct variable
    stdnt harsh;

    harsh.name = "harshshukla";
    harsh.age = 18;
    harsh.code = 101;

    // Displaying the details
    cout << "Name: " << harsh.name << endl;
    cout << "Age: " << harsh.age << endl;
    cout << "Code: " << harsh.code << endl;

    return 0;
}
