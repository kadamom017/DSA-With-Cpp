#include<iostream>
using namespace std;

int main (){
    int size;
    cout<<"Enter the Size of an Array: ";
    cin >> size;

    int arr[size];
    cout<< "Enter the Element"<< endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Index of ["<< i <<"] is = ";
        cin >> arr[i];
    }    

    for(int j = 0; j < size; j++){
        for(int k = 0; k < size - 1 - j; k++){
            if(arr[k] > arr[k + 1]){
                arr[k]   = arr[k] + arr[k+1];
                arr[k+1] = arr[k] - arr[k+1];
                arr[k]   = arr[k] - arr[k+1];
            }
        }
    }

    int largest = arr[size - 1];

    int secondLargest = -1;
    for(int m = size - 2; m >= 0; m--){
        if(arr[m] != largest){
            secondLargest = arr[m];
            break;
        }
    }

    cout << "\nLargest Element : " << largest << endl;
    if(secondLargest == -1)
        cout << "Second Largest Element : Not Found (all elements are same)" << endl;
    else
        cout << "Second Largest Element : " << secondLargest << endl;

    return 0;
}