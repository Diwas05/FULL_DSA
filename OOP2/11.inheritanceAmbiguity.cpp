#include <iostream>
using namespace std;
class A{
    public:
        void fun(){
            cout<<"Inside class A"<<endl;
        }
};
class B{
    public:
        void fun(){
            cout<<"Inside class B"<<endl;
        }
};
class C: public A, public B{

};
int main(){
    //Creating an abject for class C
    C obj1;
    obj1.A::fun();
    obj1.B::fun();

}