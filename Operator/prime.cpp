#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cout<<"Enter any number:";
    cin>>n;
    for(int i=1;i<n;i++){
        if(n%i==0){
            count++;
        }
        else if(count>2){
            break;
        }
    }
    if(count>2){
        cout<<"The Number is Not prime"<<endl;
    }
    else{
        cout<<"The number is Prime"<<endl;
    }
}