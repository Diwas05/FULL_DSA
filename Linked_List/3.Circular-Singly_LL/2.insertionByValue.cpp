#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // Constructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    // Destructor
    ~Node(){
        int val = this->data;
        if(this->next!=NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is free for node with value:"<<val<<endl;
    }
};
//Insert at any position by value
void insertNode(Node* &tail, int value, int d){//search  by value
    //Empty List
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }else{
        //Non Empty list
        //Assuming that value is present
        Node* curr = tail;
        while(curr->data!=value){
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
//print / traverse the list
void print(Node* &tail){
    if (tail == NULL) {
        cout << "List is empty." << endl;
        return;
    }

    Node* temp = tail;
    do
    {
        cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
    
}
int main(){
    // Node* node1 = new Node(10);
    Node* tail = NULL;
    insertNode(tail,10,3);
    print(tail);
    insertNode(tail,3,4);
    print(tail);
}