#include <iostream>  
using namespace std;  
  
int main() {  
    char character;  
    cout << "Enter a character: ";  
    cin >> character;  
    char out = character;
    character = tolower(character);  
  
    if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {  
        cout << out << " is a vowel." << endl;  
    } else {  
        cout << out << " is a consonant." << endl;  
    }  
  
    return 0;  
}  