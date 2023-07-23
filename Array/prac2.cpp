#include <iostream>
using namespace std;
//Function to perform left rotation in an array by one
int reverse(int arr[],int n){
   int res = 0;
   int count = 0;
   for(int i=0;i<n;i++){
    if(arr[i]!=0){
        arr[res]=arr[i];
        res++;
        count++;
    }
   }
   for(int i=count;i<n;i++){
    arr[i]=0;
   }
//    return (res+n-count);
}
int main(){
    int arr[]={1,2,0,0,3,0,4,5};
    int n = 8;
    reverse(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}