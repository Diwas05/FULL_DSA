#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"Enter the value of a:\n";
    cin>>a;
    cout<<"a without swapping:"<<a<<endl;
    cout<<"Enter the value of b:";
    cin>>b;
    cout<<"b without swapping:"<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"a after swapping:"<<a<<endl;
    cout<<"b after swapping:"<<b<<endl;
    return 0;
}