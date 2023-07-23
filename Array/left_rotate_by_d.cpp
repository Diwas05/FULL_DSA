#include <iostream>
using namespace std;
//Function to perform left rotation in an array by one
int leftrotateone(int arr[],int n){
    int k=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=k;
}
int leftrotate_d(int arr[],int n,int d){
    for(int i=0;i<d;i++){
        leftrotateone(arr,n);
    }
}
int main(){
    int arr[]={12,2,4,2,6,2,8};
    int n = 7;
    int d = 3;
    leftrotate_d(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}