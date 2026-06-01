// Sum of numbers form 1 to n

#include<iostream>
using namespace std;

int main(){
    int number ;
    cout << "Enter the number : ";

    cin >> number ;

    int sum = 0 ;
    for(int i = 0 ; i <= number ; i++){
        sum += i ;
    }
/*
  for while loop

    int sum = 0 ;
    int i = 0 ;
    while(i <= number){
        sum += i ;
        i++;
    }

*/
    cout << "The sum of numbers from 1 to " << number << " is : " << sum << endl ;

    return 0 ;

}



// sum of odd numbers from 1 to n
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    int oddSum = 0;
    for (int i = 1; i <= number; i = i + 2)
    {
        oddSum += i;
    }
    cout << "The sum of odd numbers from 1 to " << number << " is : " << oddSum << endl;
    return 0;
}


// Check if a number is prime or not

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number : ";
    cin >> n ;

    bool isPrime;
    for (int i = 2 ; i < n ; i++){
        if (n % i == 0){
            isPrime = false ;
            break ;
        }
        else{
            isPrime = true ;
        }

    }

    if(isPrime == true){
        cout << "The number is prime " << endl ;
    }
    else{
        cout << "The number is not prime " << endl ;
    }

    return 0 ;
}