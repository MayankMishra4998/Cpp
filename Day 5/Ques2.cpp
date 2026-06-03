// Calculate nCr binomial coefficient for n and r

#include <iostream>
using namespace std;
int top(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int bottom(int r){
    int result2 = 1;
    for (int i = 1; i <= r; i++)
    {
        result2 *= i;
    }
    return result2;
}

int bottom2(int n, int r){
    int result3 = 1;
    for (int i = 1; i <= n-r; i++)
    {
        result3 *= i;
    }
    return result3;
}

int main(){
    int n, r;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the value of r : ";
    cin >> r;

    if(n>=r && n>0 && r>0){
        int result = top(n)/(bottom(r) * bottom2(n,r));
        cout << "The value of nCr for n = " << n << " and r = " << r << " is: " << result << endl;
    }
    else{
        cout << "Invalid input. Please ensure that n >= r and both n and r are positive integers." << endl;
    }

    return 0;
}