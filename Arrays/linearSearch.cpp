// Linear Search method ..
#include <iostream>
using namespace std;
int main()
{

    int arrSize;
    cout << "Enter the size of array : ";
    cin >> arrSize;
    int arr[arrSize];

    for (int i = 0; i < arrSize; i++)
    {
        cout << "Enter the value of index " << i + 1 << " of array : ";
        cin >> arr[i];
    }

    cout << "Your array is : ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int target, numberIndex;
    cout << "Enter the you find in array : ";
    cin >> target;

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == target)
        {
            numberIndex = i;
            break;
        }
    }

    if (numberIndex == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << numberIndex;
    }
}