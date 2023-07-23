#include <iostream>
using namespace std;
void duplicate(int arr[],int n){
    int res = 1;
    for(int i = 1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
        //cout<<arr[res]<<" ";
    //Code for printing the array after removing the duplicates
    }
    for(int i=0;i<res;i++){
        cout<<arr[i]<<" ";
    }
   // return res;
}
int main(){
    int arr[100]={1,2,2,2,3,3,3,3,4,5};
    int n=10;
    duplicate(arr,n);
}