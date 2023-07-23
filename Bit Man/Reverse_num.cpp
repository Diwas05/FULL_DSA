#include <iostream>
using namespace std;
int main(){
    int n = 123;
    while(n!=0){
        int num = n%10;
        cout<<num;
        n=n/10;
    } 
}