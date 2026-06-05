#include <iostream>
using namespace std;

int main()
{
    int arrSize;

    cout << "Enter the size of array: ";
    cin >> arrSize;

    int arr[arrSize];

    // Input array
    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    cout << "Arrey is : ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    // Reverse array
    int start = 0;
    int end = arrSize - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // Print reversed array
    cout << "Reversed array: ";

    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}