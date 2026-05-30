// Operators => it is a symbol that tells the compiler to perform specific mathematical, logical, or relational operations and produce a final result.

/*

 Arithmetic Operators => it is used to perform mathematical operations on operands.
          + => addition operator => it is used to add two operands.
          - => subtraction operator => it is used to subtract two operands.
          * => multiplication operator => it is used to multiply two operands.
          / => division operator => it is used to divide two operands.
          % => modulus operator => it is used to find the remainder of division of two operands.




 Logical Operators => it is used to perform logical operations on operands.
          && => logical AND operator => it returns true if both operands are true.
          || => logical OR operator => it returns true if at least one operand is true.
          ! => logical NOT operator => it returns true if the operand is false and vice versa.



 
 Relational Operators => it is used to compare two operands and return a boolean value (true or false).
          == => equal to operator => it returns true if both operands are equal.
          != => not equal to operator => it returns true if both operands are not equal.
          > => greater than operator => it returns true if the left operand is greater than the right operand.
          < => less than operator => it returns true if the left operand is less than the right operand.
          >= => greater than or equal to operator => it returns true if the left operand is greater than or equal to the right operand.
          <= => less than or equal to operator => it returns true if the left operand is less than or equal to the right operand.


 Assignment Operators => it is used to assign values to variables.
          = => assignment operator => it is used to assign a value to a variable.
          += => addition assignment operator => it adds the right operand to the left operand and assigns the result to the left operand.
          -= => subtraction assignment operator => it subtracts the right operand from the left operand and assigns the result to the left operand.
          *= => multiplication assignment operator => it multiplies the left operand by the right operand and assigns the result to the left operand.
          /= => division assignment operator => it divides the left operand by the right operand and assigns the result to the left operand.
          %= => modulus assignment operator => it takes modulus using two operands and assigns the result to the left operand.  


 Unary Operators => it is used to perform operations on a single operand.
          ++ => increment operator => it is used to increase the value of a variable by 1   
          -- => decrement operator => it is used to decrease the value of a variable by 1

  */



  // Sum of two numbers :- 

  #include <iostream>
  using namespace std ; 
  
  int main (){
    int num1 , num2 ;

    cout << "Enter First Number  : " ;
    cin >> num1 ;

    cout << "Enter Second Number : " ;
    cin>> num2 ;

    int sum = num1 + num2 ;
    cout << "Sum of " << num1 << " & " << num2 << " is " << sum << endl ;
    
    return 0;

  }


