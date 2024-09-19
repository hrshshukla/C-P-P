#include <iostream>
// --Pass_by_Reference-- (Asli swapping) mtlb sach me ghar jake value badal do
// Isme POINTER ka use hota hai q ki ADDRESS atore krna hai bhai, aur address tph pointer hi store kr sakta hai

using namespace std;
int swap_pointer(int* a, int* b){
    int temp = *a; // a ke anadr jo value (*) hai usko temp me store kr do
    *a = *b;
    *b = temp;

}
int main(){
    int a=12, b=44 ;
    swap_pointer(&a,&b); // Yaha se address pass hoga upar 
    cout<< "The value of (a) and (b) is  :" <<a<<b<<endl;
    
    return 0;
}