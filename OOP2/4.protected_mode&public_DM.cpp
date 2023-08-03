#include <iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;

    public:
    int getAge(){
        return this->age;
    }

    void setAge(int a){
        this->age = a;
    }
};

//Child class 
class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
    //Public DM of Parent Class in Protected child class cannot be accessed from outside, but the child class can access it. Therefore to acceess it from outside we can create the getter/setter function in the child class. 
    int getHeight(){
        return this->height;
    }
    void setHeight(int h){
        this->height = h;
    }
};

int main(){
    Male a;
    a.setHeight(177);
    cout<<a.getHeight()<<endl;
}