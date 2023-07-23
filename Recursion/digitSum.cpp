#include <iostream>
using namespace std;
int sum(int n,int k){
    if(n==0){
        return k;
    }
    k=k+n%10;
    sum(n/10,k);
}
int main(){
    cout<<sum(9987,0);
}