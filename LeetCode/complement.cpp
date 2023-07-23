#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int m=n;
    int mask = 0;
    int ans;
    if(n==0){
        ans = 1;
        cout<<"complement:"<<ans<<endl;
    }else{

    while(n!=0){
        mask = (mask<<1)|1;
        n = n>>1;
    }
    ans = (~m) & mask;
    cout<<"Complement:"<<ans<<endl;
    }
}