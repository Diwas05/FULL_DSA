#include <iostream>
using namespace std;
void reverse(int arr[],int n){
    int temp;
    int low = 0;
    int high = n-1;
    while(low<high){
        temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    reverse(arr,n);
    printarr(arr,n);
    return 0;    

}