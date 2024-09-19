#include <iostream>
// Overwriting the vlaues in UNION 
// Overwritibg EUROS in place of DOLLARS in payment_1

using namespace std;
// Creating UNION
    union money {
        int dollars;   
        char euros[10]; //
        float pounds;   
     };
     

int main(){
     
    // Creating a union variable
    union money payment_1;
    
    payment_1.dollars = $1000; 
    payment_1.euro    = 280;

    cout<< "Payment made in : "<<payment_1.euro<<endl;



    
    return 0;
}