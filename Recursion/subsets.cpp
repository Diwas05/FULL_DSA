#include <iostream>
#include <string>
using namespace std;
int subsets(string s,string curr="",int i=0){
    if(i==s.length()){
        cout<<curr<<" ";
        return 0;
    }
    subsets(s,curr,i+1);
    subsets(s,curr+s[i],i+1);
}
int main(){
    string s = "ABC";
    subsets(s);
    return 0;
}