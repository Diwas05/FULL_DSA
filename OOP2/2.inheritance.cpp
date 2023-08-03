#include <iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    // private:
    int age;

    public:
    int getAge(){
        return this->age;
    }
    void setAge(int a){
        this->age = a;
    }

};
//Child Class
class Male: public Human{
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
};

int main(){
    Male ob1;
    cout<<ob1.age<<endl;
    cout<<ob1.height<<endl;
    cout<<ob1.weight<<endl;
    cout<<ob1.color<<endl;
    ob1.sleep();
    //ob1.setAge(23);
    ob1.age=23;
    cout<<ob1.age<<endl;
}