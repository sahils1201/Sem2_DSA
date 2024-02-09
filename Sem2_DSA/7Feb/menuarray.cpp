#include <iostream>
using namespace std;

class ArrayLinkedList {
private:
    int *arr;
    int size;
public:
    ArrayLinkedList(int maxSize) {
        size = 0;
        arr = new int[maxSize];
    }

    ~ArrayLinkedList() {
        delete[] arr;
    }

    void insertAtTail(int val) {
        arr[size++] = val;
        cout << val << " inserted at the tail." << endl;
    }

    void insertAtHead(int val) {
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = val;
        size++;
        cout << val << " inserted at the head." << endl;
    }

    void insertAfterValue(int val, int newValue) {
        int index = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            for (int i = size; i > index + 1; i--) {
                arr[i] = arr[i - 1];
            }
            arr[index + 1] = newValue;
            size++;
            cout << newValue << " inserted after value " << val << "." << endl;
        } else {
            cout << "Value " << val << " not found in the array." << endl;
        }
    }

    void deleteHead() {
        if (size > 0) {
            cout << "Head element " << arr[0] << " deleted." << endl;
            for (int i = 0; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        } else {
            cout << "Array is empty. Nothing to delete." << endl;
        }
    }

    void deleteNode(int val) {
        if (size > 0) {
            int index = -1;
            for (int i = 0; i < size; i++) {
                if (arr[i] == val) {
                    index = i;
                    break;
                }
            }
            if (index != -1) {
                cout << "Value " << arr[index] << " deleted from the array." << endl;
                for (int i = index; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                size--;
            } else {
                cout << "Value " << val << " not found in the array." << endl;
            }
        } else {
            cout << "Array is empty. Nothing to delete." << endl;
        }
    }

    void displayList() {
        cout << "The elements in array is: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "-";
        }
        cout<< endl;
    }

    bool search(int val) {
        for (int i = 0; i < size; i++) {
            if (arr[i] == val) {
                return true;
            }
        }
        return false;
    }
};

void displayMenu() {
    cout << "\nArray Operations:" << endl;
    cout << "1. Insert at Tail" << endl;
    cout << "2. Insert at Head" << endl;
    cout << "3. Insert After Value" << endl;
    cout << "4. Delete Head" << endl;
    cout << "5. Delete element" << endl;
    cout << "6. Display Array" << endl;
    cout << "7. Search" << endl;
    cout << "8. Exit" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    ArrayLinkedList list(size);

    // Ask for elements of the array
    cout << "Enter " << size << " elements for the array:" << endl;
    for (int i = 0; i < size; ++i) {
        int value;
        cout << "Enter element " << i + 1 << ": ";
        cin >> value;
        list.insertAtTail(value);
    }

    int choice, value, newValue;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert at tail: ";
                cin >> value;
                list.insertAtTail(value);
                break;
            case 2:
                cout << "Enter value to insert at head: ";
                cin >> value;
                list.insertAtHead(value);
                break;
            case 3:
                cout << "Enter value after which to insert: ";
                cin >> value;
                cout << "Enter new value to insert: ";
                cin >> newValue;
                list.insertAfterValue(value, newValue);
                break;
            case 4:
                list.deleteHead();
                break;
            case 5:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteNode(value);
                break;
            case 6:
                list.displayList();
                break;
            case 7:
                cout << "Enter value to search: ";
                cin >> value;
                if (list.search(value)) {
                    cout << value << " found in the list." << endl;
                } else {
                    cout << value << " not found in the list." << endl;
                }
                break;
            case 8:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}