#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=6;i++){
        int value = i;
        for(j=1;j<=i;j++){
            cout<<value<<" ";
            value++;
        }
        cout<<endl;
    }
}