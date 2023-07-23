#include <iostream>
using namespace std;
int main(){
    int n,nextNum;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++){
        nextNum = a+b;
        cout<<nextNum<<" ";
        a=b;
        b=nextNum;
    }
}