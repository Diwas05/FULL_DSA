#include <iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"You are inside class A"<<endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"You are inside class B"<<endl;
    }
};

class D{
    public:
    void fun4(){
        cout<<"You are inside class D"<<endl;
    }
};

class C: public A, public D{
    public:
    void fun3(){
        cout<<"You are inside class C"<<endl;
    }
};

int main(){
    A ob1;
    ob1.fun1();
}