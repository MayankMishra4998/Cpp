/*  
 1. if Statement :- 
 Executes a block of code if the condition is true.


 2. if-else Statement :- 
 Executes one block if the condition is true, otherwise another block.


 3. if-else if-else Ladder :- 
 Used to check multiple conditions.


 4. Nested if :- 
 An if statement inside another if.

 */

#include<iostream>
using namespace std;
 int main(){
    int a;
    int b;

    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    if(a>b){
        cout<<"b  = " << b << " is less than a = " << a <<endl;
    } 
    else if(a<b){
        cout<<"a  = " << a << " is less than b = " << b <<endl;
    } 
    else{
        cout<<"a is equal to b"<<endl;
    }
     return 0;
 }



// Ternary Operator :-  { condition ? expression1 : expression2 }
// A shorthand for if-else statements.
#include <iostream>
using namespace std;    
int main() {
    int a = 10;
    int b = 20;

    // Using ternary operator to find the maximum of two numbers
    int max = (a > b) ? a : b;

    cout << "The maximum of " << a << " and " << b << " is: " << max << endl;

    return 0;
}


/*
5. switch Statement :-
Used when checking a variable against multiple fixed values.

 */

#include <iostream>
using namespace std;

int main() {
    int day = 2;

    switch(day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        default:
            cout << "Invalid Day";
    }

    return 0;
}