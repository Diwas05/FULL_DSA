#include <iostream>
using namespace std;
//Getting the index of the element to be deleted
int index(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            return i;
            break;
        }
    }
    //If Element is not present
    if(i==n){
        return -1;
    }
}
//Function to delete the element
int delete1(int arr[],int n,int index){
    //If elerment is not present0
    if(index==-1){
        return n;
    }
    for(int i=index;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    return (n-1);
}
//Function to print the array
void print(int arr[],int result1){
    for(int i=0;i<result1;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,44,55,66};
    int n=8;
    int x=12;
    int result = index(arr,n,x);
    int result1 = delete1(arr,n,result);
    cout<<result1<<endl;
    print(arr,result1);
}