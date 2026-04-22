#include<iostream>
#include<vector>
using namespace std;

template <typename T>
class MemoryCalculate
{
    public:
        T id;
        string name;

        MemoryCalculate(T id , string name)
        {
            this-> id = id;
            this-> name = name;
        }

         void display()
        {
            cout << "ID: " << id << ", Name: " << name << endl;
        }
};

int main()
{
    vector<MemoryCalculate<int>> students;
    int choice, id;
    string name;

    while(choice){
        cout<<"1. Add Student"<< endl;
        cout<<"2. Display All Student"<< endl;
        cout<<"3. Remove Student by ID"<< endl;
        cout<<"4. Search Student by ID"<< endl;
        cout<<"0. Exit"<< endl;
        cout<<"Enter Your Choice:" ;
        cin>> choice;
    

    switch(choice){

        case 1: {
                cout << "Enter ID: ";
                cin >> id;

                cout << "Enter Name: ";
                cin >> name; 

                students.push_back(MemoryCalculate<int>(id, name));
                cout << "Students Added Successfully..."<< endl;
                break;
            }    

            case 2: {
                cout << "Student List:"<< endl;
                for(int i = 0; i < students.size(); i++) 
                {
                        students[i].display();
                }   
                break;
            }

            case 3: {
                cout << "Enter ID to remove students: ";
                cin >> id;

                int found = 0;
                for(int i = 0; i < students.size(); i++) 
                {
                    if(students[i].id == id) 
                    {
                        students.erase(students.begin() + i);
                        cout << "Student removed Successfully..." << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0) {
                    cout << "Student with this ID not found"<< endl;
                }
                break;
            }

            case 4: {
                cout << "Enter the ID to search student: ";
                cin >> id;

                int found = 0;
                for(int i = 0; i < students.size(); i++) 
                {
                    if(students[i].id == id) 
                    {
                        students[i].display();
                        found = 1;
                        break;
                    }
                }
                
            } 
              case 5:
                cout << "Exit"<< endl;
                return 0;

            default:
                cout << "Invalid Choice" << endl;

        }
        }
        return 0;
    }

   

    