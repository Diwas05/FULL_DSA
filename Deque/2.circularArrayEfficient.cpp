#include <iostream>
using namespace std;
class Deque{
    public:
        int cap,size,front;
        int *arr;
        Deque(int c){
            cap = c;
            size = 0;
            front = 0;
            arr = new int[cap];
        }
        bool isFull(){
            return (size==cap);
        }
        bool isEmpty(){
            return (size==0);
        }
        void insertRear(int x){
            if(isFull()) return;
            int new_rear = (front+size)%cap;
            arr[new_rear] = x;
            size++;
        }
        void deleteRear(){
            if(isEmpty()) return;
            size--;
        }
        int getRear(){
            if(isEmpty()) return -1;
            else return (front+size-1)%cap;
        }
        void insertFront(int x){
            if(isFull()) return;
            front = (front+cap-1)%cap;
            arr[front] = x;
            size++;
        }
        void deleteFront(){
            if(isEmpty()) return;
            front = (front+1)%cap;
            size--;
        }
        int getFront(){
            if(isEmpty()) return -1;
            else return front;
        }
};
int main(){
    Deque dq(10);
    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(30);
    dq.insertRear(50);
    cout<<"Size before deletion:"<<dq.size<<endl;
    cout<<"Index of Front before deletion:"<<dq.getFront()<<endl;
    cout<<"Index of Rear before deletion:"<<dq.getRear()<<endl;
    dq.deleteFront();
    cout<<"Size after 1st deletion:"<<dq.size<<endl;
    cout<<"Index of Front after 1st deletion:"<<dq.getFront()<<endl;
    cout<<"Index of Rear after 1st deletion:"<<dq.getRear()<<endl;
    dq.deleteRear();
    cout<<"Size after 2nd deletion:"<<dq.size<<endl;
    cout<<"Index of Front after 2nd deletion:"<<dq.getFront()<<endl;
    cout<<"Index of Rear after 2nd deletion:"<<dq.getRear()<<endl;
}   