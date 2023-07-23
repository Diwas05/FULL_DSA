#include <iostream>
using namespace std;
int main(){
    int i,j,k,l,n;
    n=4;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            cout<<" "<<" ";
        }
        for(k=0;k<i+1;k++){
            cout<<k+1<<" ";
        }
        int value =i;
        for(l=0;l<i;l++){
            cout<<value<<" ";
            value--;
        }
        cout<<endl;
    }
}