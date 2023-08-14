#include <iostream>
using namespace std;
class MyQueue{
    public:
        int cap,size;
        int *arr;
        //constructor
        MyQueue(int c){
            cap = c;
            size = 0; //initially queue is empty
            arr = new int[cap]; 
        }
        bool isFull(){
            return (size == cap);
        }
        bool isEmpty(){
            return (size ==0);
        }
        void enqueue(int x){
            if(isFull()){
                return;
            }
            arr[size] =x;
            size++;
        }
        void dequeue(){
            if(isEmpty()) return;
            for(int i=0;i<size-1;i++){
                arr[i]=arr[i+1];
            }
            size--;
        }
        int getFront(){
            if(isEmpty()){
                return -1;
            }else{
                return 0;
            }
        }
        int getRear(){
            if(isEmpty()){
                return -1;
            }else{
                return size-1;
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