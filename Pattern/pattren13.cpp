#include <iostream>
using namespace std;
int main(){
    char ch ='A';
    int i,j;
    for(i=0;i<4;i++){
        char value = i;
        for(j=0;j<=i;j++){
            char val = ch+value;
            cout<<val<<" ";
            value++;
        }
        cout<<endl;
    }
}

//OR, can use ('A'+row+col-2) as formula

