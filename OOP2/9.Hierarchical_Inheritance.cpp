#include <iostream>
using namespace std;

class A{
    public:
    void fun1(){
        cout<<"Inside Function one"<<endl;
    }
};

class B: public A{
    public:
    void fun2(){
        cout<<"Inside Function Two"<<endl;
    }
};

class C: public A{
    public:
    void fun3(){
        cout<<"Inside Function Three"<<endl;
    }
};

int main(){
    A ob1;
    ob1.fun1();

    B ob2;
    ob2.fun1();
    ob2.fun2();
    // ob2.fun3();

    C ob3;
    ob3.fun1();
    ob3.fun3();
}