#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

//Insertion at the head of the of the node
void insertAtTail(Node* &tail, int d){
    //New Node creation
    Node* temp = new Node(d);
    tail->next=temp;
    tail = tail->next;
}

//Print function
void print(Node* &head){
    //Creating temp pointer pointing to head
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int main(){
    //Created a new node
    Node* node1 = new Node(10);
    //head pointing to node1
    Node* head = node1;
    Node* tail = node1;
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);

}