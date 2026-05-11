#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class SinglyLinkedList {
public:
    Node* head;

    SinglyLinkedList() {
        head = NULL;
    }

    void insert_at_beginning(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    void insert_at_end(int data) {
        Node* new_node = new Node(data);
        if (head == NULL) {
            head = new_node;
            return;
        }
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }

     void delete_from_beginning() {
        if (head == NULL) {
            cout << "List is empty. Cannot delete." << endl;
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted from beginning." << endl;
    }

    void display() {
        if (head == NULL) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    SinglyLinkedList list;
    int choice, value;

    while (true) {
        cout << "\nSingly Linked List Operations\n";
        cout << "1. Insert at beginning\n";
        cout << "2. Insert at end\n";
        cout << "3. Delete from beginning\n";
        cout << "4. Display list\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                list.insert_at_beginning(value);
                cout << "Inserted at beginning.\n";
                break;

            case 2:
                cout << "Enter value: ";
                cin >> value;
                list.insert_at_end(value);
                cout << "Inserted at end.\n";
                break;

            case 3:
                list.delete_from_beginning();
                break;

            case 4:
                list.display();
                break;

            case 0:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}