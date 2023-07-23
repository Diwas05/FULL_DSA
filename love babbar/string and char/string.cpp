#include <iostream>
using namespace std;
int main(){
    string str;
    str="Diwas";
    cout<<str.length()<<endl;
    str.push_back('c');
    cout<<"After push back string length->"<<str.length()<<endl;
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    cout<<endl;
    str.pop_back();
    cout<<str<<endl;
    string s = "Di\0was\0";
    cout<<s<<endl;

}