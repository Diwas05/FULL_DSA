#include <iostream>
using namespace std;
int main(){
    int i=3;
    int *p = &i;
    cout<<"The address:"<<p<<endl;
    cout<<"value of *p:"<<*p<<endl;
    cout<<&i<<endl;
    int num = 5;
    int a = num;
    cout<<"a before:"<<a<<endl;
    a++;
    cout<<"b after:"<<a<<endl;
    return 0;
}