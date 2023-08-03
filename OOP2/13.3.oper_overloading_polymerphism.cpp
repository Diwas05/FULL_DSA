#include<iostream>
using namespace std;
class B{
    public:
        int a;
        int b;
        //Printing STRING
        void operator+ (B &obj){//Taking the reference instead of copying
            cout<<"Hello Diwas"<<endl;
        }

        void operator() (){
            cout<<"I am bracket with value called:"<<this->a<<endl;
        }
};

int main(){
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1+obj2;
    // Whenever the bracket comes then operator() is called
    obj1();
}