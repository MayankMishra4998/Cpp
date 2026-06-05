// WAF to swap max and min value of a array ..

#include <iostream>
using namespace std;

int swapMaxAndMin(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    int maxIndex, minIndex;
    int afterSwapmaxIndex, afterSwapminIndex;

    for (int i = 0; i < size; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            maxIndex = i;
        }

        if (min >= arr[i])
        {
            min = arr[i];
            minIndex = i;
        }
    }

    cout << "Max value at index " << maxIndex << " is " << max << endl;
    cout << "Min value at index " << minIndex << " is " << min << endl;

    swap(
        arr[maxIndex], arr[minIndex]);

    cout << "The Swap array is : ";
    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
            afterSwapmaxIndex = i;
        }

        if (min >= arr[i])
        {
            min = arr[i];
            afterSwapminIndex = i;
        }
    }

    cout << "After Swape " << endl;
    cout << "Max value at index " << afterSwapmaxIndex << " is " << max << endl;
    cout << "Min value at index " << afterSwapminIndex << " is " << min << endl;
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

    swapMaxAndMin(arr, n);

    return 0;
}