// linked list implementation

#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;

    Node(int v)
    {
        value = v;
        next = NULL;
    }
};
void move(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULLReahed";
}
// insert new node at start
void insertAtstart(Node *&head, int val)
{
    Node *newNode = new Node(val);
    // the nest of newnode will be head because the we want to insert element at head
    newNode->next = head;
    // now set head to new val so that changes will be reflected effectively
    head = newNode;
}
// insert at tail of the linked list
void insertAtEnd(Node *&head, int val)
{
    // firstly we check if the linked list != null because it will throw an error
    if (head == NULL)
    {
        insertAtstart(head, val);
    }

    // creation of new node to insert at the end of the linked lists;
    Node *newNode = new Node(val);
    // for traversing we have to create a temp variable and assign it to the head;
    Node *temp = head;
    // go to the next last node using while loop
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // now we are at last node and  temp is pointing to last node;
    temp->next = newNode;
}
// insert at middle
void insertATmiddle(Node *&head, int val, int position)
{
    // if the list is emp or null

    if (head == NULL)
    {
        insertAtstart(head, val);
        return;
    }
    Node *newNode = new Node(val);
    //  we neeed previous node to insrt elemeny at required position
    Node *prev = head;
    int count = 1;
    // traverse the whole linked list and check where to insert element in the middle
    while (count < (position - count))
    {
        prev = prev->next;
    }
    // if we got previous elemment thene asdsign to newnode
    newNode->next = prev;
    prev->next = newNode;
}
void deleteAtStart(Node *&head)
{
    // cout<<"I have reached in this function"<<endl;

    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    free(temp);
}
// delete at middlw
void deleteAtMiddle(Node *&head)
{
    // check the edge case that if the linked passed linked list is empty || or has one element in the list, now
    if (head == NULL)
    {
        return;
        ;
    }
    if (head->next == NULL)
    {
        deleteAtStart(head);
    }
    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    Node *lastNode = temp->next;
    temp->next = NULL;

    free(temp);
} 

// delete at middle

void deleteAtMiddle(Node* &head,int position){\
// checkig if the node has one element or one number then
if(position==1){
    deleteAtStart(head);
}
 Node* prev = head; ///let the prev node as heqad to traverse over the original 
 int count = 1; //we need to track current position of the current node  
while(count < (position - 1)){
prev = prev->next;
count++;
}
Node* current = prev->next; // setting current nodes next tp the prev next and 
prev->next = current->next;
free(current);
}

int main()
{
    Node *node1 = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    Node *head = node1;
    '\n';
    cout << "value of traverse method" << endl;
    move(head);
    // cout<<"Node_Values____??????"<<"Node values"<<endl;
    // cout<<"Node1 Address: "<<node1->value<<endl;
    //  cout<<"Node2 Address: "<<node2->value<<endl;
    // cout<<"Node3 Address: "<<node3->value<<endl;
    // cout<<"Node4 Address: "<<node3->value<<endl;
    // changing function call
    cout << "insertion of value at beginning" << endl;
    insertAtstart(head, 9);
    move(head);
    cout << "insertion of value at the end" << endl;
    insertAtEnd(head, 10);
    move(head);
    // cout<<"insertion at middle"<<endl;
    // insertATmiddle(head,7,4);
    // move(head);
    cout << endl;
    cout << "after deletion of element from start" << endl;
    deleteAtStart(head);
    move(head);
    cout << endl;
    cout << "Deletion at End" << endl;
    deleteAtMiddle(head);
    move(head);
    // update function
}