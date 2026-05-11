#include <iostream>
using namespace std;

int main() {
    int n, arr[100], key, pos = -1, comparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        comparisons++;           
        if (arr[i] == key) {
            pos = i + 1;         
            break;             
        }
    }

    if (pos != -1) {
        cout << "Element found at position: " << pos << endl;
    } else {
        cout << "Element not found." << endl;
    }
    cout << "Number of comparisons made: " << comparisons << endl;

    return 0;
}