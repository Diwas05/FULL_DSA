#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,s;
    float area;
    cout<<"Enter the value of a,b,c:";
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area:"<<area;
    return 0;
}