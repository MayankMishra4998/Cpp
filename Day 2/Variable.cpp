// varible => container that stores data value.

#include <iostream>
using namespace std;
int main()
{
    //Data types => it is used to define the type of data that a variable can hold.
    // int => {4bits} it is used to store integer values.
    // char => {1bit} it is used to store single character values.
    // float =>{4bits} it is used to store decimal values.
    // double => {8bits} it is used to store double precision decimal values.
    // bool => {1bit} it is used to store boolean values (true or false).


    // A = 65 in binary  than  B => 66  then C => 67
    // a = 97 in binary  tham b => 98  than c => 99
    int age = 20;

    // int =>
    // for output we use cout and for new line we use endl or \n
    cout << "My age is " << age << endl;

    // sizeof operator => it is used to find the size of data type or variable in bytes.
    cout << "Size of age: " << sizeof(age) << " bytes" << endl;


    /* 
    Type Casting => it is used to convert one data type to another data type.
          1 =>  Implicit type casting => it is done automatically by the compiler.(coversion of low data type to high data type)   
          2 =>  Explicit type casting => it is done manually by the programmer. to convert high data type to low data type 

     */
    double pi = 3.14; 
    int pi_int = (int)pi; // explicit type casting
    cout << "Pi as integer: " << pi_int << endl;

    
    return 0;
}