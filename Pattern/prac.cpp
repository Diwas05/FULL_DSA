#include <iostream>
using namespace std;
int main(){
    int i,j;
    char ch = 'A';
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
            cout<<ch<<" ";
            ch++;
        }
        ch=ch-2;
        cout<<endl;
    }
}