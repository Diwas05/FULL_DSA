#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Binary Number:"<<endl;
    cin>>n;
    //int ans=1;
    int sum = 0;
    int i = 0;
    while(n!=0){
        int bit = n%10;
        int ans = bit * pow(2,i);
        sum = sum + ans;
        //n = n>>1;
        n = n/10;
        i++;
    } 
    cout<<"Decimal Number:"<<sum<<endl;
}