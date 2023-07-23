//Can Create Multiple Parametrised Constructer 
//Shallow Copy -> Default copy copy contructor
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
   // Creating own Copy Contructor
    Hero(Hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch; 
        cout<<"Copy Contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

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

    //Destructor
    ~Hero(){
        cout<<"Destructor is called"<<endl;
    }

};
int main(){
    //Static
    Hero a;

    //Dynamic
    Hero *b = new Hero();
    //Manually Destructor call
    delete b;

    return 0;

}