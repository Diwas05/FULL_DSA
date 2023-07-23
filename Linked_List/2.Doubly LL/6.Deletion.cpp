#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //constructor
    Node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    //Destructor
    ~Node(){
        int val = this->data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed with data:"<<val<<endl;
    }
};
//1.Function to print / traverse the linked list
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
//2.Function to get the length of the linked list
int getLength(Node* &head){
       Node* temp = head;
       int len=0;
        while(temp!=NULL){
            len++;
            temp = temp->next;
    }
    return len;
}
//3.Function to insert at Head
void insertAtHead(Node* &head,int d){
    //Creating the new node
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
//4.Function to insert at Tail
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
//5.Function to insert at any position
void insertAtPosition(Node* &head,Node* &tail,int pos,int d){
    //insert at head / First
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp = head;
    //traversing the node
    int cnt = 1;
    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }
    //insertion at last node
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    //creating the new node
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
//6.Deletion at any position
void deleteNode(int pos,Node* &head,Node* &tail){
    //Deletion at first node
    if(pos==1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }else{
        //Deletion at middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<pos){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail = prev;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }

}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,12);
    print(head);
    insertAtPosition(head,tail,2,9);
    print(head);
    deleteNode(3,head,tail);
    print(head);
    cout<<tail->data<<endl;
}