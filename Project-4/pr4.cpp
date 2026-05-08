#include<iostream>
using namespace std;


class BaseStack {
    protected:
        int top, size, count;
        int *arr;

    public:
        BaseStack() {
            cout << "Enter the size of stack : ";
            cin >> size;
            arr = new int[size];
            top = -1;
            count = 0;
        }

        virtual void isEmpty() {
            if(top <= -1){
                cout << "Stack is Empty" << endl;
            }
            else{
                cout << "Stack is not Empty" << endl;
            }
        }

        virtual void isFull() {
            if(top >= size-1){
                cout << "Stack is Full" << endl;
            }
            else{
                cout << "Stack is not Full" << endl;
            }
        }

        virtual void displayStack() = 0;

        ~BaseStack() {
            delete[] arr;
        }
};

class Stack : public BaseStack {
    int ele;

    public:
        Stack() : BaseStack() {}

        void PushonStack(){
            if(top >= size-1){
                cout << "Stack Overflow" << endl;
            }

            else{
                cout << "Enter the element : ";
                cin >> ele;
                top++;
                arr[top] = ele;
                cout << "Element inserted successfully" << endl << endl;
                count++;
            }
        }

        void PopfromStack(){
            if(top < 0){
                cout << "Stack Underflow" << endl;
            }

            else{
                cout << "Element deleted is : " << arr[top] << endl;
                top--;
                count--;
                cout << "Element deleted successfully" << endl << endl;
            }
        }

        void peekStack(){
            if(top < 0){
                cout << "Stack is empty" << endl;
            }
            else{
                cout << "First element in the stack is : " << arr[top] << endl;
            }
        }

        void displayStack() {
            if(top < 0){
                cout << "Stack is Empty" << endl;
                return;
            }
            cout << "Elements in the stack are : ";
            for(int i=top; i>=0; i--){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        void isEmpty() {
            if(top <= -1){
                cout << "Stack is Empty" << endl;
            }
            else{
                cout << "Stack is not Empty" << endl;
            }
        }

        void isFull() {
            if(top >= size-1){
                cout << "Stack is Full" << endl;
            }
            else{
                cout << "Stack is not Full" << endl;
            }
        }

         void sizeofStack(){
            cout << "Size of the stack is : " << count << endl;
        }
};

class TrackedStack : public Stack {
    int totalPushes, totalPops;

    public:
        TrackedStack() : Stack() {
            totalPushes = 0;
            totalPops = 0;
        }

        void PushonStack(){
            Stack::PushonStack();
            totalPushes++;
        }

        void PopfromStack(){
            Stack::PopfromStack();
            totalPops++;
        }

        void displayStack() {
            Stack::displayStack();
            cout << "Total Pushes : " << totalPushes << endl;
            cout << "Total Pops   : " << totalPops << endl;
        }
};

int main(){
    int choice;
    TrackedStack s;

    do
    {
        cout << "Select the operation to perform in the stack" << endl;
        cout << "1. Push a element in the stack" << endl;
        cout << "2. Pop a element in the stack" << endl;
        cout << "3. Peek First the element in the stack" << endl;
        cout << "4. Display all the elements in the stack" << endl;
        cout << "5. Is Stack empty? " << endl;
        cout << "6. Is Stack full? " << endl;
        cout << "7. Size of the stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.PushonStack();
            break;
            
        case 2:
            s.PopfromStack();
            break;

        case 3:
            s.peekStack();
            break;

             case 4:
            s.displayStack();
            break;

        case 5:
            s.isEmpty();
            break;

        case 6:
            s.isFull();
            break;

        case 7:
            s.sizeofStack();
            break;

        case 0:
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;

             }

    } while (choice != 0);

    return 0;
}