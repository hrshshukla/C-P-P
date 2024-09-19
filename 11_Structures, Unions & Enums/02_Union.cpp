#include <iostream>
// UNION are used to provide option 
// Provide option to choose one out of many and it will allocate storage of the option you choosed 
// Remaining other options will not go into ram 
// Helps to save storage space : As you will choose one out of many option 

using namespace std;
// Creating UNION
    union money {
        int dollars;    // (4 Byte) in dollars
        int euros;     // (4 Byte) in euros
        float pounds;   // (4 byte) in pounds
     };
     //  Total size of UNION money = 4 + 4 + 4 = 12 bytes

int main(){
     
    // Creating a union variable
    union money payment_1;
    
    payment_1.dollars = 1000;   // Hum Europe me the aur DOLLAR de rhe hai lekin waha to EURO chalta hai
    payment_1.euros   = 904;    // toh hum ab DOLLAR ko EURO se replace kr dege (Overwrite kr dege)

    cout<< "Payment in Dollars : ("<<payment_1.dollars<<")  <--- this is a garbage value"<<endl; // Ab jab payment hi EURO me hui hai aur DOLLAR bologe to "GRABAGE VALUE" milegi
    cout<< "Payment in Euro : "<<payment_1.euros<<"<--- 904 Euro = $1000"<<endl; // Ab sahi value milegi 
    


    return 0;
}