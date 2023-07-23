#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            char ch ='A'+i;//TYPE CASTING
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}