#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    
    public:
    char level;

    void print(){
        cout<<level<<endl;
    }
    //GETTER FUNCTION
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    //SETTER FUNCTION
    void setHealth(int h){
        health=h;
    }

    void setLevel(char ch){
        level = ch;
    }

};
int main(){
    //Static Allocation
    Hero a;
    a.setHealth(80);
    //a.level='B';(Since Level is public Data member so we can use this directly)
    a.setLevel('A');
    cout<<"level is "<<a.level<<endl;
    cout<<"Health is "<<a.getHealth()<<endl;

    //Dynamic Allocation
    Hero *h = new Hero;
    h->setLevel('A');
    h->setHealth(70);
    cout<<"level is "<<(*h).level<<endl;
    cout<<"Helth is "<<(*h).getHealth()<<endl;

    //Or,
    cout<<"Level is "<<h->level<<endl;
    cout<<"Health is "<<h->getHealth()<<endl;


}