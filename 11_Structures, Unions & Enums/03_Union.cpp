#include <iostream>
// Overwriting the vlaues in UNION 
// Overwritibg EUROS in place of DOLLARS in payment_1

using namespace std;
// Creating UNION
    union money {
        int dollars;   
        int euros; //
        float pounds;   
     };
     

int main(){
     
    // Creating a union variable
    union money payment_1;
    
    payment_1.dollars = 1000; 
    payment_1.euros = 280;

    cout<< "Payment made in : "<<payment_1.euros<<endl;

    
    return 0;
}