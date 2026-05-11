#include<iostream>
using namespace std;


class Stack {
    protected:
        int top, size;
        int *arr;

    public:
        Stack() {
            cout << "Enter the size of stack : ";
            cin >> size;
            arr = new int[size];
            top = -1;
        }

        
        void Push(){
            if(top >= size-1){
                cout << "Stack Overflow" << endl;
            }

            else{
                int ele;
                cout << "Enter the element : ";
                cin >> ele;
                top++;
                arr[top] = ele;
                cout << "Element inserted successfully" << endl << endl;
            }
        }

        void Pop(){
            if(top < 0){
                cout << "Stack Underflow" << endl;
            }

            else{
                cout << "Element deleted is : " << arr[top] << endl;
                top--;
                cout << "Element deleted successfully" << endl << endl;
            }
        }

        void display() {
            if(top < 0){
                cout << "Stack is Empty" << endl;
                return;
            }
            else {
            cout << "Elements in the stack are : ";
            for(int i=top; i>=0; i--){
                cout << arr[i] << " ";
            }
            cout << endl << endl;
        }
    }   
    ~Stack() {
            delete[] arr;
        }
};

int main(){
    int choice;
    Stack s;

    do
    {
        cout << "Select the operation to perform in the stack" << endl;
        cout << "1. Push a element in the stack" << endl;
        cout << "2. Pop a element in the stack" << endl;
        cout << "3. Display all the elements in the stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
            s.Push();
            break;
            
        case 2:
            s.Pop();
            break;

        case 4:
            s.display();
            break;

        case 0:
         cout << "Exit..." << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;

             }

    } while (choice != 0);

    return 0;
