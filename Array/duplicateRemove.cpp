//Duplicate remove from the sorted array
#include <iostream>
using namespace std;
int duplicate(int arr[],int n){
    int temp[n];
    int res =1;
    temp[0] = arr[0];
    for(int i=1;i<n;i++){
        if(temp[res-1]!=arr[i]){
            temp[res] = arr[i];
            res++;
        }
    }
    //copying the temp back to arr
    cout<<"Array after removing duplicate is:"<<endl;
    for(int i=0;i<res;i++){
        arr[i] = temp[i];
        cout<<arr[i]<<" ";
    }
    return res;
}
int main(){
    int arr[100]={11,22,22,22,33,33,33,44,44,44,55};
    int n = 11;
    cout<<duplicate(arr,n);
}