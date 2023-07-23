#include <iostream>
using namespace std;
int fun(int n,int k){
    if(n==0){
        return k;
    }
    return fun(n-1,k+n);
}
int main(){
    int k=0;
    int n=5;
    cout<<fun(n,k);
    return 0;
}