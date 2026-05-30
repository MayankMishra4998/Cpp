// post and pre increment operator :-

#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = a++;                          // post increment operator => pahle value assign karega b ko a = 5 , than a ki value increase karega a = 6 .
    cout << "Value of a : " << a << endl; // 6
    cout << "Value of b : " << b << endl; // 5


    int pre = 5;
    int preB = ++pre;                           // pre increment operator => pahle value increase karega pre = 6 , than value assign karega preB ko preB = 6 .
    cout << "Value of pre : " << pre << endl;   // 6
    cout << "Value of preB : " << preB << endl; // 6
    return 0;
    
}
