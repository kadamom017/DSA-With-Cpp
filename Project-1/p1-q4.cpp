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

    int positive = 0, negative = 0;

    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            positive++;
        }
        else if(arr[i] < 0){
            negative++;
        }
    }

    cout << "Count of Positive Numbers: " << positive << endl;
    cout << "Count of Negative Numbers: " << negative << endl;

    return 0;
}