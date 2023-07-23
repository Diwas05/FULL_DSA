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
//3.Function to insert at Tail
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail,8);
    print(head);
    cout<<getLength(head)<<endl;
}