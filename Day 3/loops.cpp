// For Loop :- Used when the number of iterations is known.

#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cout << i << endl;
    }

    return 0;
}

// 2. while Loop :- Used when the number of iterations is not known.

#include <iostream>
using namespace std;
int main()
{

    int number;
    cout << "Enter the number : ";
    cin >> number;

    int i = 0;

    while (i <= number)
    {
        cout << i << endl;
        i++;
    }

    return 0 ;
}