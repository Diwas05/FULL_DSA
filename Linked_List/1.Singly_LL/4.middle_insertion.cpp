#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    //Constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
//Head insertion
void insertAtHead(Node* &head, int data){
    //New Node Creation
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
//print the linked list
void print(Node* &head){
    //Creating a pointer of type Node pointing to head
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
//Tail insertion
void insertAtTail(Node* &tail,int data){
    //New Node Creation
    Node* temp = new Node(data);
    tail->next = temp;
    tail = tail->next;
}
//Middle Insertion
void insertAtPosition(Node* &head,Node* &tail,int position,int d){
    //Insert at start

    if(position==1){
        insertAtHead(head,d);
        return;
    }

    //Temp pointer pointing to head
    Node* temp = head;
    int cnt = 1;
    //Traversing the node
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }

    //Creating the node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

    //Insert at last position
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
}
int main(){
    Node* node1 = new Node(10);
    //Creating head pointing to node1
    Node* head = node1;
    //Creating tail initially pointing to node1 and as the node are added the pointer is moved forward 
    Node* tail= node1;
    insertAtHead(head,14);
    insertAtTail(tail,8);
    insertAtPosition(head,tail,2,12);
    insertAtPosition(head,tail,1,16);
    insertAtPosition(head,tail,6,6);
    print(head);
    cout<<endl;
    cout<<"Head Data:"<<head->data<<endl;
    cout<<"Tail Data:"<<tail->data<<endl;
    cout<<tail->next<<endl;
}