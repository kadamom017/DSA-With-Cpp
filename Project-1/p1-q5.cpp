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

    int even[100], odd[100];
    int e = 0, o = 0;

    // Separate even and odd
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            even[e++] = arr[i];
        } else {
            odd[o++] = arr[i];
        }
    }

    for(int i = 0; i < e-1; i++){
        for(int j = 0; j < e-1-i; j++){
            if(even[j] > even[j+1]){
                swap(even[j], even[j+1]);
            }
        }
    }

     for(int i = 0; i < o-1; i++){
        for(int j = 0; j < o-1-i; j++){
            if(odd[j] < odd[j+1]){
                swap(odd[j], odd[j+1]);
            }
        }
    }

    cout << "Result: ";
    
    for(int i = 0; i < e; i++){
        cout << even[i] << " ";
    }

    for(int i = 0; i < o; i++){
        cout << odd[i] << " ";
    }

    return 0;
}