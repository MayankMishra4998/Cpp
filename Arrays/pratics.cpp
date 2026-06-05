#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the size of array : ";
    cin>>a;

    int arr[a];
    for(int i=0; i<a; i++){
        cout<<"Enter the value of index "<< i+1 <<" of array : ";
        cin>>arr[i];
    }

    cout << "Your array is : ";
    for(int i=0; i<a; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int maxIndex , minIndex;
    int max = arr[0];
    int min = arr[0];

    for(int i =0 ; i <a; i++){
        
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }

    cout << "The maximum value in the array is : " << max << " at index " << maxIndex << endl;
    cout << "The minimum value in the array is : " << min << " at index " << minIndex << endl;
    return 0;
}