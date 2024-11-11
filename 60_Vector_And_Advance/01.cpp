#include <iostream>
#include <vector>
// Way to create vector
// (1) Make sure to #include <vector>
// (2) Syntax : 
// -----> vector <type> (vectorName) (size);
// -----> vector <type> (vectorName) (size);

// Some keywords :
// push_back() and pop_back
// vector.at()
// vector.size()
//

using namespace std;

int main(){
    vector<int> vector1;
    int element_value, size;  
    cout << "Enter Size : " << size << endl;
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter value of element " << i << " : ";
        cin>>element_value;
        vector1.push_back(element_value); // ------> Ye (push_back) ek element create kreag vector ke last me aur (last_element = element_value) kr dega .
    }
    
    vector<int> vector2;
    vector<int> vector3;
    vector<int> vector4;

   return 0;
}