#include <iostream>
using namespace std;
int sec_lar(int arr[],int n){
    int x = 1;
    int y = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[x]){
            x = i;
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]>arr[y] && arr[i]!=arr[x]){
            y=i;
        }
    }
    
    return y;
}

int main(){
    int arr1[] = {1,2,321,4,5,63,7};
    int n=7;
    int result = sec_lar(arr1,n);
    cout<<"The Second largest element in an array is "<<arr1[result];

}