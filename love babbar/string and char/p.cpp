#include <iostream>
using namespace std;
string p(string str){
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=str[i+1]){
            temp.push_back(str[i]);
        }else{
            i++;
        }
    }
    return temp;
}
int main(){
    string str = "abbaca";
    cout<<p(str);
}