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

   //Object Created Statically 
   Hero a(10);
   //cout<<"Address of Static object 'a' is:"<<&a<<endl;
   a.print();

   //Dynamically
   Hero *h=new Hero(10);
   h->print();
   
   Hero temp(22,'B');
   temp.print();


}