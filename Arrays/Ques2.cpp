// WAF to calculate sum & product of all numbers in an array ..
#include <iostream>
using namespace std;

void sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of all number is array is : " << sum << endl;
}

void product(int arr[], int size)
{

    long long product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }

    cout << "Product of all number is array is : " << product << endl;
}



int main()
{

    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << " index value of a Array : ";
        cin >> arr[i];
    }

    cout << "The array is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;


    sum(arr , n);
    product(arr , n);

    return 0;
}



