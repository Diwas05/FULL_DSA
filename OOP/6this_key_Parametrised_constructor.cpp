//this keyword store the address of object 
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
        //Here "health" depict the input parameter
        //Here "this -> health" depict the Data Member 
        this -> health = health;
        cout<<"this->"<<this <<endl;
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
   Hero a(10);
   cout<<"Address of Static object 'a' is:"<<&a<<endl;
   cout<<"Hello"<<endl;

   //Dynamically
   Hero *h=new Hero(10);
   cout<<"Address of Dynamic object 'h' is:"<<h<<endl;


}