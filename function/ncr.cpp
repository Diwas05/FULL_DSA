#include <iostream>
using namespace std;
int fact(int n){
    int ans = 1;
    for(int i=1;i<=n;i++){
        ans = ans * i;
    }
    return ans;
}
int main(){
    int n,r;
    cout<<"Enter the value:"<<endl;
    cin>>n>>r;
    int result = fact(n)/(fact(r)*fact(n-r));
    cout<<result<<endl;
    
}