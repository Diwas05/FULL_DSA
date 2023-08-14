#include <iostream>
using namespace std;
class MyQueue{
    public:
        int cap,size,front;
        int *arr;
        //constructor
        MyQueue(int c){
            cap = c;
            size = 0; //initially queue is empty
            front = 0;
            arr = new int[cap]; 
        }
        bool isFull(){
            return (size == cap);
        }
        bool isEmpty(){
            return (size ==0);
        }
        void enqueue(int x){// Time: O(1)
            if(isFull()){
                return;
            }
            int rear = getRear();
            rear = (rear+1)%cap;
            arr[rear] = x;
            size++;
        }
        void dequeue(){// Time: O(1)
            if(isEmpty()) return;
            front = (front+1)%cap;
            size--;
        }
        int getFront(){
            if(isEmpty()){
                return -1;
            }else{
                return front;
            }
        }
        int getRear(){
            if(isEmpty()){
                return -1;
            }else{
                return (front+size-1)%cap;
            }
        }

};
int main(){
    MyQueue q(10); //creating queue of capacity 10
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Size:"<<q.size<<endl;
    cout<<"Front:"<<q.getFront()<<endl;
    cout<<"Rear:"<<q.getRear()<<endl;
    q.dequeue();
    cout<<"After Dequeue:"<<endl;
    cout<<"Size:"<<q.size<<endl;
    cout<<"Front:"<<q.getFront()<<endl;
    cout<<"Rear:"<<q.getRear()<<endl;
}