#include<iostream>
#include<vector>
using namespace std;
class MyStack{
    public:
    vector<int> v;
    void push(int x){
        v.push_back(x);
    }
    int pop(){
        int res = v.back();
        v.pop_back();
        return res;
    }
    int size(){
        return v.size();
    }
    bool isEmpty(){
        return v.empty();
    }
    int peek(){
        return v.back();
    }
};
int main(){
    MyStack s;
    s.push(5);
    s.push(15);
    s.push(25);
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    s.push(35);
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
}