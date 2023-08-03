#include <iostream>
using namespace std;
class Human{
    protected:
    int height;
    public:
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
class Male: public Human{ //same for protected mode as well
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
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