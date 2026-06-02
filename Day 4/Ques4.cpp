/*
    Output :- 
          1 1 1 1
            2 2 2
              3 3
                4
*/

#include<iostream>
using namespace std; 
int main(){
    for(int i =1 ; i<= 4 ; i++){

        // for space this loop is used
        for(int j = 0 ; j <i-1 ; j++ ){
            cout << "  ";  
        }

        // for printing the number this loop is used
        for(int j = 1 ; j<=4 -(i-1) ; j++){
            cout << i << " ";
        }
        cout << endl;
    }


    return 0;
}


