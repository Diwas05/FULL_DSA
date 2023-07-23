#include <iostream>
using namespace std;
//Function to perfrom an insertion
int insert(int arr[],int n,int cap,int x,int pos){
    if(n==cap){
        return n;
    }
    int index = pos - 1;
    for(int i=n-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=x;
    return (n+1);
}
//Function to print an array
void print(int arr[],int result){
    for(int i=0;i<result;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,3,4,5,6};
    int n = 5;
    int cap = 6;
    int x = 2;
    int pos = 2;
    int result = insert(arr,n,cap,x,pos);
    print(arr,result);
    // cout<<result;
    
    return 0; 
}