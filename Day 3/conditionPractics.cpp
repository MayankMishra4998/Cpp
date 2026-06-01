// Find character in lowercase or uppercase and print the position of the character in the string

#include <iostream>
using namespace std;

int main(){
    char character;

    cout << "Enter a character (A to Z or a to z): ";
    cin >> character;

    if(character >= 65 && character <= 90){
        cout << "The character " << character << " is uppercase." << endl;
    }
    else if(character >= 97 && character <= 122){
        cout << "The character " << character << " is lowercase." << endl;
    }
    else{
        cout << "Invalid input. Please enter a character from A to Z or a to z." << endl;
    }


    return 0 ;
}