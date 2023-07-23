#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    n=6;
    for(i=1;i<=n;i++){
    char ch = n-i+'A';
        for(j=1;j<=i;j++){
            cout<<ch<<" ";
            ch++;
        }
        ch--;
        cout<<endl;
    }
}