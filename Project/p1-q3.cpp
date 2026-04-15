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

      cout << "Ascending Order : ";
    for(int n = 0; n < size; n++){
        cout << arr[n] << " ";
    }
    cout << endl;

     for(int j = 0; j < size; j++){
        for(int k = 0; k < size - 1 - j; k++){
            if(arr[k] < arr[k + 1]){
                arr[k]   = arr[k] + arr[k+1];
                arr[k+1] = arr[k] - arr[k+1];
                arr[k]   = arr[k] - arr[k+1];
            }
        }
    }

    cout << "Descending Order : ";
    for(int m = 0; m < size; m++){
        cout << arr[m] << " ";
    }
    cout << endl;

    return 0;
}