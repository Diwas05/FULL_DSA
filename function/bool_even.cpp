#include <iostream>
using namespace std;
bool isEven(int n){
    if(n&1){
        return 0;//ODD
    }
    else{
        return 1;//EVEN
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(isEven(n)){
        cout<<"The number is Even"<<endl;
    }
    else{
        cout<<"The number is Odd"<<endl;
    }
}