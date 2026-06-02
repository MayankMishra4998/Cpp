/*
output =
          1 2 3 4
          1 2 3 4
          1 2 3 4
          1 2 3 4
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

/*
for output
             A B C D
             A B C D
             A B C D
             A B C D



#include <iostream>
using namespace std;
int main(){

    for(int i = 1 ; i<=4 ; i++){
     char ch = 'A';
         for(int j =1 ; j <=4 ; j++){
            cout << ch << " ";
            ch++;   // 65 = 65+1 = 66 = B
        }
        cout << endl;

    }
}


*/