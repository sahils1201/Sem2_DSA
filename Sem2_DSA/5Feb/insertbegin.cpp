#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;  //pointer to the next node in the list.
};
Node* Start=nullptr;
void atstart(){
    char choice;
    Node *ptr=(Node *)malloc(sizeof(Node));
    if(ptr==nullptr)
    {
        cout<<"Overflow.";
    }
    else
    {
        int val;
        cout<<"Enter Value";
        cin>>val;
        ptr->data = val;
        ptr->next = nullptr;
    }

}