//Can Create Multiple Parametrised Constructer 
#include <iostream>
#include <cstring>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    
    public:
    char level;
    char *name;//Dynamic Allocation 

    Hero(){
        cout<<"Simple Constructor is called"<<endl;
        name = new char[100]; //Dynamic 
    }
    //Parametrised Constucter
    Hero(int health){ 
        this -> health = health;
        cout<<"this->"<<this <<endl;
    }
    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }
    //Creating own Copy Contructor
    // Hero(Hero& temp){
    //     cout<<"Copy Contructor called"<<endl;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<endl;
        cout<<"[ Name: "<< this->name<<" ,";
        cout<<"Health: "<<this->health<<" ,";
        cout<<"Level: "<<this->level<<" ]";
        cout<< endl << endl;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }

};
int main(){
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Diwas";
    hero1.setName(name);

    hero1.print();

    //Use Default Copy Constructor

    Hero hero2(hero1);
    hero2.print();
    hero1.name[0] = 'M';
    hero1.print();

    hero2.print();

}