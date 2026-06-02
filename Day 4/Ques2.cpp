/*
 Output:  
         1 2 3 
         4 5 6
         7 8 9
*/


#include <iostream>
using namespace std;    
int main(){
    int rows, cols;
    cout << "Enter the number of rows : ";
    cin >> rows ;
    cout << "Enter the number of columns : ";
    cin >> cols ;

    int count = 1;

    for (int i =1 ; i <= rows ; i++){
        for(int j = 1 ; j<= cols ; j++){
            cout << count << " ";
            count++;
        }

        cout << endl;
    }
 
}


/*
 Output:  
         A B C
         D E F
         G H I
*/

#include <iostream>
using namespace std;
int main(){
    int rows, cols;
    cout << "Enter the number of rows : ";
    cin >> rows ;
    cout << "Enter the number of columns : ";
    cin >> cols ;

    char ch = 'A';

    for (int i =1 ; i <= rows ; i++){
        for(int j = 1 ; j<= cols ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}