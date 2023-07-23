#include <iostream>
using namespace std;
void token(string str,int s){//Initially s=0;
    string temp =" ";
    while(str[s]!=' '||str[s]!='\0'){
        temp.push_back(str[s]);
        s++;
    }
    reverse_word(temp,s);
    if(str[s+1]!='\0'){
        token(str,s+2);
    }


} 
void reverse_word(string str,int e){
    int s = 0;
    e = e-1;
    char temp;
    while(s<=e){
        temp = str[s];
        str[s] = str[e];
        str[e] = temp;
        s++;
        e--;
    }
    cout<<str;
}
int main(){
    string str = "My name is Diwas";
    token(str,0);
}