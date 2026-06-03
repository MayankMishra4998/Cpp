// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std ;

int decimal (int binaryNumber){
    int result = 0 ;
    int lastdigit ;
    int power = 1 ;
    
    while(binaryNumber >0 ){
    
    lastdigit = binaryNumber%2  ;
    binaryNumber /= 2  ;
    
    result += lastdigit*power ;
    power *= 10 ;
    
    }
    return result ;   
}

int main() {
  int n;
  cout << "Enter the Decimal number : " ;
  cin >>  n;
  
  cout << decimal(n) << endl;
  
  for(int i =1; i<=50 ; i++){
      cout << "Binary of " << i << " is = " << decimal(i) << endl ;
  }
 
  
    return 0;
}