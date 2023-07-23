#include <iostream>
using namespace std;
int main(){
    int i,j;
    int count=0;
    for(i=1;i<=4;i++){
        for(j=1;j<=i;j++){
            count++;
            cout<<count;
        }
        cout<<endl;
    }
    return 0;
}