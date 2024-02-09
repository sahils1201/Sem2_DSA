#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node*& head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
    }

    Node* ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }

    ptr->next = n;
    n->next = NULL;
}

void insertAtHead(Node*& head, int val) {
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

void deleteHead(Node*& head) {
    if (head == NULL) {
        return;
    }

    Node* deletedNode = head;
    head = head->next;
    delete deletedNode;
}

void deleteNode(Node*& head, int val) {
    if (head == NULL) {
        return;
    }

    if (head->data == val) {
        deleteHead(head);
        return;
    }

    Node* ptr = head;
    while (ptr->next != NULL && ptr->next->data != val) {
        ptr = ptr->next;
    }

    if (ptr->next == NULL) {
        cout << val << " not found in the list." << endl;
        return;
    }

    Node* deletedNode = ptr->next;
    ptr->next = ptr->next->next;

    delete deletedNode;
    cout << val << " deleted from the list." << endl;
}

void insertAfterValue(Node*& head, int val, int newValue) {
    Node* ptr = head;
    while (ptr != NULL && ptr->data != val) {
        ptr = ptr->next;
    }

    if (ptr == NULL) {
        cout << "Node with value " << val << " not found." << endl;
        return;
    }

    Node* newNode = new Node(newValue);
    newNode->next = ptr->next;
    ptr->next = newNode;

    cout << newValue << " inserted after value " << val << "." << endl;
}

void displayList(Node* head) {
    Node* ptr = head;
    cout << "The list is: ";
    while (ptr != NULL) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;
}

bool search(Node* head, int val) {
    Node* ptr = head;
    while (ptr != NULL) {
        if (ptr->data == val)
            return true;
        else {
            ptr = ptr->next;
        }
    }
    return false;
}

Node * reverseList(Node * &head){ 
    Node * prevPtr = NULL;
    Node * ptr = head;
    Node * nextPtr;

    while(ptr!=NULL){
        nextPtr = ptr->next;
        ptr->next = prevPtr;

        prevPtr=ptr;
        ptr = nextPtr;
    }

    return prevPtr; 
}

void displayMenu() {
    cout << "\nLinked List Operations:" << endl;
    cout << "1. Insert at Tail" << endl;
    cout << "2. Insert at Head" << endl;
    cout << "3. Insert After Value" << endl;
    cout << "4. Delete Head" << endl;
    cout << "5. Delete Node" << endl;
    cout << "6. Display List" << endl;
    cout << "7. Reverse List" << endl;
    cout << "8. Search" << endl;
    cout << "9. Exit" << endl;
}

int main() {
    Node* start = NULL;
    int choice, value, newValue;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value to insert at tail: ";
            cin >> value;
            insertAtTail(start, value);
            cout << value << " inserted at the tail." << endl;
            break;
        case 2:
            cout << "Enter value to insert at head: ";
            cin >> value;
            insertAtHead(start, value);
            cout << value << " inserted at the head." << endl;
            break;
        case 3:
            cout << "Enter value after which to insert: ";
            cin >> value;
            cout << "Enter new value to insert: ";
            cin >> newValue;
            insertAfterValue(start, value, newValue);
            break;
        case 4:
            deleteHead(start);
            cout << "Head deleted." << endl;
            break;
        case 5:
            cout << "Enter value to delete: ";
            cin >> value;
            deleteNode(start, value);
            break;
        case 6:
            displayList(start);
            break;
        case 7:
            start = reverseList(start);
            cout << "Linked list reversed successfully\n"<<endl;
            displayList(start);
            break;
        case 8:
            cout << "Enter value to search: ";
            cin >> value;
            if (search(start, value)) {
                cout << value << " found in the list." << endl;
            } else {
                cout << value << " not found in the list." << endl;
            }
            break;
        case 9:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 8);

    return 0;
}