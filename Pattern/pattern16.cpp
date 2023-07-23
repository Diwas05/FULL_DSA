#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    n=4;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}