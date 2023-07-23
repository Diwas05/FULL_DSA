#include <iostream>
// #include "Hero.cpp"
using namespace std;

class Hero{
    // public:
    string name;
    int age;
};
int main(){
    Hero h1;
    h1.name="Diwas";
    h1.age=20;
    cout <<"size:"<<sizeof(h1)<<endl;
    cout <<"Name:"<<h1.name<<endl;
    cout <<"age:"<<h1.age<<endl;
    return 0;
}