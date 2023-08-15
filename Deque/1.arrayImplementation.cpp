#include <iostream>
using namespace std;
class Deque{
    public:
        int cap,size;
        int *arr;
        Deque(int c){
            cap = c;
            size = 0;
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
            arr[size] = x;
            size++;
        }
        void deleteRear(){
            if(isEmpty()) return;
            size--;
        }
        int getRear(){
            if(isEmpty()) return -1;
            else return (size-1);
        }
        void insertFront(int x){
            if(isFull()) return;
            for(int i=size-1;i>=0;i--){
                arr[i+1] = arr[i];
            }
            arr[0] = x;
            size++;
        }
        void deleteFront(){
            if(isEmpty()) return;
            for(int i=0;i<size-1;i++){
                arr[i] = arr[i+1];
            }
            size--;
        }
        int getFront(){
            if(isEmpty()) return -1;
            else return 0;
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