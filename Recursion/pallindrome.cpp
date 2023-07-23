#include <iostream>
#include <string>
using namespace std;
bool pal(string &str,int start,int end){
    if(start>=end){
        return true;
    }
    return(str[start]==str[end])&&pal(str,start+1,end-1); 
}
int main(){
    string str = "bxzxba";
    int size = str.length();
    int result=pal(str,0,size-1);
    if(result==1){
        cout<<"pallindrome"<<endl;
    }else{
        cout<<"Not Plallindrome"<<endl;
    }
}