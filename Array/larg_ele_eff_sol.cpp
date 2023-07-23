#include <iostream>
using namespace std;
int largest(int arr[],int n){
    int x = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[x]){
            x=i;
        }
    }
    return x;
}
int main(){
    int arr[]={1,22,33,222,3,4,55,66,8};
    int n=9;
    int result = largest(arr,n);
    cout<<"The largest element in an array is "<<arr[result];
}