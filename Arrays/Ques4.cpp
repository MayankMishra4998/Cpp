// WAF to get unique values form a array ;

#include <iostream>
using namespace std;

void getUniqueValue(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }

        if(count == 1){
            cout << arr[i] << " "; 
        }
    }
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

    getUniqueValue(arr, n);

    return 0;
}