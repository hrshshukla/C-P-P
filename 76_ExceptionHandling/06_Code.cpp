// multiple exceprions one Catch block using : three dots  -> catch(...)

#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 100;

    try
    {
        if (b<=99)
            cout << "Answer : " << a/b << endl; 

        if (b >= 100)
            throw ('X'); // Passing (char) type value 

        if (b>= 1000)
            throw(0.999f); // Passing (float) type value 
    }
    catch(...) // Handles all types of errors -> char, float etc 
    {
        cout << "Some error " << endl;
    }
    
    return 0;
}