#include <iostream>
using namespace std;
int unique(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        x = x^arr[i];
    }
    return x;
}
int main(){
    int arr[]={1,2,3,2,1};
    int n=5;
    cout<<unique(arr,n);
}