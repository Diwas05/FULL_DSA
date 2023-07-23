#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }
};

class Dog: public Animal{

};

class PitBull: public Dog{

};
int main(){
    PitBull p;
    p.speak();
    cout<<p.age<<endl;
    return 0;
}