#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++){
        //int value = i;
        for(j=1;j<=i;j++){
            cout<<i-j+1<<" ";
            // value--;
        }
        cout<<endl;
    }
}