#include <iostream>
using namespace std;
int main(){
    int i,j;
    char ch = 'A';
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            cout<<ch<<" ";
            ch++; 
        }
        cout<<endl;
    }
}