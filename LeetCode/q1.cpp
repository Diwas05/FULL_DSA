//Q.WAP to find the sum and product of the digit and subtract product and sum
#include <iostream>
using namespace std;
int main(){
    int n,prod,sum;
    prod=1;
    sum=0;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        prod = prod*digit;
        sum = sum+digit;
        n=n/10;
    }
    cout<<prod<<endl;
    cout<<sum<<endl;
    cout<<"Product - Sum:"<<prod-sum<<endl;
}