// calculate sum of digit of a number

#include <iostream>
using namespace std;
int main()
{
    int number;
    int digitSum = 0;
    int lastDigit = 0;
    cout << "Enter the number : ";
    cin >> number;

    int originalNumber = number; // Store the original number for later use
    while (number > 0)
    {
        lastDigit = number % 10;
        number = number / 10;

        digitSum += lastDigit;
    }

    cout << "The sum of digit of number " << originalNumber  << " is " << digitSum << endl;
}


