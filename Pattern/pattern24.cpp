#include <iostream>
using namespace std;
int main(){
    int i,j,k,l,n,a,b,c,d;
    n=5;
    for(i=0;i<n;i++){
        for(j=0;j<n-i+1;j++){
            cout<<" "<<" ";
        }
        for(k=0;k<i+1;k++){
            cout<<"*"<<" ";
        }
        
        for(l=0;l<i;l++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    for(a=0;a<n-1;a++){
        for(b=0;b<a+3;b++){
            cout<<" "<<" ";        
        }
        for(c=0;c<n-1-a;c++){
            cout<<"*"<<" ";
        }
        for(d=0;d<n-a-2;d++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}