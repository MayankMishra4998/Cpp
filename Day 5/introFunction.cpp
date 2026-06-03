#include <iostream>
using namespace std;

// Function definition
void printMessage(){
    cout << "Hello, this is a message from the function!" << endl;
} 

// Function definition with parameters and return type
// to find the sum of two numbers
int sum (int num1, int num2) {
    int result = num1 + num2;
    cout << "The sum of " << num1 << " and " << num2 << " is: " << result << endl;
    return result;
};


// function definition to find the minimum of two numbers 
double minNumber(double num1, double num2) {
    if (num1 < num2) {
        return num1;
    } else {
        return num2;
    }

}

// function definition to find the sum of first N natural numbers
int findSum(int number){
    int sum =0 ;
    for(int i=0; i<=number; i++){
        sum += i;
    }

    return sum;
}


int main() {
    // Function call
    printMessage();

    int a = 5, b = 10;
    int total = sum(a, b);

    cout << minNumber(3.5, 2.1) << endl;
    cout<< total << endl;
    
    int number ;
    cout << "Enter the number N : ";
    cin >> number ;
    cout << "The sum of first " << number << " natural numbers is: " << findSum(number) << endl;

    return 0;
}