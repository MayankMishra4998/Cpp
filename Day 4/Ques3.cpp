/*
    Output :-

         *
         **
         ***
         ****
*/
#include <iostream>
using namespace std;
int main()
{

    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

/*
    Output :-

         1
         22
         333
         4444
*/

#include <iostream>
using namespace std;
int main()
{

    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

/*
    Output :-

         A
         BB
         CCC
         DDDD
*/

#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

/* Output :-
         1
         12
         123
         1234
*/

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout << j;
        }
        cout << endl;
    }
}


/*
  Output :-

         1
         2 3
         4 5 6
         7 8 9 10
*/

#include <iostream>
using namespace std;

int main() {
    int number = 1;

    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << number;
            number++;
        }
        cout << endl;
    }

    return 0;
}