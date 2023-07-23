#include <iostream>
using namespace std;
int swap(int arr[],int n){
    int temp;
    for(int i=0;i<n;i=i+2){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
    return n;
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    cout<<swap(arr,n)<<endl;
    print(arr,n);
    return 0;
}