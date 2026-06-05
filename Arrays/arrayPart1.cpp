#include <iostream>
using namespace std;


void passByReference(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{

    // is method me ham array ka data pahle hi fix kr dete h
    int marks[5] = {99, 43, 45, 54, 77};

    // in this { array.lenght  == sizeof(array)/ sizeof(int) }
    for (int i = 0; i < (sizeof(marks) / sizeof(int)); i++)
    {
        cout << "Student " << i + 1 << " has marks = " << marks[i] << endl;
    }

    // In this type array ka data fix nii hota h ye assign value pr depend karta h
    double price[] = {46.53, 453.34, 53};

    // for getting the values form the user ..
    int subject;
    cout << "Enter the total subject you have : ";
    cin >> subject;

    int sum = 0;
    int MayankMarks[subject];
    for (int i = 0; i < (sizeof(MayankMarks) / sizeof(int)); i++)
    {
        cout << "Enter the subject " << i + 1 << " marks (out of 100) : ";
        cin >> MayankMarks[i];

        sum += MayankMarks[i];
    }

    for (int i = 0; i < (sizeof(MayankMarks) / sizeof(int)); i++)
    {
        if (MayankMarks[i] >= 0 && MayankMarks[i] <= 100 && subject > 0)
        {
            cout << "Subject " << i + 1 << " marks : " << MayankMarks[i] << endl;
                }
        else
        {
            cout << "Invalid marks , you can marks between 0 to 100";
            // return 0 ; isliye use kiya h taki agar user ne galat marks daale to program exit ho jaye aur aage ke code execute naa ho
            return 0;
        }
    }

    cout << "The Percentage you get in you examination is " << sum / subject <<"%" << endl;

    cout << "";

    
// Pass by reference in array :- 
    // is method me ham array ki ik copy bana lete h aur us copy ko function me pass kar dete h , jisse ham original array ke data ko change kar sakte h bin main array ke data ko change kiye bina .
    int arr[5] = {1, 2, 3, 4, 5};
    passByReference(arr, 5);

    cout << "The array after pass by reference is : ";
    for (int i = 0; i < (sizeof(arr) / sizeof(int)); i++)
    {
        cout << arr[i] << " ";
    }


    return 0;
}