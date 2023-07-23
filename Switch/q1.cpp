#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<endl;
    while(1){
        cout<<"Enter your choice:"<<endl;
        cout<<"Enter 1 for First"<<endl;
        cout<<"Enter 2 for Second"<<endl;
        cout<<"Enter 3 to exit the program"<<endl;
        cin>>num;

    switch(num){

        case 1: cout<<"First"<<endl;
                break;
        
        case 2: cout<<"Second"<<endl;
                break;
        
        case 3: cout<<"Terminating Program"<<endl;
                exit(0);

        default: cout<<"It is default case"<<endl;
    }
    }
    cout<<endl;
    return 0;
}