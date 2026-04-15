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

    cout << " Array  element: ";
    for(int n = 0; n < size; n++){
        cout << arr[n] << " ";
    }
    cout << endl;

    int unique[size];
    int count = 0;

    for(int m = 0; m < size; m++){
        if(m == 0 || arr[m] != arr[m-1])
            unique[count++] = arr[m];
    }

    cout << "Unique Elements : ";
    for(int p = 0; p < count; p++){
        cout << unique[p] << " ";
    }
    cout << endl;

    return 0;
}




