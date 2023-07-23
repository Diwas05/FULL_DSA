#include <iostream>
using namespace std;
int main(){
    char ch = 'A';
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}