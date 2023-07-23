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
    //Creation of Object
    Hero Diwas;
    //Using setter functionto st the value of Health
    Diwas.setHealth(70);
    //Using GetHealth Function to access the private data member
    cout<<"Diwas health is :"<<Diwas.getHealth()<<endl;
    //Diwas.health=70;
    Diwas.level='A';
    cout<<"size: "<<sizeof(Diwas)<<endl;
    // cout<<"Health is:"<<Diwas.health<<endl;
    cout<<"Level is:"<<Diwas.level<<endl;
}