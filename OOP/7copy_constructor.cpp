//Can Create Multiple Parametrised Constructer 
#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    
    public:
    char level;
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
    Hero(Hero& temp){
        cout<<"Copy Contructor called"<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    void print(){
        cout<<"Health "<<this->health<<endl;
        cout<<"Level "<<this->level<<endl;
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
    Hero suresh(70,'C');
    suresh.print();

    //Copy Constructer is Called
    Hero Ritesh(suresh);
    // Ritesh.health = suresh.health;
    // Ritesh.level = suresh.level;
    Ritesh.print();
}