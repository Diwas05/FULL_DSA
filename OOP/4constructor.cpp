#include <iostream>
using namespace std;
class Hero{
    //properties
    private:
    int health;
    
    public:
    char level;
    //Default Constucter
    Hero(){
        cout<<"Constructer Called"<<endl;
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
   cout<<"Hi"<<endl;
   //Object Created Statically 
   Hero a;
   cout<<"Hello"<<endl;

   //Dynamically
   Hero *h=new Hero;


}