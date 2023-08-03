#include<iostream>
using namespace std;
//FUNCTION OVERLOADING WITH DIFFERENT TYPES OF ARGUMENTS
class A{
    public:
        void sayhello(char name){
            cout<<"Hello Diwas"<<endl;
        }
        void sayhello(string name){
            cout<<"Hello "<<name<<endl;
        }
};
int main(){
    A obj;
    obj.sayhello('A');
    obj.sayhello("Mundra");

    return 0;
}