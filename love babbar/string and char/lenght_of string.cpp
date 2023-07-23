#include <iostream>
using namespace std;
int main(){
    int count = 0;
    char ch[20];
    cout<<"Enter your name:"<<endl;
    cin>>ch;
    int i=0;
    while(ch[i]!='\0'){
        count ++;
        i++;
    }
    cout<<count<<endl;
}