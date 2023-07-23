#include <iostream>
using namespace std;
int even_odd(int n){
    if(n%2==0){
        cout<<"EVEN"<<endl;
    }
    else{
        cout<<"ODD"<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int result = even_odd(n);
}
