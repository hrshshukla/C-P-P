#include <iostream>
#include <vector>

// <Vector> ke beech me agar hume koi naya element add krna hai toh hum use krte hai (iterators) ka
// iterators : iterators pointer ki tarah kaam krte hai, hum <vector> ke kisi bhi ek element pe inko point krwa sakte hai.

// Synatx vector <int> :: iterator (name) = vecTor.begin() <--- ya ---> vecTor.end() 
using namespace std;

    int printValue(){
        
    }

int main(){
    vector <int> vecTor;
    int size;
    cout << "Enter Size " << size << endl; cin>>size;
    
// Setting the value of vector 
      for (int i = 0; i < size; i++)
    {
        cout << "Enter Value of element " << i << " : ";
        cin>>vecTor[i];
    }
    
    return 0;
}