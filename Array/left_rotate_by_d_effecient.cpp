#include <iostream>
using namespace std;
void leftrot(int arr[],int n,int d){
    //First creating the temp variable to store the first d element as suggested
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=d;i<n;i++){
        arr[i-d]=arr[i];
    }
    for(int i=0;i<d;i++){
        arr[n-d+i]=temp[i];
    }
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8};
    int n=8;
    int d=3;
    leftrot(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}