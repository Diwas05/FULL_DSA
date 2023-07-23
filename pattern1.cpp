#include <iostream>
using namespace std;
int main(){
    int i,j;
    i=1;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            cout<<j;//Try to reverse: 4-j+1
        }
        cout<<endl;
    }
    return 0;
}