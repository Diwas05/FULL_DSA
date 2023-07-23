//Not a tail recursive function
#include <iostream>
using namespace std;
void fun(int n){
    if(n==0){
        return;
    }
    fun(n-1);
    cout<<n<<" ";
}
int main(){
    fun(4);
    return 0;
}