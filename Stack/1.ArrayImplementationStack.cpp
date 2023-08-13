#include <iostream>
using namespace std;
class MyStack{
    public:
    int *arr;
    int cap;
    int top;
    MyStack(int c){
        cap = c;
        arr = new int[cap];//Dynamic 
        top = -1;
    }
    void push(int x){
        //Handling overflow condition
        if(top == cap-1){
            cout<<"The Stack is Full"<<endl;
        }
        top++;
        arr[top] = x;
    }
    int pop(){
        //Handling underflow condition
        if(top == -1){
            cout<<"The stack is Empty"<<endl;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        //Handling underflow condition
        if(top == -1){
            cout<<"The stack is Empty"<<endl;
        }
        return arr[top];
    }
    int size(){
        return (top+1);
    }
    int isEmpty(){
        return (top==-1);
    }

};
int main(){
    MyStack s(10);
    cout<<s.cap<<endl;
    s.push(5);
    s.push(15);
    s.push(25);
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.push(35);
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}