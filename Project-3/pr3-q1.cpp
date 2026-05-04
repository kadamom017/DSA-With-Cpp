#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

class DynamicMemoryAllocation
{
    public:
        Node* head;

        DynamicMemoryAllocation() {
            head = NULL;
    }

    void append(int data) {
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

    void insert_at_beginning(int data) {
        Node* new_node = new Node(data);
        new_node->next = head;
        head = new_node;
    }

    int Search(int key) {
        Node* temp = head;
        while (temp != NULL) {
            if (temp->data == key) {
                return 1;
                }
            temp = temp->next;
        }
        return 0;
    }
    
    void Delete_node(int key) {
        Node* temp = head;
        Node* prev = NULL;

        if (temp != NULL && temp->data == key) {
            head = temp->next;
            delete temp;
            cout << "Node deleted successfully." << endl;
            return;
        }

        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Value not found in list." << endl;
            return;
    }
        prev->next = temp->next;
        delete temp;
        cout << "Node deleted successfully." << endl;   
}

    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next_temp = NULL;

        while (current != NULL) {
            next_temp = current->next;
            current->next = prev;
            prev = current;
            current = next_temp;
        }
        head = prev;
    }

    void display() {
        Node* temp = head;
        if (temp == NULL) {
            cout << "List is Empty.." << endl;
            return;
        }
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    DynamicMemoryAllocation list;
    int choice, value;
    
    while (true) {
        cout << "\nLinked List Operations" << endl;
        cout << "1. Add to the list" << endl;
        cout << "2. Insert at Beginning of the list " << endl;
        cout << "3. Search for Value in the list" << endl;
        cout << "4. Delete Node from the list  " << endl;
        cout << "5. Reverse the List" << endl;
        cout << "6. Display all the elements of List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value: "; 
                cin >> value;
                list.append(value);
                cout << "Added Succesfully: "<< endl; 
                break;
            case 2:
                cout << "Enter the value: "; 
                cin >> value;
                list.insert_at_beginning(value);
                cout << "Insert At Beginning: "<< endl; 
                break;
                
            case 3:
                cout << "Search for the value: "; 
                cin >> value;
                if (list.Search(value) == 1) 
                cout << "Found!" << endl;
                else cout << "Not Found!" << endl;
                break;

            case 4:
                cout << "Delete value: "; 
                cin >> value;
                list.Delete_node(value);
                break;

            case 5:
                list.reverse();
                cout << "List reversed." << endl;
                break;

            case 6:
                list.display();
                break;

            case 0:
                return 0;
                
            default:
                cout << "Invalid Chocie..." << endl;
        }
    }
    return 0;
}
  
