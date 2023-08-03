#include<iostream>
using namespace std;
class Animal{
    public:
        void speak(){
            cout<<"Speaking"<<endl;
        }
};
class Dog: public Animal{
    public:
        //Chnaging the speak() defination of dog class
        void speak(){
            cout<<"Barking"<<endl;
        }
};

int main(){
    Dog obj;
    obj.speak();
}