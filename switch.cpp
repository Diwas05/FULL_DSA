#include <iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the day you want to print (1 to 7):";
    cin>>day;
    switch(day){
        case 1:cout<<"Monday";
                break;
        case 2:cout<<"Tuesday";
                break;
        case 3:cout<<"Wednesday";
                break;
        case 4:cout<<"Thrusday";
                break;
        case 5:cout<<"Friday";
                break;
        default:cout<<"Invalid input";
    }
}