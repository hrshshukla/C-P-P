#include <iostream>
#include <string>
using namespace std;

int main(){
    int a = 2, b = 0;
    try
    {
        if (b)
            cout << "Answer : " << a/b << endl; 

        else
            throw string("error");
            throw (b);
    }
    catch(int x){
        cout << x << endl;
    }
    catch(string e)
    {
        cout << e << endl;
    }
    
    return 0;
}