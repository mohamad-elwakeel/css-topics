#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head = NULL;

void insertNode (int value);
void display();
void deleteNode(int value);
void insertNodeInBeginning(int value);
void deleteNodeInBeginning();
void deleteNodeAtEnd();

int main(){
    // insertNode(5);
    // insertNode(10);
    // insertNode(15);
    // insertNode(7);
    // insertNode(5);
    // insertNode(15);
    // display();
    // deleteNode(10);
    // display();

    insertNodeInBeginning(20);
    insertNodeInBeginning(15);
    display();
    insertNodeInBeginning(10);
    insertNodeInBeginning(5);
    display();
    deleteNodeInBeginning();
    display();
    deleteNodeAtEnd();
    display();
    return 0;
}

void insertNode(int value){
    node* new_node, *last;
    new_node = new node;
    new_node->data = value;

    if(head == NULL){
        head = new_node;
        new_node->next = NULL;
    } else {
        last = head;
        while (last->next != NULL){
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}

void display(){
    node* current_node;
    if(head == NULL) {
        cout << "linked list empty."; 
    } else {
        current_node = head;
        while (current_node != NULL) {
            cout << current_node->data << " \t";
            current_node = current_node->next; 
        }
    }
    cout << endl ;
}

void deleteNode(int value) {
    node* current, *previous;

    current = head;
    previous = head;

    if(current->data == value){
        head = current->next;
        free(current);
        return;
    }

    while(current->data != value){
        previous = current;
        current = current->next;
    }
    previous->next = current->next;
    free(current);
}

void insertNodeInBeginning(int value){
    node* new_node = new node;
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}

void deleteNodeInBeginning(){
    if(head == NULL){
        cout << "Linked list is empty. \n"; 
    } else {
        node* first_node = head;
        head = first_node->next;
        delete(first_node);
    }
}

void deleteNodeAtEnd(){
    if (head == NULL)
    {
        cout << "Linked list is empty. \n"; 
    } else if(head->next == NULL){
        delete(head);
        head = NULL;
    } else {
        node* ptr = head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete(ptr->next);
        ptr->next = NULL;
    }
    
}