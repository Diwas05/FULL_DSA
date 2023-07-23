#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={20,50,11,2,100,10};
    // int n=6;
    // int x=2;
    int result=search(arr,6,2);
    if(result==-1){
        cout<<"Element not found!!";
    }else{
        cout<<"Element is found at index:"<<result; 
    }
    return 0;
}