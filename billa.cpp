#include<iostream>
#include<vector>

using namespace std;

template<typename T>
class MemoryCalculate {
public:
    T id;
    string name;

    MemoryCalculate(T id, string name) {
        this->id = id;
        this->name = name;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    vector<MemoryCalculate<int>> students;
    int choice, id;
    string name;

    while(true) {
        cout << endl << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice) {
            case 1: {
                cout << "Enter ID: ";
                cin >> id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, name);
                students.push_back(MemoryCalculate<int>(id, name));
                cout << "Added the Student Successfully! " << endl;
                break;
            }

            case 2: {
                cout << "\nAll Students are:" << endl;
                for(int i = 0; i < students.size(); i++) {
                    students[i].display();
                }
                break;
            }

            case 3: {
                cout << "Enter ID to remove the student: ";
                cin >> id;
                bool found = false;
                for(int i = 0; i < students.size(); i++) {
                    if(students[i].id == id) {
                        students.erase(students.begin() + i);
                        cout << "Removed the Student Successfully!" << endl;
                        found = true;
                        break;
                    }
                }
                if(!found) {
                    cout << "Error: Student with ID " << id << " not found!" << endl;
                }
                break;
            }

            case 4: {
                cout << "Enter ID to search the student: ";
                cin >> id;
                for(int i = 0; i < students.size(); i++) {
                    if(students[i].id == id) {
                        students[i].display();
                        break;
                    }
                }
                break;
            }

            case 5:
                cout << "Exiting the program..." << endl;
                return 0;

            default:
                cout << "Invalid choice! Please enter a valid choice" << endl;
        }
    }

    return 0;
}