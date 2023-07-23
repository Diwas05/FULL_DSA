#include <iostream>
using namespace std;
int main(){
    int i,j;
    int count=0;
    for(i=1;i<=2;i++){
        for(j=1;j<=4;j++){
            count++;
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}