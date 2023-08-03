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
    int getHeight(){
        return this->height;
    }
    void setHeight(int h){
        this->height = h;
    }
};

//Child class 
class Male: private Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main(){
    Male a;
    Human b;
    b.setHeight(100);
    cout<<b.getHeight()<<endl;
}