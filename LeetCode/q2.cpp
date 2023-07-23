#include <iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;//Left Shift by 1
    }
    cout<<count<<endl;
}