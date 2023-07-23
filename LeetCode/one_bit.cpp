#include <iostream>
using namespace std;
int oneCount(int a,int b){
    int count = 0;
    while(a!=0){
        if(a&1 == 1){
            count = count +1;
        }
        a = a>>1;
    }
    while(b!=0){
        if(b&1 == 1){
            count++;
        }
        b = b>>1;
    }
    return count;
}
int main(){
    int a , b;
    cout<<"Enter the value of a and b:"<<endl;
    cin>>a>>b;
    int result = oneCount(a,b);
    cout<<result<<endl;
}