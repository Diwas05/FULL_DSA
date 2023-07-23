#include <iostream>
using namespace std;
#define INT_MAX = 2147483647
#define INT_MIN = -2147483648
int main(){
    int n = -2112;
    int ans = 0;
    while(n!=0){
            int digit = n%10;
            if((ans>INT_MAX/10)||(ans<INT_MIN/10)){
                cout<<"The number is out of range"<<endl;
                break;
            }
            ans = (ans * 10)+digit;
            n=n/10;
        }
    cout<<ans<<endl;

}