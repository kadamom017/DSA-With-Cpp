#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }    

    bool isEmpty() {
        return (front == -1 || front > rear);
    }

   void enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full." << endl;
        return;
    }
        rear++;
    arr[rear] = value;
    if (front == -1) {
        front = 0;   
    }
    cout << value << " Enqueued." << endl;
}

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << arr[front] << " Dequeued." << endl;
        front++;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\nQueue Operations\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

         switch (choice) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 0:
                cout << "Exit...";
                return 0;

            default:
                cout << "Invalid choice.";
        }
    }

    return 0;
}
