#include <iostream>
using namespace std;

//Basic Flow of the Program:
/*
    Once the linked list class is called from the main function, it by default constructs a head pointer with the value of NULL
    This function only happens when we initially define a new list.
*/

/*
    Later when inserting a new node, we instiantiate the class of node (in which we defined our data structure) which uses the 
    parametrized constructor to define a new node into memory which is initially set to NULL, since we're adding node at the end
    we need to change the link of the node before the last node.
*/


class Node {
    public:
        int data;
        Node * link;

    Node(int data){ //Parameterized constructor
        this -> data = data;
        this -> link = NULL;
    }
};


class LinkedList{
    Node* head;
    
    public:
    LinkedList(){ head = NULL; } //default constructor

    void insertNode(int);
    void printList();
};

void LinkedList::insertNode(int data){
    Node* newNode = new Node(data);
    
    if(head == NULL){
        head = newNode;
        return;
    }

    //if head != NULL --- using the while loop we go the end of the last node and change the address of the penultimate node
    Node* temp = head;
    while(temp->link != NULL){
        temp = temp -> link;
    }
    temp->link = newNode;
}

void LinkedList::printList()
{
    Node* temp = head;
  
    // Check for empty list.
    if (head == NULL) {
        cout << "List empty" << endl;
        return;
    }
  
    // Traverse the list.
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->link;
    }
}

int main(){
    LinkedList list;

    list.insertNode(1);
    list.insertNode(2);
    list.insertNode(3);

    list.printList();
}
