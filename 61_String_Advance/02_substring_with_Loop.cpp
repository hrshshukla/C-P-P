#include <iostream>
#include <string>

using namespace std;
void checkAlphabet(string input_string){
    for (int letter = 0; letter < input_string.length(); letter++)
    {
        // Ye sirf capital letters ke liye hai 
        if (input_string[letter] >= 'A' && input_string[letter] <= 'Z') {
            
            for (char ch = 'A'; ch <= input_string[letter]; ch++) {
                cout << input_string.substr(0, letter) << ch << endl;
            }
        } 

        // Ye sirf small letters ke liye hai 
        else if (input_string[letter] >= 'a' && input_string[letter] <= 'z') {
            
            for (char ch = 'a'; ch <= input_string[letter]; ch++) {
                cout << input_string.substr(0, letter) << ch << endl;
            }
        }    
    }
 }

int main(){
    string input;
    cout << "Enter Name : "  << endl;
    cin>>input;

    checkAlphabet(input);

    return 0;
}
