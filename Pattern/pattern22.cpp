#include <iostream>
using namespace std;
int main(){
    int i,j,k,l,m,n;
    n=9;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        for(k=0;k<i;k++){
            cout<<"*"<<" ";
        }
        for(l=0;l<i;l++){
            cout<<"*"<<" ";
        }
        int val = n;
        for(m=0;m<n-i;m++){
            cout<<val-i<<" ";
            val--;

        }
        cout<<endl;
    }
} 